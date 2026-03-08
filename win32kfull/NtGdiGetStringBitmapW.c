/*
 * XREFs of NtGdiGetStringBitmapW @ 0x1C02A37B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02A153C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned int a4,
        volatile void *Address)
{
  unsigned __int16 *v6; // r15
  _DWORD *v8; // r14
  unsigned int StringBitmapW; // esi
  __int64 v11; // rax
  __int64 v12; // r8
  _BYTE v13[96]; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int16 v14; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+B8h] [rbp+20h]

  v15 = a4;
  v6 = a2;
  v14 = 0;
  v8 = 0LL;
  StringBitmapW = 1;
  if ( (_DWORD)a3 != 1 )
    return 0LL;
  if ( a4 )
  {
    if ( a4 > 0x2710000 || (v8 = (_DWORD *)AllocFreeTmpBuffer(a4)) == 0LL )
      StringBitmapW = 0;
  }
  if ( !StringBitmapW )
    goto LABEL_15;
  if ( (unsigned __int64)v6 >= MmUserProbeAddress )
    v6 = (unsigned __int16 *)MmUserProbeAddress;
  v14 = *v6;
  v11 = SGDGetSessionState(MmUserProbeAddress);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v13, *(struct Gre::Full::SESSION_GLOBALS **)(v11 + 32));
  StringBitmapW = GreGetStringBitmapW(a1, &v14, v12, v8, a4);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v13);
  if ( !StringBitmapW || StringBitmapW > a4 )
    goto LABEL_15;
  if ( v8 )
  {
    ProbeForWrite(Address, StringBitmapW, 1u);
    memmove((void *)Address, v8, StringBitmapW);
LABEL_15:
    if ( v8 )
      FreeTmpBuffer(v8, a2, a3);
  }
  return StringBitmapW;
}
