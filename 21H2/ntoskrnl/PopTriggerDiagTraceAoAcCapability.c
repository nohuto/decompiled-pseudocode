/*
 * XREFs of PopTriggerDiagTraceAoAcCapability @ 0x140B2FF24
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void PopTriggerDiagTraceAoAcCapability()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  if ( PopTriggerDiagHandleRegistered )
  {
    v0 = PopTriggerDiagHandle;
    if ( EtwEventEnabled(PopTriggerDiagHandle, &POP_TRIGGER_ETW_AOAC_CAPABILITY) )
    {
      UserData.Reserved = 0;
      v1 = (unsigned __int8)PopPlatformAoAc;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&v1;
      EtwWriteEx(v0, &POP_TRIGGER_ETW_AOAC_CAPABILITY, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
