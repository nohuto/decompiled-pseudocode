/*
 * XREFs of RtlFindNextForwardRunClearEx @ 0x14045B7C0
 * Callers:
 *     MmQueryMemoryRanges @ 0x140859AF0 (MmQueryMemoryRanges.c)
 *     MiDeleteAweInfoPages @ 0x140A3EE20 (MiDeleteAweInfoPages.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A98F10 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A990E0 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearEx(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 *v8; // r8
  _QWORD *v9; // rax
  __int64 i; // r11
  unsigned __int64 v11; // r11
  __int64 v12; // rcx
  unsigned __int64 j; // rax
  unsigned __int64 *v14; // rax
  __int64 v15; // r9
  __int64 v16; // r8

  v3 = *a1;
  v4 = 0LL;
  if ( *a1 > a2 )
  {
    v6 = a1[1];
    v7 = v6 + 8 * ((v3 - 1) >> 6);
    v8 = (__int64 *)(v6 + 8 * (a2 >> 6));
    v9 = v8 + 1;
    for ( i = ((1LL << (a2 & 0x3F)) - 1) | *v8; ; i = *v8 )
    {
      v11 = ~i;
      if ( v11 )
        break;
      if ( (unsigned __int64)v9 > v7 )
        goto LABEL_7;
      ++v8;
      ++v9;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v11);
    a2 = (unsigned int)v12 + ((__int64)((__int64)v8 - v6) >> 3 << 6);
    if ( a2 > v3 )
    {
LABEL_7:
      a2 = v3;
      goto LABEL_17;
    }
    for ( j = ~(v11 | ((1LL << v12) - 1)); !j; j = *v14 )
    {
      v14 = (unsigned __int64 *)(v8 + 1);
      if ( (unsigned __int64)(v8 + 1) > v7 )
      {
        LODWORD(j) = 64;
        goto LABEL_14;
      }
      ++v8;
    }
    _BitScanForward64(&j, j);
LABEL_14:
    v15 = v3;
    v16 = (__int64)((__int64)v8 - v6) >> 3 << 6;
    if ( v16 + (unsigned __int64)(unsigned int)j <= v3 )
      v15 = v16 + (unsigned int)j;
    v4 = v15 - a2;
  }
LABEL_17:
  *a3 = a2;
  return v4;
}
