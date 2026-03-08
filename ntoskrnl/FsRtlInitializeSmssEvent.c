/*
 * XREFs of FsRtlInitializeSmssEvent @ 0x140B65D30
 * Callers:
 *     FsRtlInitSystem @ 0x140B65B14 (FsRtlInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     NtCreateEvent @ 0x1407D0E20 (NtCreateEvent.c)
 */

__int64 FsRtlInitializeSmssEvent()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  _DWORD v2[2]; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+38h] [rbp-38h]
  _QWORD v4[3]; // [rsp+40h] [rbp-30h] BYREF
  int v5; // [rsp+58h] [rbp-18h]
  int v6; // [rsp+5Ch] [rbp-14h]
  __int128 v7; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  Handle = 0LL;
  v2[1] = 0;
  v6 = 0;
  v4[1] = 0LL;
  v3 = L"\\Device\\VolumesSafeForWriteAccess";
  v4[0] = 48LL;
  v4[2] = v2;
  v2[0] = 4456514;
  v5 = 592;
  v7 = 0LL;
  result = NtCreateEvent((unsigned __int64)&Handle, 0x1F0003u, (int)v4, NotificationEvent, 0);
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
