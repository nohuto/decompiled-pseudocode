/*
 * XREFs of RtlLengthCurrentClearRunForwardEx @ 0x1405A6640
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1403096E0 (RtlCSparseBitmapFindBitSetCapped.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForwardEx(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  char v10; // r9
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  char v14; // r9

  v2 = a1[1];
  v3 = (unsigned int *)(v2 + 4 * (a2 >> 5));
  v4 = *a1 & 0x1FLL;
  v5 = (unsigned __int64)(*a1 - 1LL) >> 5;
  v6 = v2 + 4 * v5 - 4;
  if ( !v4 )
    v6 = v2 + 4 * v5;
  v7 = a2 & 0x1F;
  v8 = 0LL;
  v9 = *v3 & ~*((_DWORD *)qword_140016150 + v7);
  if ( (unsigned __int64)v3 <= v6 )
  {
    while ( !(_DWORD)v9 )
    {
      v8 += 32LL;
      if ( v8 == -1 && v7 == 0 )
        return v8 - v7;
      if ( v3 == (unsigned int *)v6 )
        goto LABEL_4;
      v9 = *++v3;
    }
    v11 = !_BitScanForward64((unsigned __int64 *)&v13, v9);
    v14 = -1;
    if ( !v11 )
      v14 = v13;
    v12 = (unsigned int)v14;
    goto LABEL_18;
  }
LABEL_4:
  if ( v4 )
  {
    if ( v8 )
      LODWORD(v9) = v3[1];
    v10 = -1;
    v11 = !_BitScanForward64(&v9, (unsigned int)v9 | ~*((_DWORD *)qword_140016150 + v4));
    if ( !v11 )
      v10 = v9;
    v12 = (unsigned int)v10;
LABEL_18:
    v8 += v12;
  }
  return v8 - v7;
}
