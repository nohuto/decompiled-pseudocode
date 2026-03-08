/*
 * XREFs of UsbhReleaseHubNumber @ 0x1C0043EA0
 * Callers:
 *     UsbhAddDevice @ 0x1C0041E10 (UsbhAddDevice.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C0043010 (UsbhFdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseHubNumber(__int64 a1)
{
  _DWORD *v1; // rbx
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx

  v1 = FdoExt(a1);
  if ( v1[344] )
    USBD_ReleaseHubNumber();
  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  v2 = v1 + 1288;
  v3 = *((_QWORD *)v1 + 644);
  if ( *(_DWORD **)(v3 + 8) != v1 + 1288 || (v4 = (_QWORD *)*((_QWORD *)v1 + 645), (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)v1 + 645) = v1 + 1288;
  *v2 = v2;
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
