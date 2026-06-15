/*
 * XREFs of _CProcess::RegisterMixedRealitySpatialAudioFormatPolicyChange_::_1_::catch$2 @ 0x18003BF4C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000FA80 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CProcess::RegisterMixedRealitySpatialAudioFormatPolicyChange_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x1277,
                           (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           a4);
  return 0LL;
}
