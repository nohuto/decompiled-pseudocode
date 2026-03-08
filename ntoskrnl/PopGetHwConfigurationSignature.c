/*
 * XREFs of PopGetHwConfigurationSignature @ 0x140A9FA5C
 * Callers:
 *     PopAllocateHiberContext @ 0x140984D38 (PopAllocateHiberContext.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     HalGetMemoryCachingRequirements @ 0x1402F96F0 (HalGetMemoryCachingRequirements.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PopGetHwConfigurationSignature()
{
  void *v0; // rbx
  unsigned int v1; // r14d
  unsigned int v2; // esi
  _DWORD *Pool2; // rax
  _DWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  _DWORD *v6; // rax
  int v8; // [rsp+24h] [rbp-2Ch] BYREF
  _DWORD v9[6]; // [rsp+28h] [rbp-28h] BYREF

  v8 = 0;
  v9[4] = 0;
  v0 = 0LL;
  v9[0] = 1094930505;
  v9[3] = 0;
  v1 = 0;
  v9[1] = 1;
  v9[2] = 1346584902;
  v2 = 4;
  if ( (unsigned int)ZwQuerySystemInformation(76LL, (__int64)v9) == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 0LL, 544040269LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1094930505;
      Pool2[1] = 1;
      Pool2[2] = 1346584902;
      Pool2[3] = -16;
      if ( (int)ZwQuerySystemInformation(76LL, (__int64)Pool2) >= 0 && *((_BYTE *)v4 + 24) >= 5u )
      {
        v5 = (unsigned int)v4[13];
        HalGetMemoryCachingRequirements(v5, 64LL, &v8);
        if ( v8 != 1 )
        {
          v2 = 516;
          if ( v8 == 2 )
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
