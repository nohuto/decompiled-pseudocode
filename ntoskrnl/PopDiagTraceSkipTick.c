/*
 * XREFs of PopDiagTraceSkipTick @ 0x14098E53C
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSkipTick(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // edi
  int v3; // esi
  REGHANDLE v4; // rbx
  int v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+34h] [rbp-34h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  v2 = a2;
  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SKIP_TICK) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      v8 = &v6;
      v9 = 4;
      v5 = v3;
      v6 = v2;
      EtwWrite(v4, &POP_ETW_EVENT_SKIP_TICK, 0LL, 2u, &UserData);
    }
  }
}
