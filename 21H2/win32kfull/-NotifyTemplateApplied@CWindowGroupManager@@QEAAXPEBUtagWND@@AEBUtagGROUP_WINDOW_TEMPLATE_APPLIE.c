/*
 * XREFs of ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C0240790
 * Callers:
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D051C (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C003E22C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

void __fastcall CWindowGroupManager::NotifyTemplateApplied(
        CWindowGroupManager *this,
        const struct tagWND *a2,
        const struct tagGROUP_WINDOW_TEMPLATE_APPLIED *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int64 v5; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+28h] [rbp-40h]
  _BYTE v7[44]; // [rsp+2Ch] [rbp-3Ch]

  if ( *((_DWORD *)a2 + 77) )
  {
    v3 = *((_OWORD *)a3 + 1);
    v5 = *(_QWORD *)a2;
    *(_QWORD *)&v7[32] = 0LL;
    *(_OWORD *)&v7[16] = 0LL;
    v6 = 10;
    *(_OWORD *)v7 = 0LL;
    v4 = *(_OWORD *)a3;
    *(_OWORD *)&v7[20] = v3;
    *(_OWORD *)&v7[4] = v4;
    *(_QWORD *)&v7[36] = *((_QWORD *)a3 + 4);
    anonymous_namespace_::NotifyIAMWindowManagementEvent((int)&v5);
  }
}
