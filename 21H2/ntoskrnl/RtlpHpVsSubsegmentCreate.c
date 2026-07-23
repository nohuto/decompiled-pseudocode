/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x140234C34
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x140349B10 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // r14d
  unsigned int v8; // ecx
  __int64 v9; // rbp
  unsigned int v10; // r14d
  unsigned __int64 v11; // r8
  __int16 v12; // cx
  __int16 v13; // cx
  int v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v4 = (unsigned int)(2 * a2 + 72);
  v16 = 0;
  v15 = 0;
  v5 = (a2 + 4167) & 0xFFFFF000;
  v17 = 0;
  if ( ((2 * a2 + 71) & (unsigned int)v4) != 0 )
  {
    _BitScanReverse(&v8, v4);
    v17 = v8;
    v4 = (unsigned int)(1 << (v8 + 1));
  }
  if ( (unsigned int)v4 <= 0x10000 )
    v4 = 0x10000LL;
  if ( (unsigned int)v4 >= 0x40000 )
    v4 = 0x40000LL;
  while ( 1 )
  {
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int *, unsigned int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 136)))(
           a1 ^ *(_QWORD *)(a1 + 128),
           (unsigned int)v4,
           a3,
           &v15,
           &v16);
    if ( v9 )
      break;
    if ( v16 < v5 )
      goto LABEL_17;
    v4 = v16;
  }
  v10 = 4096;
  if ( (v15 & 1) != 0 )
    v10 = v4;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
         a1 ^ *(_QWORD *)(a1 + 128),
         v9,
         v10) >= 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), (unsigned __int64)v10 >> 12);
    v11 = (unsigned __int64)(v4 - 48) >> 4;
    *(_OWORD *)v9 = 0LL;
    *(_OWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_WORD *)(v9 + 32) = v11;
    v12 = 0;
    *(_QWORD *)(v9 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)((unsigned __int64)v10 >> 12));
    if ( v10 == (_DWORD)v4 )
      v12 = 0x8000;
    v13 = *(_WORD *)(v9 + 34) & 0x7FFF | v12;
    *(_WORD *)(v9 + 34) = v13;
    *(_WORD *)(v9 + 34) ^= (v11 ^ v13 ^ 0x2BED) & 0x7FFF;
    *(_OWORD *)(v9 + 48) = 0LL;
    *(_WORD *)(v9 + 52) = 0;
    v3 = v9;
    *(_WORD *)(v9 + 50) = v11;
    *(_QWORD *)(v9 + 48) ^= (v9 + 48) ^ RtlpHpHeapGlobals;
    return v3;
  }
LABEL_17:
  if ( v9 )
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
      a1 ^ *(_QWORD *)(a1 + 128),
      v9,
      (unsigned int)v4,
      a3);
  return v3;
}
