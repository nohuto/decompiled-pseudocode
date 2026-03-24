/*
 * XREFs of _lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_ @ 0x1C00C9700
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C001C608 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C8F1C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_(__int64 a1, HSURF a2)
{
  _BYTE v2[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v2, a2);
  if ( v3 )
    SURFREF::bDeleteSurface((__int64)v2, 0);
  SURFREF::~SURFREF((SURFREF *)v2);
}
