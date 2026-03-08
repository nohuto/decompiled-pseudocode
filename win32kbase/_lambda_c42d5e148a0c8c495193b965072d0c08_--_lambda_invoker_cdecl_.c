/*
 * XREFs of _lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_ @ 0x1C00DE6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C0029684 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C004344C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 */

void __fastcall lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_(__int64 a1, unsigned int a2)
{
  __int64 v2; // [rsp+48h] [rbp+20h] BYREF

  v2 = HmgShareLockCheck(a2, 5);
  if ( v2 )
    SURFREF::bDeleteSurface((SURFREF *)&v2);
  SURFREF::~SURFREF((SURFREF *)&v2);
}
