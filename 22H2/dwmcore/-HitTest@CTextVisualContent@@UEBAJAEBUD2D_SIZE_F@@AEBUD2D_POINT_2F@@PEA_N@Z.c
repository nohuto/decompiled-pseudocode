/*
 * XREFs of ?HitTest@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18020CC60
 * Callers:
 *     ?HitTest@CTextVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800F6350 (-HitTest@CTextVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTextVisualContent::HitTest(
        CTextVisualContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v5; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0;
  v5 = *((_QWORD *)this - 4);
  v8 = *(_QWORD *)(v5 + 616);
  v9 = *(_QWORD *)(v5 + 624);
  while ( 1 )
  {
    if ( v8 == v9 )
      return 0LL;
    v10 = *(_QWORD *)v8 + 56LL + *(int *)(*(_QWORD *)(*(_QWORD *)v8 + 56LL) + 8LL);
    v11 = (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v10 + 24LL))(
            v10,
            a2,
            a3,
            a4);
    v12 = v11;
    if ( v11 < 0 )
      break;
    if ( *a4 )
      return 0LL;
    v8 += 8LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8A,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
