/*
 * XREFs of ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A4808
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C013D690 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02797A8 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279E28 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02BB108 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02BB240 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02BB3F0 (NtGdiSetPixelFormat.c)
 *     NtGdiSwapBuffers @ 0x1C02BB630 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0283754 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 */

__int64 __fastcall hdevFindDeviceHdev(_QWORD *a1, struct _RECTL *a2, struct EWNDOBJ *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  int v9; // esi

  v3 = (_QWORD *)a1[221];
  v4 = 0LL;
  if ( a3 && EWNDOBJ::bValid(a3) )
  {
    v7 = (_QWORD *)*v3;
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 168) + 32LL) + 48LL);
    while ( v7 )
    {
      if ( v4 == v7[6] )
        return v4;
      v7 = (_QWORD *)*v7;
    }
  }
  v8 = (_QWORD *)*v3;
  v9 = 0;
  if ( v8 )
  {
    do
    {
      if ( *((_DWORD *)v8 + 7) <= a2->left
        && *((_DWORD *)v8 + 9) >= a2->right
        && *((_DWORD *)v8 + 8) <= a2->top
        && *((_DWORD *)v8 + 10) >= a2->bottom )
      {
        return v8[6];
      }
      if ( (unsigned int)bIntersect((char *)v8 + 28, a2) )
      {
        v4 = v8[6];
        if ( (*(_DWORD *)(v4 + 2096) & 0x100) != 0 )
          return v4;
        ++v9;
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 );
    if ( v9 == 1 )
      return v4;
  }
  return 0LL;
}
