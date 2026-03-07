__int64 __fastcall NtGdiGetOutlineTextMetricsInternalW(HDC a1, unsigned int a2, void *a3, unsigned __int64 a4)
{
  size_t v6; // rsi
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int OutlineTextMetricsInternalW; // r12d
  ULONG64 v13; // rax
  __int64 v15; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v16[48]; // [rsp+40h] [rbp-48h] BYREF

  v6 = a2;
  v8 = 0LL;
  v15 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 <= 0x2710000 )
      v8 = (void *)AllocFreeTmpBuffer(a2);
    if ( !v8 )
      return 0LL;
    memset_0(v8, 0, v6);
  }
  else
  {
    LODWORD(v6) = 0;
  }
  v9 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v16, *(struct Gre::Full::SESSION_GLOBALS **)(v9 + 32));
  OutlineTextMetricsInternalW = GreGetOutlineTextMetricsInternalW(a1, v6, (unsigned int *)v8, &v15);
  if ( OutlineTextMetricsInternalW == -1 )
    OutlineTextMetricsInternalW = 0;
  if ( OutlineTextMetricsInternalW )
  {
    if ( a4 + 8 > MmUserProbeAddress || a4 + 8 <= a4 || (a4 & 3) != 0 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a4 = v15;
    if ( (_DWORD)v6 )
    {
      v13 = (ULONG64)a3 + (unsigned int)v6;
      if ( v13 > MmUserProbeAddress || v13 <= (unsigned __int64)a3 || ((unsigned __int8)a3 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, v8, (unsigned int)v6);
    }
  }
  if ( v8 )
    FreeTmpBuffer(v8, v10, v11);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v16);
  return OutlineTextMetricsInternalW;
}
