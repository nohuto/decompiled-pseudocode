/*
 * XREFs of ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800B4218
 * Callers:
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B5120 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1801FFFF0 (-EmitGeometry@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802B87D0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDrawListBitmap::IsOpaque(CDrawListBitmap *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)this + 16) )
    return 1;
  v2 = *(_QWORD *)this;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, CDrawListBitmap *))(*(_QWORD *)v2 + 8LL))(v2, this);
  v4 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 1)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL));
  return *(_DWORD *)((**v4)(v4, v5) + 4) == 3;
}
