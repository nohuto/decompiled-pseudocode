/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C0003B40
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00039E8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C011CF24 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02D4D0C (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

struct _FONTSUB *__fastcall pfsubAlternateFacename(const unsigned __int16 *a1)
{
  __int64 v2; // rbp
  _BYTE *v3; // rdi
  _BYTE *v4; // rsi
  unsigned __int16 *v5; // rax
  int v6; // r8d
  int v7; // ecx
  __int64 ThreadWin32Thread; // rax
  _BYTE v10[64]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState() + 32);
  v3 = *(_BYTE **)(v2 + 19472);
  v4 = &v3[196 * *(unsigned int *)(v2 + 19488)];
  cCapString(v10, a1, 32LL);
  if ( v3 >= v4 )
    return 0LL;
  while ( 1 )
  {
    v5 = (unsigned __int16 *)v10;
    do
    {
      v6 = *(unsigned __int16 *)((char *)v5 + v3 + 64 - v10);
      v7 = *v5 - v6;
      if ( v7 )
        break;
      ++v5;
    }
    while ( v6 );
    if ( !v7 && ((v3[129] & 1) != 0 || v3[128] == v3[194]) )
    {
      if ( v3 != *(_BYTE **)(v2 + 19472) )
        break;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x400) != 0 )
        break;
    }
    v3 += 196;
    if ( v3 >= v4 )
      return 0LL;
  }
  return (struct _FONTSUB *)v3;
}
