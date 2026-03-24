/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C02A3914
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C02A7AB0 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs(
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1,
        struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct D3DKMT_MULTIPLANE_OVERLAY **a3,
        struct tagRECT **a4)
{
  _OWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct D3DKMT_MULTIPLANE_OVERLAY *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rdx
  char *v24; // rcx
  _OWORD *v25; // rax
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _BYTE v33[280]; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v34; // [rsp+148h] [rbp-30h]
  void *Src; // [rsp+150h] [rbp-28h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)MmUserProbeAddress;
  v7 = v33;
  v8 = 2LL;
  v9 = 2LL;
  do
  {
    *v7 = *(_OWORD *)&a1->hDevice;
    v7[1] = *(_OWORD *)&a1->BroadcastContext[2];
    v7[2] = *(_OWORD *)&a1->BroadcastContext[6];
    v7[3] = *(_OWORD *)&a1->BroadcastContext[10];
    v7[4] = *(_OWORD *)&a1->BroadcastContext[14];
    v7[5] = *(_OWORD *)&a1->BroadcastContext[18];
    v7[6] = *(_OWORD *)&a1->BroadcastContext[22];
    v7 += 8;
    *(v7 - 1) = *(_OWORD *)&a1->BroadcastContext[26];
    a1 = (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a1 + 128);
    --v9;
  }
  while ( v9 );
  *v7 = *(_OWORD *)&a1->hDevice;
  v7[1] = *(_OWORD *)&a1->BroadcastContext[2];
  v7[2] = *(_OWORD *)&a1->BroadcastContext[6];
  v10 = v34;
  if ( v34 - 1 > 6 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL);
    v28[3] = v10;
    v18 = -1073741811;
    v28[4] = -1073741811LL;
    v28[5] = PsGetCurrentProcess(v30, v29, v31, v32);
    WdLogEvent5_WdError(v28);
    return v18;
  }
  v11 = 120LL * v34;
  if ( v11 > 0xFFFFFFFF )
  {
    v27 = WdLogNewEntry5_WdWarning(v34, 0LL, a3);
    *(_QWORD *)(v27 + 24) = 71LL;
    WdLogEvent5_WdWarning(v27);
    return 3221225621LL;
  }
  v12 = 120LL * v34;
  if ( !is_mul_ok(v34, 0x78uLL) )
    v12 = -1LL;
  v15 = (struct D3DKMT_MULTIPLANE_OVERLAY *)operator new[](v12, 0x4B677844u, PagedPool);
  if ( !v15 )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v16);
    v18 = -1073741801;
    *(_QWORD *)(v17 + 24) = -1073741801LL;
    *(_QWORD *)(v17 + 32) = PsGetCurrentProcess(v20, v19, v21, v22);
    WdLogEvent5_WdWarning(v17);
    operator delete[](0LL);
    operator delete[](0LL);
    return v18;
  }
  v23 = Src;
  v24 = (char *)Src + (unsigned int)v11;
  if ( v24 < Src || (unsigned __int64)v24 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, v23, (unsigned int)v11);
  Src = v15;
  v25 = v33;
  do
  {
    *(_OWORD *)&a2->hDevice = *v25;
    *(_OWORD *)&a2->BroadcastContext[2] = v25[1];
    *(_OWORD *)&a2->BroadcastContext[6] = v25[2];
    *(_OWORD *)&a2->BroadcastContext[10] = v25[3];
    *(_OWORD *)&a2->BroadcastContext[14] = v25[4];
    *(_OWORD *)&a2->BroadcastContext[18] = v25[5];
    *(_OWORD *)&a2->BroadcastContext[22] = v25[6];
    a2 = (struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a2 + 128);
    *(_OWORD *)&a2[-1].pPresentPlanes = v25[7];
    v25 += 8;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&a2->hDevice = *v25;
  *(_OWORD *)&a2->BroadcastContext[2] = v25[1];
  *(_OWORD *)&a2->BroadcastContext[6] = v25[2];
  *a3 = v15;
  *a4 = 0LL;
  operator delete[](0LL);
  operator delete[](0LL);
  return 0LL;
}
