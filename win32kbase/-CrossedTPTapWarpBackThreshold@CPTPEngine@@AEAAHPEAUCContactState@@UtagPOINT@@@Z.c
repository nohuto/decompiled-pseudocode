/*
 * XREFs of ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0235604
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C023ACE0 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPTapWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdx

  if ( (*((_DWORD *)this + 67) & 0x400) == 0 )
    return 1LL;
  v3 = *((_QWORD *)a2 + 2);
  v5 = (unsigned int)(*((_DWORD *)this + 65) * *((_DWORD *)this + 65));
  if ( SHIDWORD(v3) < a3.y )
    v5 = (unsigned int)(*((_DWORD *)this + 66) * *((_DWORD *)this + 66));
  v4 = (unsigned int)(*((_DWORD *)this + 63) * *((_DWORD *)this + 63));
  return v4 * (HIDWORD(v3) - a3.y) * (HIDWORD(v3) - a3.y) + v5 * ((int)v3 - a3.x) * ((int)v3 - a3.x) >= (unsigned __int64)(v4 * v5);
}
