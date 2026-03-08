/*
 * XREFs of CcDetermineReadPattern @ 0x14020D69C
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 * Callees:
 *     CcAreOffsetsRoughlyEqual @ 0x14020D720 (CcAreOffsetsRoughlyEqual.c)
 */

__int64 __fastcall CcDetermineReadPattern(__int64 a1, _QWORD *a2)
{
  int v4; // ecx
  char v5; // al
  __int64 v6; // r9
  unsigned int v7; // r10d
  _QWORD *v8; // r11

  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( (v4 & 0x20) != 0 )
    return 1LL;
  if ( (v4 & 0x100000) != 0 )
    return 0LL;
  v5 = CcAreOffsetsRoughlyEqual(a2, a1 + 40);
  v7 = 0;
  v8 = (_QWORD *)(v6 + 32);
  if ( v5 && (unsigned __int8)CcAreOffsetsRoughlyEqual(v6 + 24, v6 + 32) )
    return 2LL;
  if ( *a2 - *v8 == *v8 - *(_QWORD *)(v6 + 16) )
    return 3;
  return v7;
}
