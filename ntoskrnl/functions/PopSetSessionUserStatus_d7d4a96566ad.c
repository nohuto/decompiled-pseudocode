__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  const wchar_t *v4; // rax
  unsigned __int64 v5; // rdx
  char v6; // bl
  int v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  if ( dword_140C398D8 == a1 && a1 != -1 )
    dword_140C398DC = a2;
  v10 = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3LL, (__int64)"PopAdaptive: Session %u user presence/activity state: %S\n", v3, v4);
  PopDiagTraceSessionState(&POP_ETW_ADPM_SESSION_INPUT_STATE);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, v3, 0, 4u, &v10);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, v3, 1, 4u, &v10);
  if ( PopMaximumConnectionSessions )
  {
    if ( (unsigned int)v3 >= PopMaximumConnectionSessions )
      PopExtendConnectionState((unsigned int)v3);
    if ( PopMaximumConnectionSessions )
    {
      v5 = v3 >> 3;
      v6 = v3 & 7;
      v7 = *((char *)PopConnectionBitmap.Buffer + v5);
      if ( a2 )
        v8 = v7 & ~(1 << v6);
      else
        v8 = v7 | (1 << v6);
      *((_BYTE *)PopConnectionBitmap.Buffer + v5) = v8;
    }
  }
  return PopEvaluateGlobalUserStatus();
}
