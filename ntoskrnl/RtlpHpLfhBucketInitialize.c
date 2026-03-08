/*
 * XREFs of RtlpHpLfhBucketInitialize @ 0x1402F5EC0
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x1402F5F3C (RtlpHpLfhBucketActivate.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x1402F6104 (RtlpHpLfhOwnerInitialize.c)
 */

int __fastcall RtlpHpLfhBucketInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // rax

  RtlpHpLfhOwnerInitialize(a1, a2, 0xFFFFFFFFLL, a3);
  if ( *(_BYTE *)(v4 + 57) == (_BYTE)v6 )
    *(_QWORD *)(v3 + 80) = v6;
  else
    *(_QWORD *)(v3 + 80) = 0LL;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(v3 + 1)];
  if ( (((_DWORD)v7 - 1) & (unsigned int)v7) != 0 )
  {
    v8 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(v3 + 1)];
    _BitScanForward(&v9, *(unsigned __int16 *)(v4 + 60));
    LOBYTE(v9) = v9 + 18;
    *(_BYTE *)(v5 + 76) = v9;
    v10 = (v7 - 1 + (1LL << v9)) / v8;
    *(_DWORD *)(v5 + 72) = v10;
  }
  else
  {
    _BitScanForward((unsigned int *)&v10, v7);
    *(_BYTE *)(v5 + 76) = v10;
  }
  return v10;
}
