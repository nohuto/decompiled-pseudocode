/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x1402498A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x1402499A0 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v4; // r10d
  __int64 v5; // r9
  char v8; // r11
  char v9; // r8
  unsigned __int64 v10; // rdx
  char v11; // al
  char v12; // cl

  v3 = *(_QWORD *)a1;
  v4 = a1;
  v5 = a2 & *(_QWORD *)a1;
  if ( (a1 ^ v5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v5 + 0x10)) != 0xA2E64EADA2E64EADuLL )
  {
    v9 = *(_BYTE *)(a1 + 8);
    goto LABEL_9;
  }
  v8 = *(_BYTE *)(a1 + 8);
  v9 = v8;
  v10 = v5 + 32 * ((unsigned __int64)(unsigned int)(a2 - v5) >> v8);
  if ( !v10 )
    goto LABEL_9;
  v11 = *(_BYTE *)(v10 + 24);
  if ( (v11 & 1) == 0 )
    goto LABEL_9;
  if ( (v11 & 2) == 0 )
  {
    v10 -= 32LL * *(unsigned __int8 *)(v10 + 31);
    v12 = *(_BYTE *)(v10 + 24);
    if ( (v12 & 3) == 3 && (v12 & 0xCu) >= 8 )
      return RtlpHpSegPageRangeCommit(
               v4,
               v10,
               ((_DWORD)a2
              - (unsigned int)((__int64)(v10 - (v10 & v3)) >> 5 << v9)
              - ((unsigned int)v10 & (unsigned int)v3)) >> 12,
               a3 >> 12,
               0,
               0LL);
    v9 = v8;
LABEL_9:
    v10 = 0LL;
    return RtlpHpSegPageRangeCommit(
             v4,
             v10,
             ((_DWORD)a2
            - (unsigned int)((__int64)(v10 - (v10 & v3)) >> 5 << v9)
            - ((unsigned int)v10 & (unsigned int)v3)) >> 12,
             a3 >> 12,
             0,
             0LL);
  }
  if ( (v11 & 0xCu) < 8 && (((1 << v8) - 1) & a2) != 0 )
    goto LABEL_9;
  return RtlpHpSegPageRangeCommit(
           v4,
           v10,
           ((_DWORD)a2 - (unsigned int)((__int64)(v10 - (v10 & v3)) >> 5 << v9) - ((unsigned int)v10 & (unsigned int)v3)) >> 12,
           a3 >> 12,
           0,
           0LL);
}
