/*
 * XREFs of ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1C00C9A60
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C920C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

void __fastcall SURFREF::vTryDeleteSurface(SURFREF *this)
{
  __int64 v2; // rbx
  char v3; // [rsp+30h] [rbp-18h]

  if ( KeAreApcsDisabled() )
  {
    v2 = Win32AllocPoolNonPaged(88LL, 0x63707347u);
    v3 = 0;
    KeInitializeApc(
      v2,
      KeGetCurrentThread(),
      0LL,
      lambda_a018e77ba64c4f241a1dcf8ac06f3d65_::_lambda_invoker_cdecl_,
      lambda_a018e77ba64c4f241a1dcf8ac06f3d65_::_lambda_invoker_cdecl_,
      lambda_c42d5e148a0c8c495193b965072d0c08_::_lambda_invoker_cdecl_,
      v3,
      0LL);
    KeInsertQueueApc(v2, **((_QWORD **)this + 4), 0LL, 0LL);
  }
  else
  {
    SURFREF::bDeleteSurface((__int64)this, 0);
  }
}
