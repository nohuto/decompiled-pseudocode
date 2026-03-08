/*
 * XREFs of RtlpHpVaMgrCtxAllocatorFind @ 0x140375BE8
 * Callers:
 *     RtlpHpVaMgrCtxAlloc @ 0x1403041DC (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140375AC8 (RtlpHpVaMgrCtxAllocatorReference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrCtxAllocatorFind(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r11
  __int64 v6; // r10
  unsigned int v7; // esi
  __int64 v9; // rax

  v4 = *(unsigned int *)(a1 + 2152);
  v5 = a1 + 2160;
  v6 = 0LL;
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    do
    {
      if ( *(_QWORD *)(v5 + 24) )
      {
        ++v7;
        if ( ((*(unsigned __int8 *)(v5 + 46) >> 1) & 7) == *(_DWORD *)(a2 + 4)
          && *(unsigned __int8 *)(v5 + 45) == *(_DWORD *)(a2 + 8)
          && *(_QWORD *)(v5 + 32) == *(_QWORD *)(a2 + 16)
          && (!a3 || *(unsigned __int16 *)(v5 + 40) == a3)
          && ((*(_BYTE *)(a2 + 12) ^ (*(_BYTE *)(v5 + 46) >> 4)) & 1) == 0 )
        {
          return v5;
        }
      }
      else
      {
        v9 = v5;
        if ( v6 )
          v9 = v6;
        v6 = v9;
      }
      v5 += 48LL;
    }
    while ( v7 < (unsigned int)v4 );
    if ( v6 )
      goto LABEL_8;
  }
  if ( (unsigned int)v4 < 0xFF )
    v6 = a1 + 48 * (v4 + 45);
LABEL_8:
  if ( a4 )
    *a4 = v6;
  return 0LL;
}
