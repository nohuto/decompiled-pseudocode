__int64 RtlpFreeHeapInternal(_DWORD *a1, unsigned __int64 a2, unsigned int a3, ...)
{
  unsigned int v3; // ebx
  unsigned int v7; // eax
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  unsigned __int16 v14; // dx
  int v15; // ecx
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // r9
  int v20; // [rsp+38h] [rbp-40h]
  int v21; // [rsp+48h] [rbp-30h]
  int v22; // [rsp+58h] [rbp-20h]
  __int64 v23; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v3 = 0;
  if ( a1[4] == -857879331 )
  {
    LODWORD(v23) = 0;
    v7 = RtlpHpConvertFlagsToSegmentFlags(a3);
    return (unsigned int)RtlpHpVsContextFree((__int64)(a1 + 16), 0LL, a2, a1[5] | v7, (unsigned int *)va);
  }
  if ( (a1[30] & 1) != 0 )
  {
    v9 = RtlpProbeUserBufferSafe();
  }
  else
  {
    if ( (a2 & 0xF) != 0 )
    {
      v10 = a2;
      v11 = 9;
    }
    else
    {
      v9 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
      if ( (*(_BYTE *)(v9 + 15) & 0x3F) != 0 )
        goto LABEL_13;
      v10 = v9;
      v11 = 8;
    }
    RtlpLogHeapFailure(v11, (_DWORD)a1, v10, 0, 0LL, 0LL);
    v9 = 0LL;
  }
LABEL_13:
  if ( v9 )
  {
    if ( *(_BYTE *)(a2 - 1) != 5 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
    if ( a1[31] )
    {
      v22 = a1[34] ^ *(_DWORD *)(v9 + 8);
      if ( HIBYTE(v22) != ((unsigned __int8)v22 ^ (unsigned __int8)(BYTE1(v22) ^ BYTE2(v22))) )
        goto LABEL_34;
    }
    v12 = a1[31];
    if ( v12 )
    {
      v13 = *(_DWORD *)(v9 + 8);
      v12 = a1[31];
      LOWORD(v20) = v13;
      if ( (v12 & v13) != 0 )
        v20 = a1[34] ^ v13;
      v14 = v20;
    }
    else
    {
      v14 = *(_WORD *)(v9 + 8);
    }
    if ( *(_BYTE *)(v9 + 15) == 4 )
    {
      if ( v12 )
      {
        v15 = *(_DWORD *)(v9 + 8);
        LOWORD(v21) = v15;
        if ( (v15 & a1[31]) != 0 )
          v21 = a1[34] ^ v15;
        v16 = v21;
      }
      else
      {
        v16 = *(_WORD *)(v9 + 8);
      }
      v17 = v14 + *(_QWORD *)(v9 - 16) - v16;
    }
    else
    {
      v17 = 16LL * v14;
    }
    if ( v17 + v9 < a2 )
    {
LABEL_34:
      RtlpLogHeapFailure(3, (_DWORD)a1, v9, a2, 0LL, 0LL);
      return v3;
    }
    v18 = *(_DWORD *)(a2 - 8);
    if ( (a3 & 0x3C000102) != 0 )
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
    v19 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
    if ( v18
      && (_WORD)v18 == 1
      && (int)((__int64 (__fastcall *)(_DWORD *, unsigned __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(
                a1,
                a2,
                3LL,
                v19) >= 0 )
    {
      return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
    }
  }
  return v3;
}
