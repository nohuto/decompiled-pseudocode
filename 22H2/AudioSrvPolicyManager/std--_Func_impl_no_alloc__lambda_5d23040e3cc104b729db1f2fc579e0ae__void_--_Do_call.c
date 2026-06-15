/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x180024850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x180015790 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001B50C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call(__int64 a1)
{
  struct CProcess *v1; // rsi
  int v2; // ebp
  int v3; // r14d
  CApplicationManager *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  int v6; // ebx

  v1 = *(struct CProcess **)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = g_ApplicationManager;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v6 = CApplicationManager::Register(v4, v1);
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, v6);
    }
    AudPolicyLogError("CApplicationManager::SetSmtcSubscriptionState", 800, v6);
  }
  else
  {
    CProcess::SetHasSmtcSubscription((__int64)v1 + 16, v3, v2);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
}
