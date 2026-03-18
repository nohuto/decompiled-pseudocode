/*
 * XREFs of DwmAsyncDesktopCreate @ 0x1C0099104
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0098F14 (zzzDwmStartRedirection.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall DwmAsyncDesktopCreate(PVOID Object, __int64 a2)
{
  unsigned int v3; // ebx
  _OWORD v5[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v6[3]; // [rsp+40h] [rbp-28h]

  v3 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    v6[0] = 0LL;
    *(_QWORD *)((char *)&v6[1] + 4) = a2;
    memset(v5, 0, sizeof(v5));
    LODWORD(v5[0]) = 3407884;
    WORD2(v5[0]) = 0x8000;
    LODWORD(v6[1]) = 1073741838;
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
