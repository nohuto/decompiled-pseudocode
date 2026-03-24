/*
 * XREFs of ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01C3C38
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C01C93A4 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPTapWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  __int64 v3; // rax
  unsigned int v4; // r11d
  unsigned int v5; // edx

  if ( (*((_DWORD *)this + 55) & 0x400) == 0 )
    return 1LL;
  v3 = *((_QWORD *)a2 + 1);
  v5 = *((_DWORD *)this + 53) * *((_DWORD *)this + 53);
  if ( SHIDWORD(v3) < a3.y )
    v5 = *((_DWORD *)this + 54) * *((_DWORD *)this + 54);
  v4 = *((_DWORD *)this + 51) * *((_DWORD *)this + 51);
  return v5 * (__int64)(((int)v3 - a3.x) * ((int)v3 - a3.x))
       + (unsigned __int64)v4 * (HIDWORD(v3) - a3.y) * (HIDWORD(v3) - a3.y) >= v5 * (unsigned __int64)v4;
}
