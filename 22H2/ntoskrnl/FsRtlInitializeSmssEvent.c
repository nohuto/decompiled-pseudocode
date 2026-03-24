/*
 * XREFs of FsRtlInitializeSmssEvent @ 0x140A6BB14
 * Callers:
 *     FsRtlInitSystem @ 0x140A6B9E0 (FsRtlInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     NtCreateEvent @ 0x140651360 (NtCreateEvent.c)
 */

__int64 FsRtlInitializeSmssEvent()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  _DWORD v2[2]; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+38h] [rbp-38h]
  _DWORD v4[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v5; // [rsp+48h] [rbp-28h]
  _DWORD *v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]
  __int128 v9; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  Handle = 0LL;
  v2[1] = 0;
  v4[1] = 0;
  v8 = 0;
  v5 = 0LL;
  v3 = L"\\Device\\VolumesSafeForWriteAccess";
  v2[0] = 4456514;
  v6 = v2;
  v4[0] = 48;
  v7 = 592;
  v9 = 0LL;
  result = NtCreateEvent((unsigned __int64)&Handle, 2031619LL, (int)v4, NotificationEvent, 0);
  if ( (int)result >= 0 )
  {
    Object = 0LL;
    v1 = ObReferenceObjectByHandle(Handle, 0x100000u, 0LL, 0, &Object, 0LL);
    NtClose(Handle);
    if ( v1 < 0 )
    {
      return (unsigned int)v1;
    }
    else
    {
      SmssEventWorkItem.List.Flink = 0LL;
      SmssEventWorkItem.WorkerRoutine = (void (__fastcall *)(void *))FsRtlWaitForSmssEvent;
      SmssEventWorkItem.Parameter = Object;
      ExQueueWorkItem(&SmssEventWorkItem, DelayedWorkQueue);
      return 0LL;
    }
  }
  return result;
}
