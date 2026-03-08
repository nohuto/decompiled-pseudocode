/*
 * XREFs of ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C02777F4
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279714 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSwapBuffers @ 0x1C02DA270 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C027A0CC (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

DEVLOCKOBJ_WNDOBJ *__fastcall DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this, struct XDCOBJ *a2)
{
  *((_WORD *)this + 24) = 256;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 22) = 1;
  DEVLOCKOBJ_WNDOBJ::vConstructor(this, a2);
  return this;
}
