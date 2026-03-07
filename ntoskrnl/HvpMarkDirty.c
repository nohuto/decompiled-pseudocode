__int64 __fastcall HvpMarkDirty(ULONG_PTR BugCheckParameter2, int a2, int a3, int a4)
{
  int v4; // eax
  int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // ebx
  ULONG v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // r15d
  ULONG v17; // eax
  unsigned int v19; // ebx
  int v20; // r14d
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int16 v26; // [rsp+30h] [rbp-98h] BYREF
  int v27; // [rsp+34h] [rbp-94h] BYREF
  __int64 v28; // [rsp+38h] [rbp-90h] BYREF
  __int64 *v29; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v30[2]; // [rsp+48h] [rbp-80h]
  int v31; // [rsp+58h] [rbp-70h]
  int v32; // [rsp+5Ch] [rbp-6Ch]

  v4 = *(_DWORD *)(BugCheckParameter2 + 164);
  v27 = a4;
  if ( (v4 & 1) != 0 )
    return 3221225506LL;
  if ( (v4 & 2) != 0 && a4 != 2 )
    return 3221225865LL;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 || a2 < 0 )
    return 0LL;
  v8 = a2 - 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 136);
  v10 = (unsigned int)(a3 + v8) >> 9;
  if ( v9 <= 1 )
  {
    v12 = (unsigned int)a2 >> 9;
  }
  else
  {
    v11 = ~(v9 - 1);
    v12 = ((unsigned int)a2 >> 9) & v11;
    v10 = (v11 & (v9 + v10)) - 1;
  }
  v13 = ((v10 + 16) & 0xFFFFFFF8) - 9;
  v14 = (v12 + 8) & 0xFFFFFFF8;
  if ( v14 )
    v14 -= 8;
  v15 = *(_DWORD *)(BugCheckParameter2 + 280) >> 9;
  if ( v13 >= v15 )
    v13 = v15 - 1;
  v16 = 0;
  v17 = v14;
  if ( v14 > v13 )
    goto LABEL_16;
  do
  {
    if ( !_bittest64(*(const signed __int64 **)(BugCheckParameter2 + 96), v17) )
      ++v16;
    ++v17;
  }
  while ( v17 <= v13 );
  if ( !v16 )
  {
LABEL_16:
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 2) == 0 )
    {
      v28 = *(_QWORD *)(BugCheckParameter2 + 4136) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
      CmpArmLazyWriter(0LL, (unsigned __int64 *)&v28, 0);
    }
    return 0LL;
  }
  v19 = v13 - v14;
  if ( HvpSetRangeProtection(BugCheckParameter2, v14 << 9, (v19 + 1) << 9, 4) )
  {
    v20 = *(_DWORD *)(BugCheckParameter2 + 104);
    *(_DWORD *)(BugCheckParameter2 + 104) = v20 + v16;
    RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v14, v19 + 1);
    CmpLogDirtyVectorUse(BugCheckParameter2, 0, a2, a3);
    v28 = BugCheckParameter2;
    if ( (DWORD2(PerfGlobalGroupMask[0]) & 0x1000000) != 0 )
    {
      v29 = &v28;
      v26 = 0;
      v30[0] = 8LL;
      v21 = 1;
      v22 = *(_QWORD *)(BugCheckParameter2 + 1864);
      if ( v22 )
      {
        v21 = 2;
        v31 = *(unsigned __int16 *)(BugCheckParameter2 + 1856);
        v30[1] = v22;
        v32 = 0;
      }
      v23 = 2LL * v21;
      v24 = v21 + 1;
      v30[v23 - 1] = &v26;
      v30[v23] = 2LL;
      v25 = 2LL * v24;
      v30[v25 - 1] = &v27;
      v30[v25] = 4LL;
      EtwTraceKernelEvent((__int64)&v29, v24 + 1, 0x41000000u, 0x928u, 0x501902u);
    }
    if ( !v20 )
    {
      *(_QWORD *)(BugCheckParameter2 + 4136) = KiQueryUnbiasedInterruptTime();
      CmpIssueNewDirtyCallback();
    }
    if ( (int)(v16 + _InterlockedExchangeAdd(&CmpDirtySectorCount, v16)) >= 0x8000 )
      CmpForceFlushForCoalescing();
    goto LABEL_16;
  }
  return 3221225853LL;
}
