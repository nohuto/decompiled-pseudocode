/*
 * XREFs of MiShadowTopLevelPxes @ 0x140355A40
 * Callers:
 *     MiCopyTopLevelMappings @ 0x140355968 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A3FA8 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140378AC8 (MiTransformValidPteInPlace.c)
 */

char __fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // r12
  struct _LIST_ENTRY *Flink; // r13
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // r8
  bool v14; // zf
  __int64 v16; // [rsp+20h] [rbp-38h]
  signed __int64 *v17; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  HIDWORD(v16) = 0;
  v4 = a3;
  v5 = a2;
  if ( (MiFlags & 0xC00000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1928);
    if ( v6 )
    {
      LOBYTE(CurrentThread) = (_BYTE)PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        Flink = PsInitialSystemProcess[1].ProcessListEntry.Flink;
        v8 = ((unsigned int)a2 >> 3) & 0x1FF;
        LODWORD(v16) = 256;
        v17 = qword_140C4E27C;
        if ( a3 )
        {
          do
          {
            if ( _bittest64(qword_140C4E27C, (unsigned int)(v8 - 256)) )
            {
              v9 = (__int64 *)(v6 + 8 * v8);
              v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)Flink + 8 * v8);
              CurrentThread = (struct _KTHREAD *)MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
              if ( (struct _KTHREAD *)v10 != CurrentThread )
              {
                v11 = v6 + 8 * v8;
                if ( (*(_BYTE *)v9 & 1) == 0 )
                {
                  v12 = 0;
                  LODWORD(CurrentThread) = MiPteInShadowRange(v11);
                  if ( !(_DWORD)CurrentThread )
                    goto LABEL_11;
                  LODWORD(CurrentThread) = MiPteHasShadow();
                  if ( (_DWORD)CurrentThread )
                  {
                    v12 = 1;
                    if ( !HIBYTE(word_140C4E008) )
                    {
                      v14 = (v10 & 1) == 0;
                      goto LABEL_20;
                    }
                  }
                  else
                  {
                    CurrentThread = KeGetCurrentThread();
                    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                    {
                      v14 = (v10 & 1) == 0;
LABEL_20:
                      if ( !v14 )
                      {
                        LOBYTE(CurrentThread) = 0;
                        v10 |= 0x8000000000000000uLL;
                      }
                    }
                  }
LABEL_11:
                  *v9 = v10;
                  if ( v12 )
                    LOBYTE(CurrentThread) = MiWritePteShadow(v6 + 8 * v8, v10, v13);
                  goto LABEL_6;
                }
                LOBYTE(CurrentThread) = MiTransformValidPteInPlace(v11, v5, v10, 3LL, v16, v17);
              }
            }
LABEL_6:
            v5 += 8LL;
            v8 = (unsigned int)(v8 + 1);
            --v4;
          }
          while ( v4 );
        }
      }
    }
  }
  return (char)CurrentThread;
}
