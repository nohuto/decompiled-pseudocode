__int64 __fastcall RtlpSizeHeapInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rbp
  __int64 v6; // r9
  unsigned __int8 *v8; // rcx
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  unsigned __int16 v12; // ax
  int v14; // eax
  unsigned __int16 v15; // r9
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // r8
  int v18; // eax
  unsigned __int16 v19; // ax
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+48h] [rbp-10h]

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) == -857879331 )
  {
    v5 = RtlpHpVsChunkSize(a1 + 64, a3, a3, 0LL);
    if ( v5 == -1 )
      RtlpLogHeapFailure(9, a1, v3, v6, v6 & v20, v6 & v21);
    return v5;
  }
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
  {
    v8 = RtlpProbeUserBufferSafe(a1, a3);
  }
  else
  {
    if ( (a3 & 0xF) != 0 )
    {
      v9 = 9;
    }
    else
    {
      v8 = (unsigned __int8 *)(a3 - 16);
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v8 -= 16 * v8[14];
      if ( (v8[15] & 0x3F) != 0 )
        goto LABEL_14;
      LODWORD(a3) = (_DWORD)v8;
      v9 = 8;
    }
    RtlpLogHeapFailure(v9, a1, a3, 0, 0LL, 0LL);
    v8 = 0LL;
  }
LABEL_14:
  if ( !v8 )
    return -1LL;
  v10 = *(_DWORD *)(a1 + 124);
  if ( v8[15] == 4 )
  {
    if ( v10 )
    {
      v11 = *((_DWORD *)v8 + 2);
      LOWORD(v22) = v11;
      if ( (v11 & *(_DWORD *)(a1 + 124)) != 0 )
        v22 = *(_DWORD *)(a1 + 136) ^ v11;
      v12 = v22;
    }
    else
    {
      v12 = *((_WORD *)v8 + 4);
    }
    return *((_QWORD *)v8 - 2) - v12;
  }
  else
  {
    if ( v10 )
    {
      v14 = *((_DWORD *)v8 + 2);
      v10 = *(_DWORD *)(a1 + 124);
      LOWORD(v23) = v14;
      if ( (v10 & v14) != 0 )
        v23 = *(_DWORD *)(a1 + 136) ^ v14;
      v15 = v23;
    }
    else
    {
      v15 = *((_WORD *)v8 + 4);
    }
    v16 = v8[15];
    if ( v16 == 5 )
    {
      v17 = *((unsigned __int16 *)v8 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v16 & 0x40) != 0 )
    {
      v17 = *(unsigned __int16 *)&v8[16 * (v16 & 0x3F) + 12];
    }
    else if ( (v16 & 0x3F) == 0x3F )
    {
      if ( v10 )
      {
        v18 = *((_DWORD *)v8 + 2);
        LOWORD(v24) = v18;
        if ( (v18 & *(_DWORD *)(a1 + 124)) != 0 )
          v24 = *(_DWORD *)(a1 + 136) ^ v18;
        v19 = v24;
      }
      else
      {
        v19 = *((_WORD *)v8 + 4);
      }
      v17 = *(_QWORD *)&v8[16 * v19];
    }
    else
    {
      v17 = v16 & 0x3F;
    }
    return 16LL * v15 - v17;
  }
}
