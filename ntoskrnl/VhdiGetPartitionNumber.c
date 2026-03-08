/*
 * XREFs of VhdiGetPartitionNumber @ 0x140B97900
 * Callers:
 *     VhdiInitializeBootDisk @ 0x140B97B20 (VhdiInitializeBootDisk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VhdiGetPartitionNumber(int *a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r10
  unsigned int v5; // r9d
  int v6; // esi
  bool v7; // zf
  __int64 v8; // r11

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v3 = a1[1];
  v4 = 0LL;
  v5 = -1073741198;
  if ( !v3 )
    return v5;
  v6 = *a1;
  while ( 1 )
  {
    if ( !v6 )
    {
      v7 = *(_QWORD *)&a1[36 * v4 + 14] == a2[1];
      goto LABEL_12;
    }
    if ( v6 == 1 )
      break;
LABEL_13:
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return v5;
  }
  v8 = *(_QWORD *)&a1[36 * v4 + 24] - a2[6];
  if ( !v8 )
    v8 = *(_QWORD *)&a1[36 * v4 + 26] - a2[7];
  v7 = v8 == 0;
LABEL_12:
  if ( !v7 )
    goto LABEL_13;
  v5 = 0;
  *a3 = a1[36 * v4 + 18];
  return v5;
}
