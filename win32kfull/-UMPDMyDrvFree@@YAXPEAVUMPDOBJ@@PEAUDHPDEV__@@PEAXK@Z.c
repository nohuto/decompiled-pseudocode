/*
 * XREFs of ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1C02C1290
 * Callers:
 *     ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1C02BEB10 (-UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z.c)
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1C02BEED0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void __fastcall UMPDMyDrvFree(struct UMPDOBJ *a1, struct DHPDEV__ *a2, void *a3, int a4)
{
  __int64 v4; // rax
  size_t Size; // [rsp+20h] [rbp-58h]
  _DWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+40h] [rbp-38h]
  struct DHPDEV__ *v9; // [rsp+48h] [rbp-30h]
  void *v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v4 = *(_QWORD *)a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v7 = 0LL;
  v12 = 0;
  v6[0] = 48;
  v6[1] = 42;
  v8 = v4;
  LODWORD(Size) = 0;
  UMPDOBJ::Thunk(a1, v6, 0x30u, 0LL, Size);
}
