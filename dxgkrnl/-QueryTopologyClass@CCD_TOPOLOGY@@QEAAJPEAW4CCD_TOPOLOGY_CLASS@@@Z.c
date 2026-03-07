__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(CCD_TOPOLOGY *this, enum CCD_TOPOLOGY_CLASS *a2)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v4; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v5; // r9
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 result; // rax
  _BYTE v15[104]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+A8h] [rbp+10h] BYREF
  struct _LUID v17; // [rsp+B0h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  v17 = 0LL;
  v16 = 0;
  CCD_BTL::Global();
  BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)v15);
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v17, &v16, v4, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry4(2LL, v6, this, *((_QWORD *)this + 8), this);
    return v7;
  }
  v8 = *((_QWORD *)this + 8);
  v9 = 0;
  v10 = 0;
  v11 = *(unsigned __int16 *)(v8 + 20);
  if ( !*(_WORD *)(v8 + 20) )
    goto LABEL_23;
  while ( 1 )
  {
    v12 = 296LL * v10;
    if ( *(_DWORD *)(v12 + v8 + 72) == v17.LowPart
      && *(_DWORD *)(v12 + v8 + 76) == v17.HighPart
      && *(_DWORD *)(v12 + v8 + 84) == v16 )
    {
      break;
    }
    if ( ++v10 >= v11 )
      goto LABEL_23;
  }
  v13 = 0;
  do
  {
    if ( v13 == v10 || CCD_TOPOLOGY::IsSameCloneGroup(this, v13, v10, 0) )
      ++v9;
    ++v13;
  }
  while ( v13 < v11 );
  if ( !v9 )
  {
LABEL_23:
    *(_DWORD *)a2 = 8;
    return 0LL;
  }
  if ( v9 != 1 )
  {
    if ( v11 <= 1 )
      return 3221225473LL;
    *(_DWORD *)a2 = 2;
    return 0LL;
  }
  result = 0LL;
  if ( v11 > 1 )
    *(_DWORD *)a2 = 4;
  else
    *(_DWORD *)a2 = 1;
  return result;
}
