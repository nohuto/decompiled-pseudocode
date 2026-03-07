__int64 __fastcall NtGdiExtTextOutW(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        ULONG64 a5,
        __int64 a6,
        unsigned int a7,
        int *Src,
        unsigned int a9)
{
  __int16 v9; // ax
  struct tagRECT *v11; // rbx
  __int64 v12; // rcx
  int *v13; // r13
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // r14
  char *v18; // rdi
  char *v19; // rcx
  unsigned int v20; // r15d
  unsigned __int64 v21; // rdx
  char *v22; // rdi
  size_t v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v30; // rax
  char *v35; // [rsp+B0h] [rbp-178h]
  unsigned int v36; // [rsp+C8h] [rbp-160h]
  _BYTE v37[48]; // [rsp+D8h] [rbp-150h] BYREF
  struct tagRECT v38; // [rsp+108h] [rbp-120h] BYREF
  char v39; // [rsp+120h] [rbp-108h] BYREF

  v9 = a4;
  v11 = (struct tagRECT *)a5;
  v12 = a6;
  v13 = Src;
  v38 = 0LL;
  if ( a7 > 0xFFFF )
    return 0LL;
  if ( a5 )
  {
    if ( (a4 & 6) != 0 )
    {
      if ( a5 >= MmUserProbeAddress )
        v11 = (struct tagRECT *)MmUserProbeAddress;
      v38 = *v11;
      v11 = &v38;
      v9 = a4;
      v12 = a6;
    }
    else
    {
      v11 = 0LL;
    }
  }
  if ( !a7 )
  {
    if ( v11 && (v9 & 2) != 0 )
    {
      v30 = SGDGetSessionState(v12);
      EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v37, *(struct Gre::Full::SESSION_GLOBALS **)(v30 + 32));
      v26 = GreExtTextOutRect(a1, v11);
      EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v37);
    }
    else
    {
      return 1;
    }
    return v26;
  }
  if ( (v9 & 6) != 0 && !v11 || !v12 )
    return 0;
  v14 = 0;
  v15 = (30 * a7 + 7) & 0xFFFFFFF8;
  if ( Src )
  {
    v14 = 4 * a7;
    if ( (v9 & 0x2000) != 0 )
      v14 = 8 * a7;
  }
  v36 = v14 + 7;
  v16 = v15 + 2 * a7 + ((v14 + 7) & 0xFFFFFFF8);
  if ( (unsigned int)v16 <= 0xC0 )
  {
    v17 = 0LL;
    v18 = &v39;
LABEL_16:
    if ( Src )
    {
      if ( v14 )
      {
        v19 = (char *)&Src[v14 / 4];
        if ( (unsigned __int64)v19 > MmUserProbeAddress || v19 < (char *)Src )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v18, Src, v14);
      v20 = a4;
      v21 = a6;
      v13 = (int *)v18;
      v18 += v36 & 0xFFFFFFF8;
    }
    else
    {
      v20 = a4;
      v21 = a6;
    }
    v35 = v18;
    v22 = &v18[v15];
    v23 = 2LL * (int)a7;
    if ( v23 )
    {
      if ( (v21 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v23 + v21 > MmUserProbeAddress || v23 + v21 < v21 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v22, (const void *)v21, v23);
    v25 = SGDGetSessionState(v24);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v37, *(struct Gre::Full::SESSION_GLOBALS **)(v25 + 32));
    v26 = GreExtTextOutWInternal(a1, a2, a3, v20, v11, (unsigned __int16 *)v22, a7, v13, v35, a9, 24);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v37);
    if ( v17 )
      FreeTmpBuffer(v17, v27, v28);
    return v26;
  }
  v17 = AllocFreeTmpBuffer(v16);
  v18 = (char *)v17;
  if ( v17 )
    goto LABEL_16;
  return 0LL;
}
