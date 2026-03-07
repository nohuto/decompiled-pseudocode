__int64 __fastcall PiPnpRtlSetDeviceRegProperty(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // r12d
  unsigned int *v9; // rbx
  unsigned int v13; // r14d
  char v14; // si
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  unsigned int v19; // ebx
  unsigned int v21; // r9d
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  bool v24; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // r9
  unsigned int v27; // [rsp+40h] [rbp-20h] BYREF
  int v28; // [rsp+44h] [rbp-1Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v31; // [rsp+B8h] [rbp+58h] BYREF

  v8 = a7;
  v9 = a6;
  v31 = 0;
  v28 = 0;
  v27 = 0;
  v13 = 0;
  v14 = 0;
  DestinationString = 0LL;
  v15 = a4 - 2;
  if ( v15 && (v16 = v15 - 1) != 0 )
  {
    v17 = v16 - 6;
    if ( !v17 )
    {
      CurrentThread = KeGetCurrentThread();
      v14 = 1;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      goto LABEL_8;
    }
    v18 = v17 - 2;
    if ( !v18 )
    {
      if ( !a6 || a7 != 4 )
        return (unsigned int)-1073741811;
      if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
      {
        v31 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&v28, (__int64)&v27, (__int64)&v31, 0) < 0
          || v31 != 4
          || v28 != 4 )
        {
          v27 = 0;
        }
        v13 = *v9;
      }
      goto LABEL_8;
    }
    v21 = v18 - 5;
    if ( !v21 )
      return (unsigned int)-1073741790;
    v22 = v21 - 1;
    if ( !v22 )
      return (unsigned int)-1073741790;
    v23 = v22 - 12;
    if ( !v23 )
      return (unsigned int)-1073741790;
    v24 = v23 == 8;
  }
  else
  {
    v24 = CmIsRootEnumeratedDevice(a2) == 0;
  }
  if ( v24 )
    return (unsigned int)-1073741790;
LABEL_8:
  v19 = CmSetDeviceRegProp(a1, (__int64)a2, a3, a4, a5, (__int64)v9, v8, a8);
  if ( a4 == 11 && SeAuditingWithTokenForSubcategory(137, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    LOBYTE(v26) = (v19 & 0x80000000) == 0;
    PiAuditDeviceEnableDisableRequest(&DestinationString, v27, v13, v26);
  }
  if ( v14 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return v19;
}
