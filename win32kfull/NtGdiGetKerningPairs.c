__int64 __fastcall NtGdiGetKerningPairs(HDC a1, unsigned int a2, char *a3)
{
  unsigned int v6; // ebx
  const void *v7; // rdi
  __int64 v8; // rax
  unsigned int KerningPairs; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  size_t v12; // r8
  _BYTE v14[48]; // [rsp+20h] [rbp-48h] BYREF

  v6 = 0;
  v7 = 0LL;
  if ( a3 && a2 <= 0x4E2000 )
    v7 = (const void *)AllocFreeTmpBuffer(8 * a2);
  if ( !a3 || v7 )
  {
    v8 = SGDGetSessionState(a1);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v14, *(struct Gre::Full::SESSION_GLOBALS **)(v8 + 32));
    KerningPairs = GreGetKerningPairs(a1, a2, (unsigned __int64)v7, 0xFu);
    v6 = KerningPairs;
    if ( a3 )
    {
      if ( KerningPairs > a2 )
        v6 = 0;
      if ( v6 )
      {
        v12 = 8LL * v6;
        if ( (unsigned __int64)&a3[v12] > MmUserProbeAddress || &a3[v12] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v7, v12);
      }
      FreeTmpBuffer(v7, v10, v11);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v14);
  }
  return v6;
}
