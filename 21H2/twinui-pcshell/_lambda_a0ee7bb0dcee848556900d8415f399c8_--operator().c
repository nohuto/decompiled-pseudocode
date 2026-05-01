/*
 * XREFs of _lambda_a0ee7bb0dcee848556900d8415f399c8_::operator() @ 0x18006CDA8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67bdfaa79d84c6c64bb926bff21dcc7f___::Run @ 0x18006CD20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67bdfaa79d84c6c64bb926bff21dcc7f___--Run.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D1E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VoiceAssistantPositioner@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801C868C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall lambda_a0ee7bb0dcee848556900d8415f399c8_::operator()(unsigned int *a1)
{
  __int64 v2; // r8
  bool v3; // zf
  int v4; // eax
  __int64 v5; // rcx
  const char *v6; // r9
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 2) + 120LL) + 112LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 120LL),
    *a1,
    a1[1]);
  v3 = (a1[1] & 0x20) == 0;
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  v10 = 0LL;
  if ( !v3 )
    v4 = 5;
  LODWORD(v10) = v4;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VoiceAssistantPositioner>::GetImpl'::`2'::impl,
    1u,
    v2);
  if ( (a1[1] & 0x100) != 0 )
    DWORD1(v10) |= 0x1E0u;
  v5 = *((_QWORD *)a1 + 2);
  v7 = 19;
  v8 = &v10;
  v9 = 16;
  if ( !(unsigned int)SetWindowCompositionAttribute(*(_QWORD *)(v5 + 128), &v7) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x53B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      v6);
  if ( *((_BYTE *)a1 + 8) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 128LL),
      0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
}
