/*
 * XREFs of RtlpHpVsSubsegmentCreate @ 0x1402DD684
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x14024A790 (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCreate(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v4; // r14d
  unsigned int v5; // edx
  unsigned int v6; // r14d
  unsigned int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned int v13; // r14d
  unsigned __int64 v14; // r8
  __int16 v15; // cx
  __int16 v16; // cx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v4 = a2 + 4167;
  v5 = 2 * a2 + 72;
  v19 = 0;
  v18 = 0;
  v6 = v4 & 0xFFFFF000;
  v20 = 0;
  if ( ((v5 - 1) & v5) != 0 )
  {
    _BitScanReverse(&v9, v5);
    v20 = v9;
    v5 = 1 << (v9 + 1);
  }
  v10 = 0x10000LL;
  if ( v5 > 0x10000 )
  {
    v10 = v5;
    if ( v5 >= 0x40000 )
      v10 = 0x40000LL;
  }
  while ( 1 )
  {
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, int *, unsigned int *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 136)))(
            *(_QWORD *)(a1 + 128) ^ a1,
            (unsigned int)v10,
            a3,
            &v18,
            &v19);
    v12 = v11;
    if ( v11 )
      break;
    v10 = v19;
    if ( v19 < v6 )
      return v3;
  }
  v13 = 4096;
  if ( (v18 & 1) != 0 )
    v13 = v10;
  if ( ((int (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
         *(_QWORD *)(a1 + 128) ^ a1,
         v11,
         v13) < 0 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 144)))(
      *(_QWORD *)(a1 + 128) ^ a1,
      v12,
      (unsigned int)v10,
      a3);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), (unsigned __int64)v13 >> 12);
    v14 = (unsigned __int64)(v10 - 48) >> 4;
    *(_OWORD *)v12 = 0LL;
    *(_OWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_WORD *)(v12 + 32) = v14;
    v15 = 0;
    *(_QWORD *)(v12 + 16) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)((unsigned __int64)v13 >> 12));
    if ( v13 == (_DWORD)v10 )
      v15 = 0x8000;
    v16 = *(_WORD *)(v12 + 34) & 0x7FFF | v15;
    *(_WORD *)(v12 + 34) = v16;
    *(_WORD *)(v12 + 34) ^= (v16 ^ v14 ^ 0x2BED) & 0x7FFF;
    *(_OWORD *)(v12 + 48) = 0LL;
    *(_WORD *)(v12 + 52) = 0;
    v3 = v12;
    *(_WORD *)(v12 + 50) = v14;
    *(_QWORD *)(v12 + 48) ^= RtlpHpHeapGlobals ^ (v12 + 48);
  }
  return v3;
}
