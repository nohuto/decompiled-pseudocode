unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroySyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  int v4; // eax
  struct VMBPACKETCOMPLETION__ *v5; // rcx
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( v2 )
  {
    v7.hSyncObject = *(_DWORD *)(v2 + 24);
    v4 = DxgkDestroySynchronizationObjectImpl(&v7, 0, v3);
    v5 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
    v8 = v4;
    VmBusCompletePacket(v5, &v8, 4u);
    LOBYTE(v2) = 1;
  }
  return v2;
}
