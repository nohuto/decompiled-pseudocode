/*
 * XREFs of RtlpFreeHeapInternal @ 0x1402236E4
 * Callers:
 *     RtlFreeHeap @ 0x140223680 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1405868F0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x1402238BC (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpHpVsContextFree @ 0x14034C550 (RtlpHpVsContextFree.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlpFreeHeap @ 0x14058ADC4 (RtlpFreeHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x14058B9E8 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 */

__int64 RtlpFreeHeapInternal(_DWORD *a1, unsigned __int64 a2, unsigned int a3, ...)
{
  unsigned int v3; // ebx
  unsigned int v7; // eax
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned __int16 v14; // dx
  int v15; // ecx
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // r9
  int v20; // eax
  int v21; // [rsp+38h] [rbp-28h]
  int v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+58h] [rbp-8h]
  __int64 v24; // [rsp+98h] [rbp+38h] BYREF
  va_list va; // [rsp+98h] [rbp+38h]
  va_list va1; // [rsp+A0h] [rbp+40h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  v3 = 0;
  if ( a1[4] == -857879331 )
  {
    LODWORD(v24) = 0;
    v7 = RtlpHpConvertFlagsToSegmentFlags(a3);
    return (unsigned int)RtlpHpVsContextFree((int)a1 + 64, 0, a2, a1[5] | v7, (__int64)va);
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
  if ( !v9 )
    return v3;
  if ( *(_BYTE *)(a2 - 1) != 5 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
  if ( !a1[31] )
    goto LABEL_21;
  v21 = *(_DWORD *)(v9 + 8) ^ a1[34];
  if ( HIBYTE(v21) != ((unsigned __int8)v21 ^ (unsigned __int8)(BYTE1(v21) ^ BYTE2(v21))) )
  {
LABEL_34:
    RtlpLogHeapFailure(3, (_DWORD)a1, v9, a2, 0LL, 0LL);
    return v3;
  }
  if ( a1[31] )
  {
    v12 = *(_DWORD *)(v9 + 8);
    v13 = a1[31];
    LOWORD(v22) = v12;
    if ( (v13 & v12) != 0 )
      v22 = a1[34] ^ v12;
    v14 = v22;
  }
  else
  {
LABEL_21:
    v14 = *(_WORD *)(v9 + 8);
    v13 = 0;
  }
  if ( *(_BYTE *)(v9 + 15) == 4 )
  {
    if ( v13 )
    {
      v15 = *(_DWORD *)(v9 + 8);
      LOWORD(v23) = v15;
      if ( (v15 & a1[31]) != 0 )
        v23 = a1[34] ^ v15;
      v16 = v23;
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
    goto LABEL_34;
  v18 = *(_DWORD *)(a2 - 8);
  if ( (a3 & 0x3C000102) != 0 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
  v19 = *(_BYTE *)(a2 - 16 + 15) == 5 ? a2 - 16LL * *(unsigned __int8 *)(a2 - 16 + 14) : 0LL;
  v20 = v18 && (_WORD)v18 == 1
      ? ((__int64 (__fastcall *)(_DWORD *, unsigned __int64, __int64, __int64))RtlpInterceptorRoutines)(
          a1,
          a2,
          3LL,
          v19)
      : -1073741823;
  if ( v20 >= 0 )
    return (unsigned __int8)RtlpFreeHeap(a1, a3 | 2, v9);
  return v3;
}
