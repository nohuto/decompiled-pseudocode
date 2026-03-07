__int64 ExInitializeLeapSecondData()
{
  int v0; // edi
  PVOID v1; // r12
  size_t v2; // r14
  SIZE_T v3; // rax
  struct _MDL *Pool2; // rax
  struct _MDL *v5; // rdi
  __int16 v6; // dx
  PVOID v7; // rsi
  LARGE_INTEGER v9; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v10[6]; // [rsp+48h] [rbp-30h] BYREF
  PVOID Base; // [rsp+80h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF
  SIZE_T Length; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v9.QuadPart = 4096LL;
  v0 = ZwCreateSection(&Handle, 6u, 0LL, &v9, 4u, 0x8000000u, 0LL);
  if ( v0 >= 0 )
  {
    Object = 0LL;
    v0 = ObReferenceObjectByHandle(Handle, 6u, MmSectionObjectType, 0, &Object, 0LL);
    if ( v0 >= 0 )
    {
      Base = 0LL;
      Length = 0LL;
      v10[0] = 0LL;
      v1 = Object;
      v0 = MiMapViewInSystemSpace((__int64)Object, &Base, &Length, v10, 0LL, 0LL);
      if ( v0 >= 0 )
      {
        v2 = Length;
        v3 = MmSizeOfMdl(Base, Length);
        Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v3, 1683189836LL);
        v5 = Pool2;
        if ( !Pool2 )
          goto LABEL_10;
        Pool2->Next = 0LL;
        v6 = (__int16)Base;
        Pool2->Size = 8 * (((((unsigned __int16)Base & 0xFFF) + v2 + 4095) >> 12) + 6);
        Pool2->MdlFlags = 0;
        Pool2->StartVa = (PVOID)((unsigned __int64)Base & 0xFFFFFFFFFFFFF000uLL);
        Pool2->ByteOffset = v6 & 0xFFF;
        Pool2->ByteCount = v2;
        MmProbeAndLockPages(Pool2, 0, IoWriteAccess);
        v7 = MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( v7 )
        {
          MiRemoveFromSystemSpace((ULONG_PTR)Base, 1);
          v0 = 0;
          ExpLeapSecondDataLock = 0LL;
          ExLeapSecondDataSectionPointer = (__int64)v1;
          memset(v7, 0, v2);
          ExpReadLeapSecondData(v7, 0LL);
          ExLeapSecondData = v7;
        }
        else
        {
LABEL_10:
          v0 = -1073741801;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
