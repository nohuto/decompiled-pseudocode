__int64 __fastcall PiPnpRtlGatherInterfaceDeleteInfo(__int64 a1, unsigned int ***a2)
{
  void *v2; // rsi
  unsigned int **Pool2; // rax
  int v6; // ebx
  int Object; // eax
  int ObjectProperty; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+60h] [rbp-49h] BYREF
  __int64 v14; // [rsp+68h] [rbp-41h] BYREF
  __int128 v15; // [rsp+70h] [rbp-39h] BYREF
  wchar_t v16[40]; // [rsp+80h] [rbp-29h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Pool2 = (unsigned int **)ExAllocatePool2(256LL, 32LL, 1198550608LL);
  *a2 = Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741670;
LABEL_22:
    PiPnpRtlFreeInterfaceDeleteInfo(*a2);
    *a2 = 0LL;
    goto LABEL_24;
  }
  Object = PiDmGetObject(3LL, a1, Pool2);
  v6 = Object;
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_22;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     3LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
                     (__int64)&v13 + 4,
                     (__int64)&v15,
                     16,
                     (__int64)&v13,
                     0);
  v6 = ObjectProperty;
  if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
  {
    if ( ObjectProperty < 0 )
      goto LABEL_22;
    if ( PnpStringFromGuid((int *)&v15, v16) >= 0 )
    {
      v6 = PiDmGetObject(4LL, (__int64)v16, *a2 + 1);
      if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
        goto LABEL_22;
    }
  }
  v9 = PnpGetObjectProperty(
         0x47706E50u,
         0xC8u,
         a1,
         3,
         0LL,
         0LL,
         (__int64)&DEVPKEY_Device_InstanceId,
         (__int64)&v13 + 4,
         (PVOID *)&v14,
         (unsigned int *)&v13,
         0);
  v2 = (void *)v14;
  v6 = v9;
  if ( v9 != -1073741772 && v9 != -1073741275 )
  {
    if ( v9 < 0 )
      goto LABEL_22;
    v6 = PiDmGetObject(1LL, v14, *a2 + 2);
    if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
      goto LABEL_22;
  }
  v10 = PnpGetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          a1,
          3LL,
          0LL,
          0LL,
          (__int64)&DEVPKEY_Device_ContainerId,
          (__int64)&v13 + 4,
          (__int64)&v15,
          16,
          (__int64)&v13,
          0);
  v6 = v10;
  if ( v10 != -1073741772 && v10 != -1073741275 )
  {
    if ( v10 < 0 )
      goto LABEL_22;
    v6 = PnpStringFromGuid((int *)&v15, v16);
    if ( v6 < 0 )
      goto LABEL_22;
    v11 = PiDmGetObject(5LL, (__int64)v16, *a2 + 3);
    v6 = v11;
    if ( v11 != -1073741772 )
    {
      if ( v11 >= 0 )
        goto LABEL_24;
      goto LABEL_22;
    }
  }
  v6 = 0;
LABEL_24:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return (unsigned int)v6;
}
