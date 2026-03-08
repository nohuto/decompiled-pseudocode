/*
 * XREFs of HalpUsbLegacyScanBusForHandoff @ 0x14038F7C4
 * Callers:
 *     HalpErrataInitSystem @ 0x140A87AA0 (HalpErrataInitSystem.c)
 * Callees:
 *     HalpUsbLegacyDeviceHandoff @ 0x1403A7544 (HalpUsbLegacyDeviceHandoff.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int16 HalpUsbLegacyScanBusForHandoff()
{
  unsigned int v0; // ebx
  unsigned int i; // esi
  unsigned __int8 j; // bp
  char k; // di
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-78h]
  _WORD v7[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v7, 0, sizeof(v7));
  v0 = 0;
  for ( i = 0; i <= 0xFF; ++i )
  {
    for ( j = 0; j < 0x20u; ++j )
    {
      for ( k = 0; ; k = 1 )
      {
        while ( 1 )
        {
          LODWORD(v6) = 2;
          v0 = j & 0x1F | v0 & 0xFFFFFF00 | (32 * (k & 7));
          v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _WORD *, _QWORD, __int64))qword_140C01A40)(i, v0, v7, 0LL, v6);
          if ( !v4 || (LOWORD(v4) = v7[0] - 1, (unsigned __int16)(v7[0] - 1) > 0xFFFDu) )
          {
            if ( !k )
              goto LABEL_7;
            goto LABEL_10;
          }
          v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _WORD *, _QWORD, int))qword_140C01A40)(i, v0, v7, 0LL, 16);
          if ( v4 )
          {
            LOWORD(v4) = HalpUsbLegacyDeviceHandoff(0LL, i, v0, v7, 0LL);
            if ( !k )
              break;
          }
LABEL_10:
          if ( (unsigned __int8)++k >= 8u )
            goto LABEL_7;
        }
        if ( SLOBYTE(v7[7]) >= 0 )
          break;
      }
LABEL_7:
      ;
    }
  }
  return v4;
}
