/*
 * XREFs of PspInitializeSiloStructures @ 0x140A3DBC4
 * Callers:
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspAllocStorage @ 0x140621810 (PspAllocStorage.c)
 *     PspSiloInitializeSharedUserSessionId @ 0x140622B90 (PspSiloInitializeSharedUserSessionId.c)
 *     PspStorageAllocSlot @ 0x140795A48 (PspStorageAllocSlot.c)
 *     ObCreateObjectType @ 0x140795AD0 (ObCreateObjectType.c)
 *     PspStorageFreeSlot @ 0x14090F0A4 (PspStorageFreeSlot.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char PspInitializeSiloStructures()
{
  PVOID PoolWithTag; // rax
  unsigned int v2; // ecx
  struct _DMA_ADAPTER *v3; // rcx
  _QWORD v4[16]; // [rsp+20h] [rbp-29h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x270uLL, 0x476C6953u);
  qword_140D249A8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x270uLL);
  if ( (int)PspSiloInitializeSharedUserSessionId(qword_140D249A8) < 0
    || (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectorySiloContextSlot) < 0 )
  {
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectoryTeardownSlot) < 0 )
  {
    v2 = PsObjectDirectorySiloContextSlot;
LABEL_13:
    PspStorageFreeSlot(v2);
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsSystemRootSiloContextSlot) < 0 )
  {
    PspStorageFreeSlot(PsObjectDirectorySiloContextSlot);
    v2 = PsObjectDirectoryTeardownSlot;
    goto LABEL_13;
  }
  PspSiloMonitorLock = 0LL;
  qword_140C1E0A8 = (__int64)&PspSiloMonitorList;
  PspSiloMonitorList = (__int64)&PspSiloMonitorList;
  memset(v4, 0, 0x78uLL);
  BYTE2(v4[0]) |= 0x84u;
  LOWORD(v4[0]) = 120;
  HIDWORD(v4[1]) = 0x20000;
  v4[2] = 0x2000000020000LL;
  HIDWORD(v4[4]) = 1;
  v4[3] = 0xF0000000F0000LL;
  v4[9] = PspDeleteSiloContext;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"$&", (__int64)v4, 0LL, (__int64)&PsSiloContextPagedType) >= 0 )
  {
    HIDWORD(v4[4]) = 512;
    if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"*,", (__int64)v4, 0LL, (__int64)&PsSiloContextNonPagedType) < 0 )
    {
      v3 = PsSiloContextPagedType;
    }
    else
    {
      if ( (int)PspAllocStorage(&qword_140D24990) >= 0 )
        return 1;
      HalPutDmaAdapter(PsSiloContextPagedType);
      v3 = PsSiloContextNonPagedType;
    }
    HalPutDmaAdapter(v3);
  }
  return 0;
}
