/*
 * XREFs of DwmAsyncDesktopCreate @ 0x1C007D0B8
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C007CEC8 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C0028164 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncDesktopCreate(PVOID Object, __int64 a2)
{
  unsigned int v4; // ebx
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-28h]

  v4 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object);
  if ( Object )
  {
    memset(v6, 0, sizeof(v6));
    v7[0] = 0LL;
    LODWORD(v6[0]) = 3407884;
    WORD2(v6[0]) = 0x8000;
    LODWORD(v7[1]) = 1073741838;
    *(_QWORD *)((char *)&v7[1] + 4) = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
