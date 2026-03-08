/*
 * XREFs of PnpInitializeSessionId @ 0x140791830
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     IopGetSessionIdFromPDO @ 0x1406F72F8 (IopGetSessionIdFromPDO.c)
 */

void __fastcall PnpInitializeSessionId(__int64 a1, __int64 a2, char a3)
{
  int SessionIdFromPDO; // r10d
  __int64 v5; // rcx
  struct _DEVICE_OBJECT *v8; // rcx
  unsigned int v9; // ecx
  int *v10; // rdx
  int v11; // r8d
  int v12; // [rsp+70h] [rbp+18h] BYREF

  SessionIdFromPDO = -1;
  v5 = *(_QWORD *)(a1 + 16);
  v12 = -1;
  if ( v5 )
  {
    v8 = *(struct _DEVICE_OBJECT **)(v5 + 32);
    if ( (v8->DeviceObjectExtension->ExtensionFlags & 0x400) != 0 )
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO(v8);
      v12 = SessionIdFromPDO;
    }
  }
  if ( !a3 || SessionIdFromPDO != -1 )
  {
    if ( SessionIdFromPDO == -1 )
    {
      v9 = 0;
      v10 = 0LL;
      v11 = 0;
    }
    else
    {
      v9 = 4;
      v10 = &v12;
      v11 = 7;
    }
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1u,
      a2,
      0LL,
      (__int64)&DEVPKEY_Device_SessionId,
      v11,
      (__int64)v10,
      v9,
      a3 != 0 ? 0x20000 : 0);
  }
}
