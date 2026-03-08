/*
 * XREFs of PspInitializeSiloStructures @ 0x140B3E8CC
 * Callers:
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspAllocStorage @ 0x140797524 (PspAllocStorage.c)
 *     PspSiloInitializeSharedUserSessionId @ 0x14079C7D0 (PspSiloInitializeSharedUserSessionId.c)
 *     PspStorageAllocSlot @ 0x14080C8BC (PspStorageAllocSlot.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 *     PspStorageFreeSlot @ 0x1409B4EC4 (PspStorageFreeSlot.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char PspInitializeSiloStructures()
{
  __int64 Pool2; // rax
  unsigned int v2; // ecx
  PVOID v3; // rcx
  _QWORD v4[16]; // [rsp+20h] [rbp-29h] BYREF

  Pool2 = ExAllocatePool2(64LL, 0x270uLL, 0x476C6953u);
  qword_140D49EE8 = Pool2;
  if ( !Pool2
    || (int)PspSiloInitializeSharedUserSessionId(Pool2) < 0
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
  qword_140C37D88 = (__int64)&PspSiloMonitorList;
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
      if ( (int)PspAllocStorage(&qword_140D49ED0) >= 0 )
        return 1;
      ObfDereferenceObjectWithTag(PsSiloContextPagedType, 0x746C6644u);
      v3 = PsSiloContextNonPagedType;
    }
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
  return 0;
}
