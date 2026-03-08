/*
 * XREFs of NtGdiGetEmbUFI @ 0x1C02C54D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0278A2C (-GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint.c)
 */

__int64 __fastcall NtGdiGetEmbUFI(HDC a1, _QWORD *a2, char *a3, _BYTE *a4, _BYTE *a5, ULONG64 a6, _QWORD *a7)
{
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int UFI; // esi
  _DWORD *v14; // rcx
  unsigned __int64 *v15; // rbx
  char v16; // dl
  int v17; // r14d
  size_t v18; // r8
  char *v19; // rax
  _BYTE *v20; // rcx
  int v22; // [rsp+40h] [rbp-D8h] BYREF
  size_t Size; // [rsp+44h] [rbp-D4h] BYREF
  __int64 v24; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v26[48]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE Src[80]; // [rsp+90h] [rbp-88h] BYREF

  v24 = 0LL;
  v22 = 0;
  memset_0(Src, 0, 0x48uLL);
  Size = 0LL;
  v25 = 0LL;
  v12 = SGDGetSessionState(v11);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v26, *(struct Gre::Full::SESSION_GLOBALS **)(v12 + 32));
  UFI = GreGetUFI(a1, &v24, Src, &Size, (_DWORD *)&Size + 1, (Gre::Base *)&v22, &v25, 28);
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v24;
    v14 = (_DWORD *)a6;
    v15 = (unsigned __int64 *)MmUserProbeAddress;
    if ( a6 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    v16 = v22;
    *v14 = v22;
    if ( (unsigned __int64)(a7 + 1) > MmUserProbeAddress || a7 + 1 <= a7 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v15 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *a7 = v25;
    if ( (v16 & 2) != 0 && a3 )
    {
      v17 = Size;
      v18 = (unsigned int)Size;
      v19 = &a3[(unsigned int)Size];
      if ( (unsigned __int64)v19 > *v15 || v19 <= a3 )
      {
        *(_BYTE *)*v15 = 0;
        v15 = (unsigned __int64 *)MmUserProbeAddress;
      }
      memmove(a3, Src, v18);
      if ( (unsigned __int64)a4 >= *v15 )
        a4 = (_BYTE *)*v15;
      *(_DWORD *)a4 = v17;
      v20 = a5;
      if ( (unsigned __int64)a5 >= *v15 )
        v20 = (_BYTE *)*v15;
      *(_DWORD *)v20 = HIDWORD(Size);
    }
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v26);
  return UFI;
}
