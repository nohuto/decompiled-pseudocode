/*
 * XREFs of ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C003309C
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C00329E0 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     _RegisterHotKey @ 0x1C0032BD4 (_RegisterHotKey.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x1C0032FB8 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C01325BC (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z.c)
 *     _lambda_ee96b6502effcc67d9cd908cd78240cc_::_lambda_invoker_cdecl_ @ 0x1C0137400 (_lambda_ee96b6502effcc67d9cd908cd78240cc_--_lambda_invoker_cdecl_.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01EA614 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall NotifyHotKeyRegistrationChanged(
        struct tagHOTKEY *const a1,
        struct tagCHILDHOTKEY *const a2,
        unsigned __int8 a3)
{
  unsigned int ThreadId; // r9d
  int v4; // edi
  __int64 v6; // rcx
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
    if ( (unsigned __int64)(v6 - 2) <= 0xFFFFFFFFFFFFFFFBuLL || !v6 )
    {
      v7 = *((_WORD *)a1 + 13);
      if ( (v7 & 0x9C00) == 0 )
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
        v11 = *((_WORD *)a1 + 12);
        v9 = *((_BYTE *)a1 + 28);
        v10[2] = ThreadId;
        v10[0] = v4;
        v12 = v9;
        SendMessageTo(15LL, v10);
      }
    }
  }
}
