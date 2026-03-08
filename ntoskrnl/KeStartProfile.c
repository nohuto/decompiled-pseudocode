/*
 * XREFs of KeStartProfile @ 0x140571A6C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140786150 (EtwpEnableKernelTrace.c)
 *     EtwpTimeProfileStart @ 0x1409E3D58 (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x1409F05F8 (EtwpCoverageSamplerStart.c)
 *     NtStartProfile @ 0x140A019E0 (NtStartProfile.c)
 *     KiInitializeCacheErrataSupport @ 0x140B9302C (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeStopProfile @ 0x140571BAC (KeStopProfile.c)
 *     KiStartProfileTarget @ 0x140571FC0 (KiStartProfileTarget.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeStartProfile(ULONG_PTR a1)
{
  unsigned int v2; // ebx
  ULONG MaximumProcessorCount; // eax
  ULONG_PTR Context[40]; // [rsp+28h] [rbp-E0h] BYREF

  v2 = 0;
  memset(Context, 0, 0x138uLL);
  HIDWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[3]) = 2097153;
  Context[0] = a1;
  memset((char *)&Context[3] + 4, 0, 0x104uLL);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  Context[36] = ExAllocatePool2(64LL, 4 * MaximumProcessorCount + 292, 1718579792LL);
  if ( Context[36] )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
      KiStartProfileTarget((ULONG_PTR)Context);
    else
      KeIpiGenericCall(KiStartProfileTarget, (ULONG_PTR)Context);
    if ( Context[36] )
      ExFreePoolWithTag((PVOID)Context[36], 0x666F7250u);
    if ( LODWORD(Context[2]) )
    {
      if ( (Context[2] & 2) != 0 )
      {
        v2 = -1073741637;
      }
      else
      {
        if ( (Context[2] & 1) == 0 )
          return v2;
        v2 = -2147483631;
      }
      KeStopProfile(a1);
      return v2;
    }
    if ( !LOBYTE(Context[38]) )
      return 255;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
