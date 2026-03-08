/*
 * XREFs of NtGdiGetTextExtent @ 0x1C02C5CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1C010F854 (-GrepGetTextExtentW@@YAHPEAUHDC__@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtent(HDC a1, const void *a2, __int64 a3, struct tagSIZE *a4, unsigned int a5)
{
  struct tagSIZE *v5; // r14
  __int64 v6; // r12
  HDC v8; // r13
  unsigned int v9; // esi
  char *v10; // rdi
  unsigned int TextExtentW; // ebx
  ULONG64 v12; // rax
  __int64 v13; // rax
  struct tagSIZE v15; // [rsp+50h] [rbp-B8h] BYREF
  HDC v16; // [rsp+58h] [rbp-B0h]
  HDC v17; // [rsp+60h] [rbp-A8h]
  struct tagSIZE *v18; // [rsp+68h] [rbp-A0h]
  _BYTE v19[48]; // [rsp+70h] [rbp-98h] BYREF
  char v20; // [rsp+A0h] [rbp-68h] BYREF

  v5 = a4;
  v6 = (int)a3;
  v8 = a1;
  v16 = a1;
  v17 = a1;
  v9 = a3;
  v18 = a4;
  v15 = 0LL;
  v10 = 0LL;
  TextExtentW = 0;
  if ( (int)a3 < 0 )
    return TextExtentW;
  if ( !(_DWORD)a3 )
  {
    TextExtentW = 1;
LABEL_21:
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (struct tagSIZE *)MmUserProbeAddress;
    *v5 = v15;
    return TextExtentW;
  }
  if ( a2 )
  {
    if ( (int)a3 > 16 )
    {
      if ( (unsigned __int64)(int)a3 <= 0x1388000 )
        v10 = (char *)AllocFreeTmpBuffer((unsigned int)(2 * a3));
    }
    else
    {
      v10 = &v20;
    }
    if ( v10 )
    {
      v12 = (ULONG64)a2 + 2 * v6;
      if ( v12 < (unsigned __int64)a2 || v12 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, a2, 2 * v6);
      TextExtentW = 1;
    }
    v8 = v16;
  }
  if ( TextExtentW )
  {
    v13 = SGDGetSessionState(a1);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v19, *(struct Gre::Full::SESSION_GLOBALS **)(v13 + 32));
    TextExtentW = GrepGetTextExtentW(v8, (unsigned __int16 *)v10, v9, &v15, a5, COERCE_FLOAT(10));
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v19);
  }
  if ( (int)v6 > 16 && v10 )
    FreeTmpBuffer(v10, a2, a3);
  if ( TextExtentW )
    goto LABEL_21;
  return TextExtentW;
}
