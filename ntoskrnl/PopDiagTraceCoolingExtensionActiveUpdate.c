/*
 * XREFs of PopDiagTraceCoolingExtensionActiveUpdate @ 0x14098A200
 * Callers:
 *     PopPropogateCoolingChange @ 0x140584860 (PopPropogateCoolingChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCoolingExtensionActiveUpdate(__int64 a1)
{
  REGHANDLE v2; // rdi
  bool v3; // zf
  BOOL v4; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_ACTIVE_UPDATE) )
    {
      v5 = a1;
      v3 = *(_BYTE *)(a1 + 65) == 0;
      UserData.Size = 4;
      v8 = 8;
      UserData.Reserved = 0;
      v9 = 0;
      v4 = !v3;
      UserData.Ptr = (ULONGLONG)&v4;
      v7 = &v5;
      EtwWrite(v2, &POP_ETW_EVENT_COOLING_EXTENSION_ACTIVE_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
