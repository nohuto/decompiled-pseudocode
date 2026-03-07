LONG __fastcall HUBHTX_BootDevicePortStatusControlTransferComplete(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KEVENT *a4)
{
  return KeSetEvent(a4, 0, 0);
}
