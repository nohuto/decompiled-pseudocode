/*
 * XREFs of PopDiagTraceDevicesLevel @ 0x140AA47F8
 * Callers:
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDevicesLevel(int a1, int a2, char a3, char a4)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  REGHANDLE v6; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  char *v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]
  int v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a1;
  if ( a2 )
  {
    v4 = POP_ETW_EVENT_DEVICESWAKELEVEL_END;
    v5 = POP_ETW_EVENT_DEVICESWAKELEVEL;
  }
  else
  {
    v4 = (__int64 *)&POP_ETW_EVENT_DEVICESSUSPENDLEVEL_END;
    v5 = POP_ETW_EVENT_DEVICESSUSPENDLEVEL;
  }
  if ( !a4 )
    v5 = v4;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, (PCEVENT_DESCRIPTOR)v5);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v12;
      UserData.Size = 4;
      v9 = &v13;
      v10 = 1;
      LOBYTE(v4) = EtwWrite(v6, (PCEVENT_DESCRIPTOR)v5, 0LL, 2u, &UserData);
    }
  }
  return (char)v4;
}
