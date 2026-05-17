/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x1800835AC
 * Callers:
 *     LdrpRelocateImage @ 0x1800834CC (LdrpRelocateImage.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpSetProtection @ 0x180083688 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x18008489C (LdrRelocateImageWithBias.c)
 *     ZwQueryVirtualMemory @ 0x18009D940 (ZwQueryVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800D541C (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(const void *a1)
{
  bool v2; // di
  int v3; // ecx
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdx
  char v8; // al
  int v9; // edx
  const void *v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v10 = a1;
  v3 = ZwQueryVirtualMemory(-1LL, 0LL, 4LL, &v10, 16LL, 0LL);
  if ( v3 < 0 )
  {
    v8 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1971,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        (__int64)"Querying large page info failed with status 0x%08lx\n",
        v3);
      v8 = LdrpDebugFlags;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v11 & 1) != 0 )
  {
    v2 = (v11 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v4 = LdrpSetProtection(a1, 0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_21;
      v9 = 1981;
      goto LABEL_20;
    }
  }
  v5 = LdrRelocateImageWithBias(a1);
  if ( v5 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  LOBYTE(v6) = 1;
  v4 = LdrpSetProtection(a1, v6);
  v5 = v4;
  if ( v4 >= 0 )
    goto LABEL_9;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    v9 = 2005;
LABEL_20:
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v9,
      (unsigned int)"LdrpProtectAndRelocateImage",
      0,
      (__int64)"Changing the protection of the executable at %p failed with status 0x%08lx\n",
      a1,
      v4);
  }
LABEL_21:
  if ( (LdrpDebugFlags & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      2045,
      (unsigned int)"LdrpProtectAndRelocateImage",
      4,
      (__int64)"Status: 0x%08lx\n",
      v5);
  return (unsigned int)v5;
}
