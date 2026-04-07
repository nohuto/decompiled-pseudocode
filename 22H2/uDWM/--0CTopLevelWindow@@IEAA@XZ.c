/*
 * XREFs of ??0CTopLevelWindow@@IEAA@XZ @ 0x180026958
 * Callers:
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180027964 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029B30 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800242E0 (--0CVisual@@IEAA@XZ.c)
 */

CTopLevelWindow *__fastcall CTopLevelWindow::CTopLevelWindow(CTopLevelWindow *this)
{
  __int64 v1; // rcx
  __int128 v2; // xmm0
  CTopLevelWindow *result; // rax

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CTopLevelWindow::`vftable';
  *(_QWORD *)(v1 + 244) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_QWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 480) = 0LL;
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_QWORD *)(v1 + 528) = 0LL;
  *(_QWORD *)(v1 + 536) = 0LL;
  *(_QWORD *)(v1 + 544) = 0LL;
  *(_QWORD *)(v1 + 552) = 0LL;
  *(_QWORD *)(v1 + 560) = 0LL;
  *(_QWORD *)(v1 + 568) = 0LL;
  *(_QWORD *)(v1 + 576) = 0LL;
  *(_QWORD *)(v1 + 584) = 0LL;
  *(_DWORD *)(v1 + 592) = 0;
  *(_OWORD *)(v1 + 660) = 0LL;
  *(_DWORD *)(v1 + 688) = -1;
  *(_QWORD *)(v1 + 680) = 0LL;
  *(_QWORD *)(v1 + 728) = 0LL;
  *(_QWORD *)(v1 + 736) = 0LL;
  *(_QWORD *)(v1 + 744) = 0LL;
  *(_QWORD *)(v1 + 752) = 0LL;
  *(_QWORD *)(v1 + 760) = 0LL;
  *(_QWORD *)(v1 + 768) = 0LL;
  *(_OWORD *)(v1 + 776) = 0LL;
  *(_BYTE *)(v1 + 240) |= 2u;
  *(_BYTE *)(v1 + 241) &= ~1u;
  *(_DWORD *)(v1 + 596) = -1;
  *(_DWORD *)(v1 + 600) = -1;
  *(_DWORD *)(v1 + 604) = -1;
  *(_DWORD *)(v1 + 608) = -1;
  v2 = *(_OWORD *)(v1 + 596);
  *(_DWORD *)(v1 + 704) = -1082130432;
  *(_DWORD *)(v1 + 692) = -1082130432;
  *(_DWORD *)(v1 + 696) = -1082130432;
  *(_DWORD *)(v1 + 700) = -1082130432;
  *(_DWORD *)(v1 + 720) = -1082130432;
  *(_DWORD *)(v1 + 708) = -1082130432;
  *(_DWORD *)(v1 + 712) = -1082130432;
  *(_DWORD *)(v1 + 716) = -1082130432;
  result = (CTopLevelWindow *)v1;
  *(_OWORD *)(v1 + 628) = v2;
  *(_QWORD *)(v1 + 792) = 0LL;
  *(_OWORD *)(v1 + 612) = v2;
  *(_QWORD *)(v1 + 800) = 0LL;
  *(_OWORD *)(v1 + 644) = v2;
  *(_WORD *)(v1 + 816) = 0;
  *(_QWORD *)(v1 + 832) = 0LL;
  return result;
}
