__int64 __fastcall CapturePresentMultiPlaneOverlayArgs2(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY2 **a3,
        struct tagRECT **a4)
{
  _OWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned int v12; // edi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v15; // rdi
  __int64 v16; // rax
  void *v18; // rdx
  _OWORD *v19; // rax
  __int64 v20; // rbx
  __int64 CurrentProcess; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v24[284]; // [rsp+60h] [rbp-148h] BYREF
  unsigned int v25; // [rsp+17Ch] [rbp-2Ch]
  void *Src; // [rsp+180h] [rbp-28h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)MmUserProbeAddress;
  v7 = v24;
  v8 = 2LL;
  v9 = 2LL;
  do
  {
    *v7 = *(_OWORD *)&a1->hAdapter;
    v7[1] = *(_OWORD *)&a1->BroadcastContext[1];
    v7[2] = *(_OWORD *)&a1->BroadcastContext[5];
    v7[3] = *(_OWORD *)&a1->BroadcastContext[9];
    v7[4] = *(_OWORD *)&a1->BroadcastContext[13];
    v7[5] = *(_OWORD *)&a1->BroadcastContext[17];
    v7[6] = *(_OWORD *)&a1->BroadcastContext[21];
    v7 += 8;
    *(v7 - 1) = *(_OWORD *)&a1->BroadcastContext[25];
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a1 + 128);
    --v9;
  }
  while ( v9 );
  *v7 = *(_OWORD *)&a1->hAdapter;
  v7[1] = *(_OWORD *)&a1->BroadcastContext[1];
  v7[2] = *(_OWORD *)&a1->BroadcastContext[5];
  if ( v25 - 1 > 6 )
  {
    v20 = v25;
    CurrentProcess = PsGetCurrentProcess(v25);
    v12 = -1073741811;
    WdLogSingleEntry3(2LL, v20, -1073741811LL, CurrentProcess);
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay plane count (0x%I64x) is invalid, returing 0x%I64x at 0x%I64x",
      v20,
      -1073741811LL,
      v23,
      0LL,
      0LL);
    return v12;
  }
  v10 = 120LL * v25;
  v11 = 0xFFFFFFFFLL;
  if ( v10 <= 0xFFFFFFFF )
    v11 = (unsigned int)v10;
  v12 = v10 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v10 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, 186LL);
    return v12;
  }
  v13 = 120LL * v25;
  if ( !is_mul_ok(v25, 0x78uLL) )
    v13 = -1LL;
  v15 = (struct _D3DKMT_MULTIPLANE_OVERLAY2 *)operator new[](v13, 0x4B677844u, 256LL);
  if ( v15 )
  {
    v18 = Src;
    if ( (char *)Src + v11 < Src || (unsigned __int64)Src + v11 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, v18, (unsigned int)v11);
    Src = v15;
    v19 = v24;
    do
    {
      *(_OWORD *)&a2->hAdapter = *v19;
      *(_OWORD *)&a2->BroadcastContext[1] = v19[1];
      *(_OWORD *)&a2->BroadcastContext[5] = v19[2];
      *(_OWORD *)&a2->BroadcastContext[9] = v19[3];
      *(_OWORD *)&a2->BroadcastContext[13] = v19[4];
      *(_OWORD *)&a2->BroadcastContext[17] = v19[5];
      *(_OWORD *)&a2->BroadcastContext[21] = v19[6];
      a2 = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a2 + 128);
      *(_OWORD *)&a2[-1].pPresentPlanes = v19[7];
      v19 += 8;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)&a2->hAdapter = *v19;
    *(_OWORD *)&a2->BroadcastContext[1] = v19[1];
    *(_OWORD *)&a2->BroadcastContext[5] = v19[2];
    *a3 = v15;
    *a4 = 0LL;
    operator delete(0LL);
    operator delete(0LL);
    return 0LL;
  }
  else
  {
    v16 = PsGetCurrentProcess(v14);
    WdLogSingleEntry2(3LL, -1073741801LL, v16);
    operator delete(0LL);
    operator delete(0LL);
    return 3221225495LL;
  }
}
