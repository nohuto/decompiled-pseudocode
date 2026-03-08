/*
 * XREFs of IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A98F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14045B7C0 (RtlFindNextForwardRunClearEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     MmTryIdentifyPage @ 0x140624300 (MmTryIdentifyPage.c)
 *     IopLiveDumpIsProcessPageIncluded @ 0x140A98844 (IopLiveDumpIsProcessPageIncluded.c)
 */

__int64 __fastcall IopLiveDumpMirrorPhysicalMemoryCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v16[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-48h]
  unsigned __int64 v19; // [rsp+90h] [rbp+8h] BYREF
  __int64 MillisecondCounter; // [rsp+98h] [rbp+10h]

  v2 = IopLiveDumpContext;
  v19 = 0LL;
  v4 = a1 >> 12;
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v6 = *(_QWORD *)(v2 + 576);
  v7 = v5 + v4 - 1;
  if ( v4 < v6 )
  {
    if ( v7 >= v6 )
    {
      v7 = v6 - 1;
      v5 = v6 - v4;
    }
    if ( v5 )
    {
      v16[0] = v7 + 1;
      v16[1] = *(_QWORD *)(v2 + 584);
      while ( 1 )
      {
        NextForwardRunClear = RtlFindNextForwardRunClearEx(v16, v4, &v19);
        v9 = v19;
        v10 = NextForwardRunClear;
        v11 = NextForwardRunClear ? v19 - v4 : v5;
        if ( v11 )
          break;
LABEL_20:
        if ( v5 > v11 + v10 )
        {
          v4 = v10 + v9;
          v5 -= v11 + v10;
          if ( v5 )
            continue;
        }
        goto LABEL_22;
      }
      v12 = v11;
      while ( (*(_DWORD *)(v2 + 40) & 4) != 0 )
      {
        v17 = 0LL;
        v18 = 0LL;
        if ( !(unsigned int)MmTryIdentifyPage(v4, &v17) || !(unsigned int)IopLiveDumpIsProcessPageIncluded(v2, &v17) )
          goto LABEL_19;
        if ( v18 >= 0xFFFF800000000000uLL )
          break;
        if ( v18 - 1 <= 0x7FFFFFFEFFFELL )
        {
          v13 = v2 + 656;
          goto LABEL_18;
        }
LABEL_19:
        ++v4;
        if ( !--v12 )
          goto LABEL_20;
      }
      v13 = v2 + 600;
LABEL_18:
      RtlSetBitsEx(v13, v4, 1uLL);
      goto LABEL_19;
    }
  }
LABEL_22:
  v14 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  if ( (*(_DWORD *)(v2 + 80) & 1) != 0 )
  {
    *(_QWORD *)(v2 + 472) += a2;
    *(_QWORD *)(v2 + 464) += v14;
  }
  else
  {
    *(_QWORD *)(v2 + 512) += a2;
    *(_QWORD *)(v2 + 504) += v14;
  }
  return 0LL;
}
