/*
 * XREFs of NtGdiGetTextExtentExW @ 0x1C0112F00
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0112B88 (-GreGetTextExtentExW@@YAHPEAUHDC__@@PEAGKKPEAK2PEAUtagSIZE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        ULONG64 a5,
        char *a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r14
  __int64 v9; // r8
  _BYTE *v10; // r13
  __int64 v11; // rsi
  int v12; // r15d
  unsigned int TextExtent; // edi
  ULONG64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r9d
  struct tagSIZE *v17; // rdx
  size_t v18; // r8
  unsigned int v20; // [rsp+58h] [rbp-140h] BYREF
  unsigned int v21; // [rsp+5Ch] [rbp-13Ch]
  _BYTE *v22; // [rsp+60h] [rbp-138h]
  unsigned int v23; // [rsp+68h] [rbp-130h]
  unsigned int v24; // [rsp+70h] [rbp-128h]
  unsigned int v25; // [rsp+78h] [rbp-120h]
  _BYTE *v26; // [rsp+80h] [rbp-118h]
  HDC v27; // [rsp+88h] [rbp-110h]
  ULONG64 v28; // [rsp+90h] [rbp-108h]
  struct tagSIZE v29; // [rsp+98h] [rbp-100h] BYREF
  _DWORD *v30; // [rsp+A0h] [rbp-F8h]
  HDC v31; // [rsp+A8h] [rbp-F0h]
  char *v32; // [rsp+B0h] [rbp-E8h]
  __int64 v33; // [rsp+B8h] [rbp-E0h]
  _BYTE v34[48]; // [rsp+C0h] [rbp-D8h] BYREF
  _BYTE v35[64]; // [rsp+F0h] [rbp-A8h] BYREF
  _BYTE v36[32]; // [rsp+130h] [rbp-68h] BYREF

  v21 = a4;
  v8 = a3;
  v30 = a2;
  v27 = a1;
  v28 = a7;
  v25 = a4;
  v31 = a1;
  v24 = a3;
  v32 = a6;
  v33 = a7;
  v29 = 0LL;
  v9 = 0LL;
  v23 = 0;
  v20 = 0;
  v10 = 0LL;
  v26 = 0LL;
  v11 = 0LL;
  v22 = 0LL;
  v12 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( (_DWORD)v8 )
  {
    LOBYTE(v12) = (unsigned int)v8 <= 0x10;
    if ( a2 )
    {
      if ( (unsigned int)v8 > 0x10 )
      {
        if ( (unsigned int)v8 <= 0x682AAA )
        {
          v11 = AllocFreeTmpBuffer((unsigned int)(6 * v8));
          v22 = (_BYTE *)v11;
          a2 = v30;
        }
        v10 = (_BYTE *)(v11 + 4 * v8);
        v26 = v10;
      }
      else
      {
        v10 = v36;
        v26 = v36;
        v11 = (__int64)v35;
        v22 = v35;
      }
      if ( v11 )
      {
        v14 = (ULONG64)a2 + 2 * v8;
        if ( v14 < (unsigned __int64)a2 || v14 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v10, a2, 2 * v8);
        TextExtent = 1;
      }
      v9 = v23;
    }
    if ( !TextExtent )
      goto LABEL_37;
    v15 = SGDGetSessionState(a1);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v34, *(struct Gre::Full::SESSION_GLOBALS **)(v15 + 32));
    v16 = v21;
    if ( !a5 )
      v16 = -1;
    TextExtent = GreGetTextExtentExW(
                   v27,
                   (unsigned __int16 *)v10,
                   v8,
                   v16,
                   &v20,
                   (int *)(v11 & -(__int64)(a6 != 0LL)),
                   &v29,
                   a8,
                   9);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v34);
    v9 = v20;
  }
  else
  {
    TextExtent = 1;
  }
  if ( TextExtent )
  {
    if ( (unsigned int)v9 > (unsigned int)v8 )
      TextExtent = 0;
    if ( TextExtent )
    {
      v17 = (struct tagSIZE *)v28;
      if ( v28 >= MmUserProbeAddress )
        v17 = (struct tagSIZE *)MmUserProbeAddress;
      *v17 = v29;
      a2 = (_DWORD *)a5;
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          a2 = (_DWORD *)MmUserProbeAddress;
        *a2 = v9;
      }
      if ( (_DWORD)v9 && a6 && v11 )
      {
        v18 = 4 * v9;
        if ( (unsigned __int64)&a6[v18] > MmUserProbeAddress || &a6[v18] <= a6 || ((unsigned __int8)a6 & 3) != 0 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, (const void *)v11, v18);
      }
    }
  }
LABEL_37:
  if ( !v12 && v11 )
    FreeTmpBuffer(v11, a2, v9);
  return TextExtent;
}
