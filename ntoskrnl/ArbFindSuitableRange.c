/*
 * XREFs of ArbFindSuitableRange @ 0x140823360
 * Callers:
 *     IopMemFindSuitableRange @ 0x140823220 (IopMemFindSuitableRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlFindRange @ 0x140823440 (RtlFindRange.c)
 *     ArbShareDriverExclusive @ 0x14093394C (ArbShareDriverExclusive.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v4; // r8
  __int64 v6; // r9
  int v7; // ecx
  int v8; // edx
  char v9; // r11

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 0;
  v6 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v6 + 16) )
  {
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v2;
    return 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  v7 = *(_DWORD *)(v6 + 36);
  v8 = (*(unsigned __int16 *)(a2 + 64) >> 2) & 2;
  v9 = v8 | 1;
  if ( (v7 & 1) == 0 )
    v9 = v8;
  if ( (v7 & 8) != 0 )
    *(_BYTE *)(a2 + 67) |= 0x40u;
  if ( (int)RtlFindRange(
              *(_QWORD *)(a1 + 48),
              v2,
              v4,
              *(_QWORD *)(v6 + 16),
              *(_QWORD *)(v6 + 24),
              v9,
              *(_BYTE *)(a2 + 67),
              *(_QWORD *)(a1 + 328),
              *(_QWORD *)(a1 + 336),
              a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    return 1;
  }
  if ( (unsigned __int8)ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
