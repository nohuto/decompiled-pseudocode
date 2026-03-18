/*
 * XREFs of ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00F46C8
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00124A8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C001EF44 (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B71F0 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 * Callees:
 *     cCapString @ 0x1C0014ABC (cCapString.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

struct _FONTSUB *__fastcall pfsubAlternateFacename(WCHAR *a1)
{
  char *v1; // rbx
  char *v2; // rdi
  WCHAR *v3; // rax
  int v4; // r8d
  int v5; // ecx
  __int64 ThreadWin32Thread; // rax
  WCHAR v8[32]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (char *)gpfsTable;
  v2 = (char *)gpfsTable + 196 * gcfsTable;
  cCapString(v8, a1, 32);
  while ( 1 )
  {
    if ( v1 >= v2 )
      return 0LL;
    v3 = v8;
    do
    {
      v4 = *(WCHAR *)((char *)v3 + v1 + 64 - (char *)v8);
      v5 = *v3 - v4;
      if ( v5 )
        break;
      ++v3;
    }
    while ( v4 );
    if ( !v5 && ((v1[129] & 1) != 0 || v1[128] == v1[194]) )
    {
      if ( v1 != gpfsTable )
        break;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x400u && (*(_DWORD *)(ThreadWin32Thread + 648) & 0x400) != 0 )
        break;
    }
    v1 += 196;
  }
  return (struct _FONTSUB *)v1;
}
