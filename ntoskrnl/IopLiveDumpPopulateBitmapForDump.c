/*
 * XREFs of IopLiveDumpPopulateBitmapForDump @ 0x140A990E0
 * Callers:
 *     IopLiveDumpCollectPages @ 0x140A97A84 (IopLiveDumpCollectPages.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x1402D8E10 (RtlFindSetBitsEx.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     RtlFindNextForwardRunClearEx @ 0x14045B7C0 (RtlFindNextForwardRunClearEx.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTracePopulateBitmapForDumpDuration @ 0x14055901C (IopLiveDumpTracePopulateBitmapForDumpDuration.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x140A99404 (IopLiveDumpRemoveSystemCacheFromDump.c)
 */

char __fastcall IopLiveDumpPopulateBitmapForDump(__int64 a1, __int64 a2)
{
  __int64 MillisecondCounter; // r12
  int v3; // eax
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 *v7; // r14
  unsigned __int64 SetBits; // rdi
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-28h]
  unsigned __int64 v20[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+50h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+58h] BYREF
  unsigned __int64 v24; // [rsp+A8h] [rbp+60h]

  v22 = 0LL;
  MillisecondCounter = 0LL;
  v23 = 0LL;
  v3 = *(_DWORD *)(a1 + 80);
  *(_OWORD *)v20 = 0LL;
  if ( (v3 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v5 = a1 + 544;
  v6 = *(_QWORD *)(a1 + 544);
  v19 = v6;
  IopLiveDumpRemoveSystemCacheFromDump(a1, a2, &v23);
  v7 = (unsigned __int64 *)(a1 + 600);
  if ( a1 != -600 )
  {
    do
    {
      SetBits = RtlFindSetBitsEx(v7, 1uLL, 0LL);
      if ( SetBits != -1LL )
      {
        do
        {
          NextForwardRunClear = RtlFindNextForwardRunClearEx(v7, SetBits, &v22);
          v10 = v22;
          v24 = NextForwardRunClear;
          if ( !NextForwardRunClear )
            v10 = v6;
          v11 = v10 - SetBits;
          v12 = SetBits + v11;
          if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
          {
            RtlSetBitsEx(v5, SetBits, v11);
          }
          else
          {
            v20[1] = *(_QWORD *)(a1 + 552);
            v20[0] = SetBits + v11;
            v21 = SetBits;
            do
            {
              v13 = RtlFindNextForwardRunClearEx(v20, SetBits, &v21);
              if ( !v13 )
                break;
              v14 = *(_QWORD *)(a1 + 688);
              if ( v13 > v14 )
              {
                *(_DWORD *)(a1 + 80) |= 2u;
                v13 = v14;
              }
              v15 = v21;
              if ( v13 )
              {
                RtlSetBitsEx((__int64)v20, v21, v13);
                *(_QWORD *)(a1 + 688) -= v13;
              }
              v16 = *(_DWORD *)(a1 + 80);
              if ( (v16 & 2) != 0 )
                return v16;
              SetBits = v13 + v15;
              v21 = SetBits;
            }
            while ( SetBits < v12 );
            v5 = a1 + 544;
          }
          SetBits = v12 + v24;
          v6 = v19;
        }
        while ( SetBits < v19 );
      }
      if ( v7 != (unsigned __int64 *)(a1 + 600) )
        break;
      if ( (*(_DWORD *)(a1 + 40) & 4) == 0 )
        break;
      v7 = (unsigned __int64 *)(a1 + 656);
    }
    while ( a1 != -656 );
  }
  v16 = *(_DWORD *)(a1 + 80);
  if ( (v16 & 0x80u) != 0 )
  {
    v17 = IopLiveDumpGetMillisecondCounter(0);
    LOBYTE(v16) = IopLiveDumpTracePopulateBitmapForDumpDuration(a1, v17 - MillisecondCounter, v23);
  }
  return v16;
}
