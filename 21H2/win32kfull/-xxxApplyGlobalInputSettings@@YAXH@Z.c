/*
 * XREFs of ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00A81DC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _GetProcessWindowStation @ 0x1C00CEC40 (_GetProcessWindowStation.c)
 */

void __fastcall xxxApplyGlobalInputSettings()
{
  __int64 v0; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF

  v0 = *(_QWORD *)(*(_QWORD *)(gpqForeground + 112LL) + 16LL);
  if ( (*(_DWORD *)(v0 + 488) & 1) == 0 && *(_QWORD *)(v0 + 784) )
  {
    if ( v0 == gptiCurrent )
    {
      if ( gspklGlobalActive )
      {
        if ( gspklGlobalActive != *(_QWORD *)(gptiCurrent + 440LL) )
        {
          v5[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v5;
          v5[2] = 0LL;
          v5[1] = gspklGlobalActive;
          HMLockObject(gspklGlobalActive);
          ProcessWindowStation = GetProcessWindowStation(0LL);
          xxxInternalActivateKeyboardLayout(ProcessWindowStation, gspklGlobalActive, 0LL, 0LL);
          ThreadUnlock1(v3, v2, v4);
        }
      }
    }
    else
    {
      PostEventMessageEx((struct tagTHREADINFO *)v0, gpqForeground, 0x12u, 0LL, 0, 0LL, 0LL, 0LL);
    }
  }
}
