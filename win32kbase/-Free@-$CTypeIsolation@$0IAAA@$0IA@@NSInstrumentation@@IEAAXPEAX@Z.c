/*
 * XREFs of ?Free@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0092D30
 * Callers:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0055800 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C019A620 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<32768,128>::Free(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // r14
  __int64 *v6; // r15
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  ULONG v10; // ebp
  __int64 v11; // rcx

  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 36) )
    {
      memset((void *)a2, 0, 0x80uLL);
      ExFreeToPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(a1 + 24), (PVOID)a2);
      return;
    }
    v4 = *(_QWORD *)(a1 + 16);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v5 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
    {
LABEL_15:
      ExReleasePushLockSharedEx(v4, 0LL);
      KeLeaveCriticalRegion();
      NSInstrumentation::PlatformAbort(3LL, a2, 0LL);
      return;
    }
    while ( 1 )
    {
      v6 = (__int64 *)v5[4];
      v7 = v6[1];
      v8 = v6[2];
      if ( a2 >= (v8 ^ v7) && a2 < (v8 ^ v7) + 0x8000 )
      {
        if ( (a2 & 0x7F) != 0 )
        {
          v11 = 2LL;
        }
        else
        {
          if ( RtlTestBit(
                 (PRTL_BITMAP)(v6[3] ^ v8),
                 ((a2 >> 7) & 0x1F) + 32 * (((unsigned int)a2 - ((unsigned int)v8 ^ (unsigned int)v7)) >> 12)) )
          {
            v9 = *v6;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v9, 0LL);
            v10 = ((a2 >> 7) & 0x1F) + 32 * ((unsigned int)(a2 - (*((_DWORD *)v6 + 4) ^ *((_DWORD *)v6 + 2))) >> 12);
            RtlClearBit((PRTL_BITMAP)(v6[2] ^ v6[3]), v10);
            memset((void *)a2, 0, 0x80uLL);
            *((_DWORD *)v6 + 8) = v10;
            ExReleasePushLockExclusiveEx(v9, 0LL);
            KeLeaveCriticalRegion();
            ExReleasePushLockSharedEx(v4, 0LL);
            KeLeaveCriticalRegion();
            return;
          }
          v11 = 1LL;
        }
        NSInstrumentation::PlatformAbort(v11, a2, 0LL);
      }
      v5 = (_QWORD *)*v5;
      if ( v5 == (_QWORD *)a1 )
        goto LABEL_15;
    }
  }
}
