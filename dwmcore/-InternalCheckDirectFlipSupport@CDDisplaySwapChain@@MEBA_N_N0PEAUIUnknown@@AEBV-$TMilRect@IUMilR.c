/*
 * XREFs of ?InternalCheckDirectFlipSupport@CDDisplaySwapChain@@MEBA_N_N0PEAUIUnknown@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2W4DXGI_COLOR_SPACE_TYPE@@I@Z @ 0x1802876A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IW4ScanoutScaleMode@1@PEA_N@Z @ 0x180285680 (-CheckMultiplaneOverlaySupportInternal@CDDisplaySwapChain@@IEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLA.c)
 */

bool __fastcall CDDisplaySwapChain::InternalCheckDirectFlipSupport(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int *a5,
        __int128 *a6,
        int a7,
        int a8)
{
  int v9; // r14d
  _BYTE v12[16]; // [rsp+30h] [rbp-99h] BYREF
  __int128 v13; // [rsp+40h] [rbp-89h] BYREF
  int v14; // [rsp+50h] [rbp-79h]
  int v15; // [rsp+5Ch] [rbp-6Dh]
  int v16; // [rsp+64h] [rbp-65h]
  int v17; // [rsp+68h] [rbp-61h]
  int v18; // [rsp+6Ch] [rbp-5Dh]
  int v19; // [rsp+70h] [rbp-59h]
  __int128 v20; // [rsp+74h] [rbp-55h]
  __int128 v21; // [rsp+84h] [rbp-45h]
  __int64 v22; // [rsp+94h] [rbp-35h]
  int v23; // [rsp+9Ch] [rbp-2Dh]
  __int64 v24; // [rsp+A0h] [rbp-29h]
  int v25; // [rsp+A8h] [rbp-21h]
  int v26; // [rsp+ACh] [rbp-1Dh]
  int v27; // [rsp+B0h] [rbp-19h]
  int v28; // [rsp+C0h] [rbp-9h]
  int v29; // [rsp+C8h] [rbp-1h]

  v9 = a3;
  memset_0(&v13, 0, 0x90uLL);
  v14 = *(_DWORD *)(a1 + 112);
  v16 = *a5;
  v17 = a5[1];
  v18 = a5[2];
  v19 = a5[3];
  v20 = *a6;
  v26 = a7;
  v29 = a8;
  v15 = 0;
  v23 = 0;
  v24 = 0LL;
  v25 = 0;
  v27 = 0;
  *((_QWORD *)&v13 + 1) = a4;
  v21 = v20;
  v22 = 1LL;
  v28 = 2;
  return CDDisplaySwapChain::CheckMultiplaneOverlaySupportInternal(a1, &v13, 1u, 2 * v9, v12);
}
