/*
 * XREFs of DpiPnpEnableVga @ 0x1C019E3B8
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0187BE8 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CABB0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C0145F7C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DpiPnpEnableVga(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // r8
  _DWORD v11[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h]
  __int64 v13; // [rsp+40h] [rbp-88h]
  __int64 v14; // [rsp+48h] [rbp-80h]
  _DWORD v15[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v16; // [rsp+58h] [rbp-70h]
  __int64 v17; // [rsp+68h] [rbp-60h]
  __int64 v18; // [rsp+70h] [rbp-58h]
  int v19; // [rsp+78h] [rbp-50h]
  int v20; // [rsp+7Ch] [rbp-4Ch]
  int v21; // [rsp+80h] [rbp-48h]
  int v22; // [rsp+84h] [rbp-44h]
  int v23; // [rsp+88h] [rbp-40h]
  int v24; // [rsp+8Ch] [rbp-3Ch]

  v11[1] = 0;
  v14 = 0LL;
  v6 = (unsigned __int8)a2;
  v7 = (unsigned __int8)a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL);
  v12 = 0LL;
  v11[0] = 7;
  v13 = v7;
  if ( qword_1C00B2DC0 )
    v12 = *(_QWORD *)(*(_QWORD *)(qword_1C00B2DC0 + 64) + 152LL);
  v20 = 0;
  v19 = 0;
  v18 = 0LL;
  v24 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v15[0] = 6;
  v15[1] = 64;
  v21 = 48;
  v22 = v7;
  v23 = v6;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, 0x100000000LL);
  LOBYTE(v9) = v6;
  return SMgrGdiCallout(
           v11,
           0x100000000LL,
           v9,
           (unsigned __int64)DpiFinishPnPTransitionCallback & -(__int64)(a3 != 0),
           a3,
           a4);
}
