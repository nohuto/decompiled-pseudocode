/*
 * XREFs of NtGdiGetCharWidthW @ 0x1C02C4C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02901F4 (-GreGetCharWidthW@@YAHPEAUHDC__@@IIPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetCharWidthW(HDC a1, unsigned int a2, __int64 a3, const void *a4, char a5, char *a6)
{
  __int64 v7; // rdi
  unsigned int CharWidthW; // r15d
  float *v10; // rsi
  void *v11; // rbx
  int v12; // r14d
  ULONG64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  size_t v18; // r8
  _BYTE v19[112]; // [rsp+58h] [rbp-70h] BYREF

  v7 = (unsigned int)a3;
  CharWidthW = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( !(_DWORD)a3 )
    return 0LL;
  if ( a4 )
  {
    v12 = 1;
    if ( (unsigned int)a3 <= 0x1388000 )
    {
      if ( 2 * (_DWORD)a3 )
        v11 = (void *)Win32AllocPool((unsigned int)(2 * a3), 1886221383LL, a3, a4);
    }
  }
  if ( !v12 || v11 )
  {
    if ( (unsigned int)v7 <= 0x9C4000 )
      v10 = (float *)AllocFreeTmpBuffer((unsigned int)(4 * v7));
    if ( v10 )
    {
      if ( v12 )
      {
        v14 = (ULONG64)a4 + 2 * v7;
        if ( v14 < (unsigned __int64)a4 || v14 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, a4, 2 * v7);
      }
      v15 = SGDGetSessionState(a1);
      EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v19, *(struct Gre::Full::SESSION_GLOBALS **)(v15 + 32));
      CharWidthW = GreGetCharWidthW(a1, a2, v7, (unsigned __int16 *)v11, a5, v10);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v19);
      if ( CharWidthW )
      {
        v18 = 4LL * (unsigned int)v7;
        if ( (unsigned __int64)&a6[v18] > MmUserProbeAddress || &a6[v18] <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v10, v18);
      }
      FreeTmpBuffer(v10, v16, v17);
    }
    if ( v12 )
      Win32FreePool(v11);
  }
  return CharWidthW;
}
