/*
 * XREFs of NtUserGetPointerType @ 0x1C015A640
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E8380 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(unsigned int a1, _DWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG64 v9; // rcx
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v11 = 0;
  v5 = PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( !a1 )
    goto LABEL_10;
  v7 = HIWORD(a1);
  if ( HIWORD(a1) || !a2 )
    goto LABEL_10;
  if ( a1 != 1 )
  {
    if ( CTouchProcessor::GetThreadPointerData(
           gpTouchProcessor,
           (struct tagTHREADINPUTPOINTERLIST *)(v5 + 1112),
           a1,
           &v11,
           0LL,
           0LL) )
    {
      goto LABEL_7;
    }
LABEL_10:
    UserSetLastError(87LL, v6, v7, v8);
    goto LABEL_11;
  }
  v11 = 4;
LABEL_7:
  v9 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v11;
  v4 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit(v9, v6, v7, v8);
  return v4;
}
