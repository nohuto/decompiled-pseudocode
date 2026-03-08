/*
 * XREFs of HalpUsbLegacyStopOhciInterrupt @ 0x14051EC00
 * Callers:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140A9527C (HalpStopLegacyUsbInterruptsInternal.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022B710 (KeStallExecutionProcessor.c)
 *     HalpUnmapVirtualAddress @ 0x14037ADE0 (HalpUnmapVirtualAddress.c)
 *     HalpMap @ 0x14037AE88 (HalpMap.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpUsbLegacyStopOhciInterrupt(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  _DWORD v8[16]; // [rsp+40h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *, _QWORD, int))qword_140C01A40)(a2, a3, v8, 0LL, 64);
  if ( (v8[1] & 2) != 0 )
  {
    result = v8[4] & 0xFFFFFFF0;
    if ( (v8[4] & 0xFFFFFFF0) != 0 )
    {
      v6 = 0;
      result = HalpMap(v8[4] & 0xFFFFFFF0, 1LL, 1u, 0LL, 4u);
      v7 = result;
      if ( result )
      {
        if ( (*(_DWORD *)(result + 4) & 0x100) != 0 )
        {
          if ( *(_DWORD *)(result + 4) != 256 || *(_DWORD *)(result + 16) )
          {
            *(_DWORD *)(result + 20) = 64;
            *(_DWORD *)(result + 16) = -1073741824;
            *(_DWORD *)(result + 8) = 8;
            do
            {
              KeStallExecutionProcessor(0x3E8u);
              if ( (*(_DWORD *)(v7 + 4) & 0x100) == 0 )
                break;
              ++v6;
            }
            while ( v6 < 0x1F4 );
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
          }
        }
        *(_DWORD *)(v7 + 20) = 0x80000000;
        return (__int64)HalpUnmapVirtualAddress(v7, 1LL, 0LL);
      }
    }
  }
  return result;
}
