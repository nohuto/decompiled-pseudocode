void __fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  char *v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rsi
  const wchar_t *v7; // rcx
  __int64 SwDevice; // rax
  __int64 *v9; // rax
  char *v10; // r8
  struct _DEVICE_OBJECT *v11; // r14
  __int64 *DeviceExtension; // r15
  char *DeviceNode; // rcx
  __int64 v14; // rdx
  int v15; // r11d
  const wchar_t *v16; // r10
  const wchar_t *v17; // r8
  const wchar_t *v18; // rcx
  const wchar_t *v19; // r9

  v1 = 0LL;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = (v3 + 40) & -(__int64)(v3 != 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v6 = (__int64 *)PiSwGlobalPdoAssociationList;
  while ( v6 != &PiSwGlobalPdoAssociationList )
  {
    v9 = v6;
    v10 = v1;
    v6 = (__int64 *)*v6;
    if ( v9[2] == a1 )
    {
      v11 = (struct _DEVICE_OBJECT *)v9[3];
      DeviceExtension = (__int64 *)v11->DeviceExtension;
      DeviceNode = (char *)v11->DeviceObjectExtension->DeviceNode;
      v14 = *DeviceExtension;
      v1 = DeviceNode + 40;
      if ( !DeviceNode )
        v1 = v10;
      if ( (byte_140C0E10C & 8) != 0 )
      {
        if ( v14 )
          v15 = *(_DWORD *)(v14 + 4);
        else
          LOBYTE(v15) = 0;
        if ( v4 )
          v16 = *(const wchar_t **)(v4 + 8);
        else
          v16 = &word_1408834C0;
        if ( v1 )
          v17 = (const wchar_t *)*((_QWORD *)v1 + 1);
        else
          v17 = &word_1408834C0;
        if ( v14 )
        {
          v18 = *(const wchar_t **)(v14 + 16);
          v19 = *(const wchar_t **)(v14 + 8);
        }
        else
        {
          v18 = &word_1408834C0;
          v19 = &word_1408834C0;
        }
        McTemplateK0zzzzdd_EtwWriteTransfer(
          (__int64)v18,
          v14,
          (__int64)v17,
          v19,
          v18,
          v17,
          v16,
          v15,
          *((_DWORD *)DeviceExtension + 2));
      }
      if ( (DeviceExtension[1] & 0x20) == 0 )
        PiSwProcessRemove(v11, 0LL);
      PiSwDestroyDeviceObject(v11);
    }
  }
  if ( v4 )
  {
    v7 = *(const wchar_t **)(v4 + 8);
    if ( v7 )
    {
      SwDevice = PiSwFindSwDevice(v7);
      if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
        PiSwCloseDescendants(v4, 1);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
}
