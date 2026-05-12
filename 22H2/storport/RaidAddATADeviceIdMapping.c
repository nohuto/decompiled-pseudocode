/*
 * XREFs of RaidAddATADeviceIdMapping @ 0x1C0035334
 * Callers:
 *     RaidLoadATADeviceIdMappings @ 0x1C0035710 (RaidLoadATADeviceIdMappings.c)
 *     ATAShimGetMsftId @ 0x1C0058490 (ATAShimGetMsftId.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x1C0035E50 (RtlStringCbCopyA.c)
 */

__int64 __fastcall RaidAddATADeviceIdMapping(NTSTRSAFE_PCSTR pszSrc, int a2, struct _STRING *a3)
{
  unsigned int v6; // edi
  struct _STRING *PoolWithTag; // rax
  struct _STRING *v8; // rbx
  SIZE_T v9; // rbp
  char *v10; // rax
  const char *v11; // rsi
  char *Lock; // rax
  char *Buffer; // rcx

  v6 = 0;
  PoolWithTag = (struct _STRING *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x48536152u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    v9 = (unsigned int)(a2 + 1);
    v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x48536152u);
    v11 = v10;
    if ( v10 )
    {
      RtlStringCbCopyA(v10, v9, pszSrc);
      v8->Buffer = (char *)v8;
      *(_QWORD *)&v8->Length = v8;
      RtlInitAnsiString(v8 + 1, v11);
      v8[2] = *a3;
      Lock = (char *)WPP_MAIN_CB.DeviceQueue.Lock;
      if ( *(struct _DEVICE_OBJECT **)WPP_MAIN_CB.DeviceQueue.Lock != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
        __fastfail(3u);
      *(_QWORD *)&v8->Length = &WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink;
      v8->Buffer = Lock;
      *(_QWORD *)Lock = v8;
      WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)v8;
      v8 = 0LL;
    }
    else
    {
      v6 = -1073741670;
    }
    if ( v8 )
    {
      Buffer = v8[1].Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0x48536152u);
      ExFreePoolWithTag(v8, 0x48536152u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
