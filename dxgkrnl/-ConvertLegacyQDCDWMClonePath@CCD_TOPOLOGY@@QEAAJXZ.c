__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // r14d
  DXGADAPTERSOURCEHASH *i; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v8; // rbx
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  const struct _LUID *v12; // r12
  const struct _LUID *v13; // r13
  unsigned int v14; // r14d
  unsigned int j; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rax
  __int64 LowPart; // rdx
  __int64 v18; // r13
  unsigned int v19; // ecx
  int PreferredVidPnSourceList; // eax
  __int64 v21; // r15
  unsigned int k; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rax
  unsigned int v29; // r12d
  int AdapterAndSourceForHash; // r13d
  unsigned int v31; // [rsp+58h] [rbp-69h] BYREF
  struct _LUID v32; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v33[16]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v34[16]; // [rsp+A8h] [rbp-19h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v5 = 0;
  for ( i = (struct DXGGLOBAL *)((char *)Global + 1384); v5 < *(unsigned __int16 *)(v3 + 20); ++v5 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v5);
    v8 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      v9 = *((_DWORD *)PathDescriptor + 7);
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i) & v9) != 0 )
      {
        v32 = 0LL;
        v31 = 0;
        v29 = v9 >> DXGADAPTERSOURCEHASH::GetHashBitShift(i);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(i, v29, &v32, &v31);
        if ( AdapterAndSourceForHash < 0 )
        {
          WdLogSingleEntry1(2LL, v29);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed info for hash (0x%lx)",
            v29,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v8[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i);
        v8[3].LowPart = v31;
        v8[2] = v32;
      }
    }
    else
    {
      *(_QWORD *)PathDescriptor &= 0xFFFFFFFFFF7DFFFFuLL;
      *((_QWORD *)PathDescriptor + 1) &= 0xFFFFFFFFFF7DFFFFuLL;
    }
    v3 = *((_QWORD *)this + 8);
  }
  v10 = 0;
  if ( !*(_WORD *)(v3 + 20) )
    return 0LL;
  while ( 1 )
  {
    v11 = CCD_TOPOLOGY::GetPathDescriptor(this, v10);
    v12 = (const struct _LUID *)v11;
    if ( (*(_QWORD *)v11 & 0x4000000000000LL) != 0 )
      break;
LABEL_23:
    v26 = *((_QWORD *)this + 8);
    if ( ++v10 >= *(unsigned __int16 *)(v26 + 20) )
    {
      if ( *(_WORD *)(v26 + 20) )
      {
        do
        {
          v27 = CCD_TOPOLOGY::GetPathDescriptor(this, v4++);
          *(_QWORD *)v27 |= 0x4000000000000uLL;
        }
        while ( v4 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
      }
      return 0LL;
    }
  }
  v13 = (const struct _LUID *)((char *)v11 + 16);
  v14 = 0;
  for ( j = v10; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
  {
    v16 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    LowPart = v13->LowPart;
    if ( __PAIR64__(v12[2].HighPart, LowPart) == *((_QWORD *)v16 + 2) )
    {
      v18 = v14;
      if ( v14 >= 0x10 )
      {
        WdLogSingleEntry4(2LL, v14, v12[2].HighPart, LowPart, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Total paths (0x%I64x) from adapter 0x%I64x%08I64x is larger than D3DKMDT_MAX_VIDPN_SOURCES, returning 0x%I64x.",
          v14,
          v12[2].HighPart,
          v12[2].LowPart,
          -1073741811LL,
          0LL);
        return 3221225485LL;
      }
      if ( *((_BYTE *)v16 + 129) )
        v19 = -1;
      else
        v19 = *((_DWORD *)v16 + 6);
      v34[v14++] = v19;
      v33[v18] = *((_DWORD *)v16 + 7);
      v13 = v12 + 2;
    }
  }
  PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList(v13, v14, v33, v34);
  v21 = PreferredVidPnSourceList;
  if ( PreferredVidPnSourceList >= 0 )
  {
    for ( k = v10; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
    {
      v23 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
      v24 = v23;
      if ( v13->LowPart == *((_DWORD *)v23 + 4) && v12[2].HighPart == *((_DWORD *)v23 + 5) )
      {
        v25 = 0;
        if ( v14 )
        {
          while ( v33[v25] != *((_DWORD *)v24 + 7) )
          {
            if ( ++v25 >= v14 )
              goto LABEL_21;
          }
          *((_DWORD *)v24 + 6) = v34[v25];
        }
LABEL_21:
        *(_QWORD *)v24 &= ~0x4000000000000uLL;
      }
    }
    goto LABEL_23;
  }
  WdLogSingleEntry3(2LL, v12[2].HighPart, v13->LowPart, PreferredVidPnSourceList);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get the preferred VidPn source list for adapter 0x%I64x%08I64x, Status = 0x%I64x",
    v12[2].HighPart,
    v13->LowPart,
    v21,
    0LL,
    0LL);
  return (unsigned int)v21;
}
