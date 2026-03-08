/*
 * XREFs of IommupHvIsStage1DmarCompatible @ 0x140522BE4
 * Callers:
 *     IommupDeviceEnablePasidTaggedDma @ 0x140822E44 (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

bool __fastcall IommupHvIsStage1DmarCompatible(_DWORD *a1, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( HalpHvParaVirtIommuDomain
    && (!a2 || IommupHvPasidEnabled)
    && *a1 == 1
    && (int)((__int64 (__fastcall *)(_DWORD *, __int128 *))qword_140C62200)(a1, &v4) >= 0
    && (v4 & 0x20) != 0 )
  {
    if ( !a2 )
      return 1;
    if ( (v4 & 0x200) != 0 )
      return DWORD1(v4) >= IommupHvMaximumAsids;
  }
  return 0;
}
