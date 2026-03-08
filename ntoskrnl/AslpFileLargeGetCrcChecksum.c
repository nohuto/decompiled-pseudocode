/*
 * XREFs of AslpFileLargeGetCrcChecksum @ 0x140A56C1C
 * Callers:
 *     AslpFileLargeGetChecksumAttributes @ 0x140A56B28 (AslpFileLargeGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslComputeCrc32 @ 0x140A513EC (AslComputeCrc32.c)
 */

__int64 __fastcall AslpFileLargeGetCrcChecksum(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  int v7; // eax
  unsigned int v8; // r8d
  _BYTE *v9; // r11

  *a1 = 0;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( v4 < 0x100000 )
    return 3221225485LL;
  if ( !a2[6] )
    return 3221225485LL;
  v5 = a2[7];
  if ( v5 < 0x1000 || !a2[2] || a2[3] < 0x1000uLL || a2[4] )
    return 3221225485LL;
  if ( v4 - a2[8] <= v5 )
  {
    v7 = AslComputeCrc32(0, (_BYTE *)a2[2], 0x1000u);
    *a1 = AslComputeCrc32(v7, v9, v8);
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(1LL);
    return 3221226016LL;
  }
}
