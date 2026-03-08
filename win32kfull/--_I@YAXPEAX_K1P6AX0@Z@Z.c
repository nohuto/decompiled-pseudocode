/*
 * XREFs of ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C023C124
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279714 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiTransparentBlt @ 0x1C029A1B0 (NtGdiTransparentBlt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rdi
  char *v7; // rbx

  v5 = a3;
  v7 = &a1[a3 * a2];
  do
  {
    v7 -= a2;
    a4(v7);
    --v5;
  }
  while ( v5 );
}
