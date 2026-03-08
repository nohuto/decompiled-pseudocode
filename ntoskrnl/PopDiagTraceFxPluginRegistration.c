/*
 * XREFs of PopDiagTraceFxPluginRegistration @ 0x14084D450
 * Callers:
 *     PopFxRegisterPluginEx @ 0x1403A37D8 (PopFxRegisterPluginEx.c)
 *     PopDiagTraceFxRundown @ 0x140586438 (PopDiagTraceFxRundown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPluginRegistration(__int64 a1, __int64 a2, char a3)
{
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // rbx
  REGHANDLE v5; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v11 = a1;
  v3 = &POP_ETW_EVENT_PLUGIN_REGISTRATION;
  v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_PLUGIN_REGISTRATION_RUNDOWN;
  if ( !a3 )
    v4 = &POP_ETW_EVENT_PLUGIN_REGISTRATION;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, v4);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 8;
      v8 = &v12;
      v9 = 8;
      LOBYTE(v3) = EtwWrite(v5, v4, 0LL, 2u, &UserData);
    }
  }
  return (char)v3;
}
