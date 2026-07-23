/*
 * XREFs of RtlpSizeHeapInternal @ 0x14058BC88
 * Callers:
 *     RtlSizeHeap @ 0x140586830 (RtlSizeHeap.c)
 * Callees:
 *     RtlpProbeUserBufferSafe @ 0x14058B9E8 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkSize @ 0x140595964 (RtlpHpVsChunkSize.c)
 */

__int64 __fastcall RtlpSizeHeapInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // r9
  __int64 v6; // r14
  unsigned __int8 *v8; // rcx
  int v9; // ecx
  unsigned __int8 v10; // dl
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // ax
  int v15; // eax
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // r8
  int v18; // eax
  unsigned __int16 v19; // ax
  __int64 v20; // [rsp+20h] [rbp-40h]
  __int64 v21; // [rsp+28h] [rbp-38h]
  int v22; // [rsp+38h] [rbp-28h]
  int v23; // [rsp+48h] [rbp-18h]
  int v24; // [rsp+58h] [rbp-8h]

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) == -857879331 )
  {
    v6 = RtlpHpVsChunkSize(a1 + 64, a3, a3, 0LL);
    if ( v6 == -1 )
      RtlpLogHeapFailure(9, a1, v3, v5, v5 & v20, v5 & v21);
    return v6;
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
  v10 = v8[15];
  v11 = *(_DWORD *)(a1 + 124);
  if ( v10 == 4 )
  {
    if ( v11 )
    {
      v12 = *((_DWORD *)v8 + 2);
      LOWORD(v22) = v12;
      if ( (v12 & *(_DWORD *)(a1 + 124)) != 0 )
        v22 = *(_DWORD *)(a1 + 136) ^ v12;
      v13 = v22;
    }
    else
    {
      v13 = *((_WORD *)v8 + 4);
    }
    return *((_QWORD *)v8 - 2) - v13;
  }
  else
  {
    if ( v11 )
    {
      v15 = *((_DWORD *)v8 + 2);
      v11 = *(_DWORD *)(a1 + 124);
      LOWORD(v23) = v15;
      if ( (v11 & v15) != 0 )
        v23 = *(_DWORD *)(a1 + 136) ^ v15;
      v16 = v23;
      v10 = v8[15];
    }
    else
    {
      v16 = *((_WORD *)v8 + 4);
    }
    if ( v10 == 5 )
    {
      v17 = *((unsigned __int16 *)v8 + 6) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v10 & 0x40) != 0 )
    {
      v17 = *(unsigned __int16 *)&v8[16 * (v10 & 0x3F) + 12];
    }
    else if ( (v10 & 0x3F) == 0x3F )
    {
      if ( v11 )
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
      v17 = v10 & 0x3F;
    }
    return 16LL * v16 - v17;
  }
}
