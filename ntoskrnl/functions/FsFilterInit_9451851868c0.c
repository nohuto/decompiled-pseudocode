__int64 FsFilterInit()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  v0 = 0;
  AcquireOpsReservePool = (PVOID)ExAllocatePool2(64LL, 968LL, 1735217990LL);
  if ( !AcquireOpsReservePool )
    v0 = -1073741670;
  ReleaseOpsReservePool = ExAllocatePool2(64LL, 968LL, 1735217990LL);
  if ( !ReleaseOpsReservePool )
  {
    ExFreePoolWithTag(AcquireOpsReservePool, 0x676D5346u);
    v0 = -1073741670;
  }
  byte_140C5F2E2 = 6;
  AcquireOpsEvent = 1;
  qword_140C5F2F0 = (__int64)&qword_140C5F2E8;
  qword_140C5F2E8 = (__int64)&qword_140C5F2E8;
  qword_140C5F2D0 = (__int64)&qword_140C5F2C8;
  qword_140C5F2C8 = (__int64)&qword_140C5F2C8;
  result = v0;
  dword_140C5F2E4 = 1;
  ReleaseOpsEvent = 1;
  byte_140C5F2C2 = 6;
  dword_140C5F2C4 = 1;
  return result;
}
