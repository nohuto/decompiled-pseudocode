/*
 * XREFs of _anonymous_namespace_::RecordParentPidLegacyPolicy @ 0x1C003F13C
 * Callers:
 *     ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0011C58 (-PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     EditionPushExitingAppForegroundPolicy @ 0x1C003F010 (EditionPushExitingAppForegroundPolicy.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall anonymous_namespace_::RecordParentPidLegacyPolicy(__int64 a1)
{
  bool v2; // dl
  int v3; // edx
  __int64 v4; // rcx
  __int64 result; // rax
  _BYTE v6[24]; // [rsp+50h] [rbp-28h]

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gFullLog,
      4,
      2,
      23,
      (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
      a1);
  v3 = dword_1C03611A8;
  *(__m128i *)&v6[8] = _mm_load_si128((const __m128i *)&_xmm);
  *(_QWORD *)v6 = a1;
  v4 = 3LL * (unsigned int)dword_1C03611A8;
  *(_OWORD *)&qword_1C03611B0[v4] = *(_OWORD *)v6;
  qword_1C03611B0[v4 + 2] = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v6[8], *(__m128d *)&v6[8]);
  result = 5 * ((v3 + 1) / 5u);
  dword_1C03611A8 = (v3 + 1) % 5u;
  return result;
}
