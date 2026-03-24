/*
 * XREFs of NtUserGetPointerType @ 0x1C012F890
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x1C0035E30 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0195DD0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(int a1, _DWORD *a2)
{
  int v4; // ebx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  struct tagTHREADINFO *v9; // [rsp+70h] [rbp+18h]

  v4 = 0;
  v8 = 0;
  v5 = EnterSharedCrit(0, 1);
  v9 = v5;
  if ( !a1 || HIWORD(a1) || !a2 )
    goto LABEL_10;
  if ( a1 != 1 )
  {
    if ( CTouchProcessor::GetThreadPointerData(
           gpTouchProcessor,
           (struct tagTHREADINFO *)((char *)v5 + 1088),
           a1,
           &v8,
           0LL,
           0LL) )
    {
      goto LABEL_7;
    }
LABEL_10:
    UserSetLastError(87LL, v6);
    goto LABEL_11;
  }
  v8 = 4;
LABEL_7:
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v8;
  v4 = 1;
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v4;
}
