/*
 * XREFs of PopDiagTraceDeviceComplianceUpdate @ 0x14059043C
 * Callers:
 *     PopPdcUpdateDeviceCompliance @ 0x140995184 (PopPdcUpdateDeviceCompliance.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceDeviceComplianceUpdate(int a1, int a2)
{
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  int v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_COMPLIANCE_UPDATE) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v4 = &v8;
      v5 = 4;
      EtwWrite(v2, &POP_ETW_EVENT_CS_COMPLIANCE_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
