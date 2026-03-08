/*
 * XREFs of EmonReleaseProfileResourcesInternal @ 0x14051BCC0
 * Callers:
 *     EmonAllocateResources @ 0x14051A90C (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x14051BBE0 (EmonReleaseProfileResources.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140505958 (HalpPmuReservedResourcesProcessorCallback.c)
 */

__int64 __fastcall EmonReleaseProfileResourcesInternal(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // r14d
  unsigned int v4; // edi
  _BYTE *v5; // rsi
  _DWORD v7[68]; // [rsp+20h] [rbp-138h] BYREF

  v2 = 0;
  v7[0] = 2097153;
  memset(&v7[1], 0, 0x104uLL);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = (_BYTE *)(a1 + 40);
    do
    {
      if ( *v5 )
        KeAddProcessorAffinityEx((unsigned __int16 *)v7, v4);
      ++v4;
      v5 += 80;
    }
    while ( v4 < ActiveProcessorCount );
  }
  if ( !(unsigned int)KeIsEmptyAffinityEx(v7) )
    return (unsigned int)HalpPmuReservedResourcesProcessorCallback(
                           (__int64)v7,
                           (__int64 (__fastcall *)(__int64))EmonReleaseReservedCounters,
                           a1,
                           a1);
  return v2;
}
