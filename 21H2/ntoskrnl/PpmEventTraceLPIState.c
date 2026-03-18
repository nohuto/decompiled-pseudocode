/*
 * XREFs of PpmEventTraceLPIState @ 0x1405DB010
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140864680 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void PpmEventTraceLPIState()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+40h] [rbp-38h] BYREF
  int v2; // [rsp+44h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  int *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  if ( PpmEtwRegistered )
  {
    v0 = PpmEtwHandle;
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_LPI_RUNDOWN) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      v1 = PpmParkLpiCap;
      v2 = PpmParkLpiEngaged;
      UserData.Ptr = (ULONGLONG)&v1;
      v4 = &v2;
      UserData.Size = 4;
      v5 = 4;
      EtwWriteEx(v0, &PPM_ETW_LPI_RUNDOWN, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
