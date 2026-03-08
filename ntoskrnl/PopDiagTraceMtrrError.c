/*
 * XREFs of PopDiagTraceMtrrError @ 0x140AA4D84
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopDiagTraceMtrrError()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_MTRR_CHANGED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&dword_140C3CD8C;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_MTRR_CHANGED, 0LL, 1u, &UserData);
    }
  }
}
