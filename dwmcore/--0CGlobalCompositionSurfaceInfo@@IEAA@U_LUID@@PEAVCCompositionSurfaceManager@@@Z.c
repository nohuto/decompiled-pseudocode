/*
 * XREFs of ??0CGlobalCompositionSurfaceInfo@@IEAA@U_LUID@@PEAVCCompositionSurfaceManager@@@Z @ 0x1800BA40C
 * Callers:
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800BA334 (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CGlobalCompositionSurfaceInfo *__fastcall CGlobalCompositionSurfaceInfo::CGlobalCompositionSurfaceInfo(
        CGlobalCompositionSurfaceInfo *this,
        struct _LUID a2,
        struct CCompositionSurfaceManager *a3)
{
  CGlobalCompositionSurfaceInfo *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 4) = 0LL;
  *((struct _LUID *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 88;
  *((_QWORD *)this + 9) = (char *)this + 88;
  *((_QWORD *)this + 10) = (char *)this + 96;
  *(_QWORD *)this = &CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 13) = this;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *(struct _LUID *)((char *)this + 140) = g_luidZero;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 37) = 0;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 256;
  *((_DWORD *)this + 75) = 0x1000000;
  *((_QWORD *)this + 39) = 0LL;
  result = this;
  *((_DWORD *)this + 80) = -1;
  *(_QWORD *)((char *)this + 324) = 0LL;
  *((_DWORD *)this + 83) = 0;
  *((_DWORD *)this + 104) = 0;
  *((_BYTE *)this + 420) = 0;
  return result;
}
