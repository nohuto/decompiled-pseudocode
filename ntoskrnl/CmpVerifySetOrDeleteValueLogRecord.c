/*
 * XREFs of CmpVerifySetOrDeleteValueLogRecord @ 0x140A1C70C
 * Callers:
 *     CmpVerifyLogRecord @ 0x140A1C5E0 (CmpVerifyLogRecord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpVerifySetOrDeleteValueLogRecord(__int64 a1)
{
  unsigned int v1; // r9d
  int v2; // eax
  int v3; // r8d
  unsigned int v4; // edx
  unsigned int v5; // r8d
  unsigned int v6; // ecx

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0x50 || *(_DWORD *)(a1 + 12) == 5 && (*(_QWORD *)(a1 + 72) || *(_DWORD *)(a1 + 68)) )
    return (unsigned int)-1072103376;
  v2 = *(unsigned __int16 *)(a1 + 32);
  if ( (v2 & 1) != 0 )
    return (unsigned int)-1072103376;
  v3 = *(unsigned __int16 *)(a1 + 48);
  if ( (v3 & 1) != 0 )
    return (unsigned int)-1072103376;
  v4 = v2 + 64;
  v5 = v4 + v3;
  if ( v5 < v4 )
    return (unsigned int)-1072103376;
  v6 = v5 + *(_DWORD *)(a1 + 68);
  if ( v6 < v5 )
    return (unsigned int)-1072103376;
  else
    return v1 < v6 ? 0xC0190030 : 0;
}
