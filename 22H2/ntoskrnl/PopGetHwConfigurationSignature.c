/*
 * XREFs of PopGetHwConfigurationSignature @ 0x140996ED4
 * Callers:
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1402E7FA0 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1402EA680 (MmUnmapIoSpace.c)
 *     HalGetMemoryCachingRequirements @ 0x1403A40D0 (HalGetMemoryCachingRequirements.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FA0E0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 PopGetHwConfigurationSignature()
{
  void *v0; // rbx
  unsigned int v1; // r14d
  unsigned int v2; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  _DWORD *v6; // rax
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v9[6]; // [rsp+28h] [rbp-28h] BYREF

  v9[4] = 0;
  v0 = 0LL;
  v9[1] = 1;
  v9[3] = 0;
  NumberOfBytes = 0LL;
  v1 = 0;
  v9[0] = 1094930505;
  v9[2] = 1346584902;
  v2 = 4;
  if ( (unsigned int)ZwQuerySystemInformation(76LL, (__int64)v9) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x206D654Du);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 1094930505;
      PoolWithTag[1] = 1;
      PoolWithTag[2] = 1346584902;
      PoolWithTag[3] = NumberOfBytes - 16;
      if ( (int)ZwQuerySystemInformation(76LL, (__int64)PoolWithTag) >= 0 && *((_BYTE *)v4 + 24) >= 5u )
      {
        v5 = (unsigned int)v4[13];
        HalGetMemoryCachingRequirements(v5, 64LL, (_DWORD *)&NumberOfBytes + 1);
        if ( HIDWORD(NumberOfBytes) != 1 )
        {
          v2 = 516;
          if ( HIDWORD(NumberOfBytes) == 2 )
            v2 = 1028;
        }
        v6 = (_DWORD *)MmMapIoSpaceEx(v5, 64LL, v2);
        v0 = v6;
        if ( *v6 == 1396916550 )
          v1 = v6[2];
      }
      ExFreePoolWithTag(v4, 0x206D654Du);
      if ( v0 )
        MmUnmapIoSpace(v0, 0x40uLL);
    }
  }
  return v1;
}
