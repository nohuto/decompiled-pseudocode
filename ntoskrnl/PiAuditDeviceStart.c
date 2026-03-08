/*
 * XREFs of PiAuditDeviceStart @ 0x14096CE1C
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     PiAuditDeviceOperation @ 0x14096C7A8 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiAuditDeviceStart(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  char v4; // [rsp+70h] [rbp+8h] BYREF
  int v5; // [rsp+78h] [rbp+10h] BYREF
  int v6; // [rsp+80h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v4 = 0;
  v6 = 1;
  result = PnpGetObjectProperty(
             *(__int64 *)&PiPnpRtlCtx,
             v1,
             1LL,
             0LL,
             0LL,
             (__int64)&DEVPKEY_Device_InLocalMachineContainer,
             (__int64)&v5,
             (__int64)&v4,
             1,
             (__int64)&v6,
             0);
  if ( (int)result >= 0 && v5 == 17 && v6 == 1 && v4 != -1 )
    return PiAuditDeviceOperation(a1, 0, 1);
  return result;
}
