/*
 * XREFs of IopPortFindSuitableRange @ 0x140823150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlFindRange @ 0x140823440 (RtlFindRange.c)
 */

char __fastcall IopPortFindSuitableRange(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  char v3; // r9
  __int64 v6; // r11
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8

  v2 = a2[5];
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 16);
  if ( !v6 )
  {
    a2[1] = *a2;
    return 1;
  }
  v7 = a2[4];
  if ( (*(_DWORD *)(v7 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v7 + 44) & 1) != 0 )
    v3 = 1;
  v8 = a2[2];
  v9 = a2[3];
  if ( v8 <= v9
    && ((int)RtlFindRange(
               *(_QWORD *)(a1 + 48),
               v8,
               v9,
               v6,
               *(_QWORD *)(v2 + 24),
               *(_DWORD *)(v2 + 36) & 1,
               v3,
               *(_QWORD *)(a1 + 328),
               *(_QWORD *)(a1 + 336),
               (__int64)a2) >= 0
     || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(a1 + 272))(a1, a2)) )
  {
    a2[1] = *a2 - 1LL + *(_QWORD *)(a2[5] + 16LL);
    return 1;
  }
  return 0;
}
