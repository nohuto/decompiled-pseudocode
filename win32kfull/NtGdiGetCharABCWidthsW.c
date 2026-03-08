/*
 * XREFs of NtGdiGetCharABCWidthsW @ 0x1C0111840
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     ?GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0121B00 (-GreGetCharABCWidthsW@@YAHPEAUHDC__@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtGdiGetCharABCWidthsW(__int64 a1, unsigned int a2, __int64 a3, const void *a4, int a5, char *a6)
{
  __int64 v6; // r14
  unsigned int CharABCWidthsW; // r13d
  const void *v8; // rdi
  void *v9; // rbx
  int v10; // r15d
  unsigned int v11; // esi
  __int64 v12; // rax
  char *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG64 v17; // rcx
  _BYTE v18[104]; // [rsp+60h] [rbp-68h] BYREF

  v6 = (unsigned int)a3;
  CharABCWidthsW = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  if ( !a6 )
    return 0LL;
  if ( a4 )
  {
    v10 = 1;
    if ( (unsigned int)(a3 - 1) <= 0x1387FFF )
    {
      if ( 2 * (_DWORD)a3 )
        v9 = (void *)Win32AllocPool((unsigned int)(2 * a3), 1886221383LL, a3, a4);
    }
  }
  if ( !v10 || v9 )
  {
    if ( (unsigned int)v6 <= 0x341555 )
    {
      v11 = 12 * v6;
      v8 = (const void *)AllocFreeTmpBuffer((unsigned int)(12 * v6));
    }
    if ( v8 )
    {
      if ( v10 )
      {
        v17 = (ULONG64)a4 + 2 * v6;
        if ( v17 < (unsigned __int64)a4 || v17 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, a4, 2 * v6);
      }
      v12 = SGDGetSessionState(a1);
      EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v18, *(struct Gre::Full::SESSION_GLOBALS **)(v12 + 32));
      CharABCWidthsW = GreGetCharABCWidthsW(a1, a2, (unsigned int)v6, v9, a5, v8);
      if ( CharABCWidthsW )
      {
        v13 = &a6[v11];
        if ( (unsigned __int64)v13 > MmUserProbeAddress || v13 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v8, v11);
      }
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v18);
      FreeTmpBuffer(v8, v14, v15);
    }
    if ( v10 )
    {
      if ( v9 )
        Win32FreePool(v9);
    }
  }
  return CharABCWidthsW;
}
