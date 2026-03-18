/*
 * XREFs of _lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_ @ 0x1C00D2730
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

void __fastcall lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_(__int64 a1, HSURF a2)
{
  _BYTE v2[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v2, a2);
  if ( v3 )
    SURFREF::bDeleteSurface((SURFREF *)v2);
  SURFREF::~SURFREF((SURFREF *)v2);
}
