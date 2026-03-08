/*
 * XREFs of UmfdFontManagement @ 0x1C0307F50
 * Callers:
 *     AtmDrvFontManagementRedirector @ 0x1C02A9F64 (AtmDrvFontManagementRedirector.c)
 * Callees:
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C011E760 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C011ED74 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?GetDrvType@FontManagementRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1C0307E20 (-GetDrvType@FontManagementRequest@@UEBA-AW4FontDriverType@@XZ.c)
 */

__int64 __fastcall UmfdFontManagement(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int DrvType; // eax
  int v12; // eax
  unsigned int v13; // ecx
  _QWORD v15[7]; // [rsp+28h] [rbp-41h] BYREF
  int v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+64h] [rbp-5h]
  __int64 v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+80h] [rbp+17h]
  __int128 v22; // [rsp+88h] [rbp+1Fh]
  __int64 v23; // [rsp+98h] [rbp+2Fh]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v15, 13);
  v23 = 0LL;
  v15[0] = &FontManagementRequest::`vftable';
  v18 = a5;
  v19 = a6;
  v15[5] = a1;
  v20 = a7;
  v22 = 0LL;
  v15[6] = a2;
  v16 = a3;
  v17 = a4;
  v21 = -1;
  DrvType = FontManagementRequest::GetDrvType((__int64)v15);
  v12 = UmfdClientSendAndWaitForCompletion(DrvType, (__int64)v15);
  v13 = v21;
  if ( v12 < 0 )
    return (unsigned int)-1;
  return v13;
}
