/*
 * XREFs of RtlpMuiRegFreeRegistryInfo @ 0x1408447E8
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14039C764 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140843F90 (RtlpMuiRegLoadRegistryInfo.c)
 *     _RtlpMuiRegLoadInstalled @ 0x140844000 (_RtlpMuiRegLoadInstalled.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1408447E8 (RtlpMuiRegFreeRegistryInfo.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x1408447E8 (RtlpMuiRegFreeRegistryInfo.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpMuiRegFreeRegistryInfo(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  void *v22; // rcx

  v2 = 0;
  if ( a1 && a2 )
  {
    v4 = 4095;
    if ( (a2 & 0x400) == 0 )
      v4 = a2;
    if ( (v4 & 1) != 0 )
    {
      v5 = *(void **)(a1 + 24);
      if ( v5 )
      {
        if ( (*(_DWORD *)a1 & 1) != 0 )
          ExFreePoolWithTag(v5, 0);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
      *(_DWORD *)a1 &= ~1u;
    }
    if ( (v4 & 2) != 0 )
    {
      v6 = *(void **)(a1 + 32);
      if ( v6 )
      {
        if ( (*(_DWORD *)a1 & 2) != 0 )
          ExFreePoolWithTag(v6, 0);
        *(_QWORD *)(a1 + 32) = 0LL;
      }
      *(_DWORD *)a1 &= ~2u;
    }
    if ( (v4 & 4) != 0 )
    {
      v7 = *(void **)(a1 + 40);
      if ( v7 )
      {
        if ( (*(_DWORD *)a1 & 4) != 0 )
          ExFreePoolWithTag(v7, 0);
        *(_QWORD *)(a1 + 40) = 0LL;
      }
      *(_DWORD *)a1 &= ~4u;
    }
    if ( (v4 & 8) != 0 )
    {
      v8 = *(void **)(a1 + 48);
      if ( v8 )
      {
        if ( (*(_DWORD *)a1 & 8) != 0 )
          ExFreePoolWithTag(v8, 0);
        *(_QWORD *)(a1 + 48) = 0LL;
      }
      *(_DWORD *)a1 &= ~8u;
    }
    if ( (v4 & 0x10) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 56);
      if ( v9 )
      {
        if ( (*(_DWORD *)a1 & 0x10) != 0 )
        {
          *(_DWORD *)(v9 + 40) &= ~0x40u;
          v17 = *(_DWORD **)(a1 + 56);
          if ( v17 )
          {
            if ( (v17[10] & 0x40) == 0 )
              ExFreePoolWithTag(v17, 0);
          }
        }
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x10u;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        if ( (*(_DWORD *)a1 & 0x20) != 0 )
        {
          *(_DWORD *)(v10 + 40) &= ~0x40u;
          v18 = *(_DWORD **)(a1 + 64);
          if ( v18 )
          {
            if ( (v18[10] & 0x40) == 0 )
              ExFreePoolWithTag(v18, 0);
          }
        }
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x20u;
    }
    if ( (v4 & 0x40) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 88);
      if ( v11 )
      {
        if ( (*(_DWORD *)a1 & 0x40) != 0 )
        {
          *(_DWORD *)(v11 + 40) &= ~0x40u;
          v19 = *(_DWORD **)(a1 + 88);
          if ( v19 )
          {
            if ( (v19[10] & 0x40) == 0 )
              ExFreePoolWithTag(v19, 0);
          }
        }
        *(_QWORD *)(a1 + 88) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x40u;
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 80);
      if ( v12 )
      {
        if ( (*(_DWORD *)a1 & 0x80u) != 0 )
        {
          *(_DWORD *)(v12 + 40) &= ~0x40u;
          v20 = *(_DWORD **)(a1 + 80);
          if ( v20 )
          {
            if ( (v20[10] & 0x40) == 0 )
              ExFreePoolWithTag(v20, 0);
          }
        }
        *(_QWORD *)(a1 + 80) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x80u;
    }
    if ( (v4 & 0x200) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 96);
      if ( v13 )
      {
        if ( _bittest((const signed __int32 *)a1, 9u) )
        {
          *(_DWORD *)(v13 + 40) &= ~0x40u;
          v21 = *(_DWORD **)(a1 + 96);
          if ( v21 )
          {
            if ( (v21[10] & 0x40) == 0 )
              ExFreePoolWithTag(v21, 0);
          }
        }
        *(_QWORD *)(a1 + 96) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x200u;
    }
    if ( (v4 & 0x800) != 0 )
    {
      v16 = *(void **)(a1 + 136);
      if ( v16 )
      {
        if ( _bittest((const signed __int32 *)a1, 0xBu) )
          ExFreePoolWithTag(v16, 0);
        *(_QWORD *)(a1 + 136) = 0LL;
      }
      *(_DWORD *)a1 &= ~0x800u;
    }
    if ( (v4 & 0xFFF) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 104);
      if ( v14 )
      {
        RtlpMuiRegFreeRegistryInfo(v14, v4);
        v22 = *(void **)(a1 + 104);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        *(_QWORD *)(a1 + 104) = 0LL;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
