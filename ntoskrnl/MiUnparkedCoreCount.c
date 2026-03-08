/*
 * XREFs of MiUnparkedCoreCount @ 0x1402A85DC
 * Callers:
 *     MiWakeZeroingThreads @ 0x1402A7E98 (MiWakeZeroingThreads.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402A9460 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall MiUnparkedCoreCount(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v6; // r15d
  unsigned int i; // esi
  __int64 v8; // rax
  __int64 v9; // rbp
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  v4 = 0;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140C66840);
  if ( *(_DWORD *)a1 )
  {
    v6 = *(_DWORD *)(a1 + 20);
    for ( i = 0; i < v6; ++i )
    {
      v8 = *(_QWORD *)(a1 + 136);
      v9 = *(_QWORD *)(v8 + 16LL * i);
      v10 = v9 == 0;
      v15 = *(_OWORD *)(v8 + 16LL * i);
      while ( 1 )
      {
        *(_QWORD *)&v15 = v9;
        if ( v10 )
          break;
        v11 = KiProcessorBlock[(unsigned int)KeFindFirstSetRightGroupAffinity(&v15)];
        if ( (WORD4(v15) >= (unsigned __int16)word_140C66848
           || (*(_QWORD *)(v11 + 34912) & qword_140C66850[WORD4(v15)]) != *(_QWORD *)(v11 + 34912))
          && ++v4 >= a2 )
        {
          i = v6 - 1;
          break;
        }
        v9 &= ~*(_QWORD *)(v11 + 34912);
        v10 = v9 == 0;
      }
    }
  }
  else if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v13 = KiProcessorBlock[v3];
      v14 = *(unsigned __int8 *)(v13 + 208);
      if ( ((unsigned __int16)v14 >= (unsigned __int16)word_140C66848
         || (*(_QWORD *)(v13 + 34912) & qword_140C66850[v14]) != *(_QWORD *)(v13 + 34912))
        && ++v4 >= a2 )
      {
        break;
      }
      ++v3;
    }
    while ( v3 < (unsigned int)KeNumberProcessors_0 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66840);
  return v4;
}
