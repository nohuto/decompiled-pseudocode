__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2)
{
  int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // r8d
  __int64 v12; // rax
  unsigned int v13; // r9d
  const struct _LUID *v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned int i; // r10d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v24, 96);
  v4 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, a2, 0);
  if ( v4 >= 0 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( *(_WORD *)(v6 + 20) )
    {
      do
      {
        if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(296LL * v5 + v6 + 188)) - 1) & 0xFFFFFFFD) != 0 )
        {
          v8 = *(_DWORD *)(v7 + v6 + 152);
          v9 = v8;
          v10 = *(_DWORD *)(v7 + v6 + 156);
        }
        else
        {
          v10 = *(_DWORD *)(v7 + v6 + 152);
          v9 = v10;
          v8 = *(_DWORD *)(v7 + v6 + 156);
        }
        v11 = *(_DWORD *)(v7 + v6 + 156);
        *(_DWORD *)(v7 + v6 + 212) = v8;
        *(_DWORD *)(v7 + v6 + 208) = v10;
        v12 = *(_QWORD *)(v7 + v6 + 56) | 0x820000LL;
        *(_QWORD *)(v7 + v6 + 224) = 0LL;
        *(_DWORD *)(v7 + v6 + 232) = v9;
        *(_DWORD *)(v7 + v6 + 236) = v11;
        *(_QWORD *)(v7 + v6 + 56) = v12;
        if ( (v12 & 0x4000000000000LL) == 0 )
        {
          v13 = v5;
          if ( v5 < *(unsigned __int16 *)(v6 + 20) )
          {
            v14 = (const struct _LUID *)(v7 + v6 + 72);
            do
            {
              v15 = 296LL * v13;
              if ( CCD_TOPOLOGY::IsMatchingSource(
                     (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v15 + v6 + 56),
                     v14,
                     *(_DWORD *)(v7 + v6 + 80)) )
              {
                *v16 |= 0x4000000000000uLL;
                *(_DWORD *)(v15 + v6 + 240) = v5 | 0xFE570000;
              }
              v13 = v17 + 1;
            }
            while ( v13 < *(unsigned __int16 *)(v6 + 20) );
          }
        }
        ++v5;
      }
      while ( v5 < *(unsigned __int16 *)(v6 + 20) );
    }
    v4 = 0;
  }
  v18 = v24;
  if ( v24 )
  {
    v19 = *(_QWORD *)(v24 + 64);
    for ( i = 0; i < *(unsigned __int16 *)(v19 + 20); v19 = *(_QWORD *)(v18 + 64) )
    {
      v21 = i++;
      v22 = 296 * v21;
      *(_OWORD *)(v22 + v19 + 312) = 0LL;
      *(_OWORD *)(v22 + v19 + 328) = 0LL;
      *(_QWORD *)(v22 + v19 + 344) = 0LL;
    }
    *(_DWORD *)(v18 + 88) = 0;
  }
  return (unsigned int)v4;
}
