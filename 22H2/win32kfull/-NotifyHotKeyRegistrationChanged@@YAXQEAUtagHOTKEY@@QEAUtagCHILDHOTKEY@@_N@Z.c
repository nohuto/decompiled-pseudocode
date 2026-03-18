/*
 * XREFs of ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C00437DC
 * Callers:
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z @ 0x1C00409B8 (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z.c)
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C0042C40 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     DestroyThreadsHotKeys @ 0x1C0042DF0 (DestroyThreadsHotKeys.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C0042F14 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0043264 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     _lambda_326ebf4bf0c0cd31d169d31c796367ee_::_lambda_invoker_cdecl_ @ 0x1C00BEC00 (_lambda_326ebf4bf0c0cd31d169d31c796367ee_--_lambda_invoker_cdecl_.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C013AA64 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall NotifyHotKeyRegistrationChanged(
        struct tagHOTKEY *const a1,
        struct tagCHILDHOTKEY *const a2,
        unsigned __int8 a3)
{
  unsigned int ThreadId; // r9d
  int v4; // edi
  unsigned __int64 v6; // rax
  __int16 v7; // ax
  __int64 v8; // rdx
  char v9; // al
  _DWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v11; // [rsp+2Ch] [rbp-1Ch]
  char v12; // [rsp+2Eh] [rbp-1Ah]
  char v13; // [rsp+2Fh] [rbp-19h]

  ThreadId = 0;
  v4 = a3;
  if ( !*((_QWORD *)a1 + 1) )
  {
    v6 = *((_QWORD *)a1 + 2);
    if ( v6 < 0xFFFFFFFFFFFFFFFEuLL && v6 != 1 )
    {
      v7 = *((_WORD *)a1 + 17);
      if ( (v7 & 0x8C00) == 0 )
      {
        v13 = 0;
        if ( a2 )
        {
          v8 = *(_QWORD *)a2;
        }
        else
        {
          if ( (v7 & 0x300) != 0 )
            return;
          v8 = *(_QWORD *)a1;
        }
        v10[1] = *(_DWORD *)(*(_QWORD *)(v8 + 424) + 56LL);
        if ( v8 )
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v8);
        v11 = *((_WORD *)a1 + 16);
        v9 = *((_BYTE *)a1 + 36);
        v10[2] = ThreadId;
        v10[0] = v4;
        v12 = v9;
        SendMessageTo(14LL, v10);
      }
    }
  }
}
