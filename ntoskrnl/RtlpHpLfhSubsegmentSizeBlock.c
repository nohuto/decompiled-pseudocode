/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlock @ 0x1405B49D8
 * Callers:
 *     RtlpHpSegSizeInternal @ 0x1405B47A8 (RtlpHpSegSizeInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1405B4A98 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // r9d
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // r8
  int v13; // edx

  v7 = (unsigned __int16)(qword_140C6AF48 ^ *(_WORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12));
  v8 = *(_QWORD *)(a1
                 + 8LL * *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned __int64)(unsigned int)(v7 + 15) >> 4))
                 + 128);
  v9 = a3 - (((unsigned int)qword_140C6AF48 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12)) >> 16) - a2;
  v10 = *(_DWORD *)(v8 + 72);
  v11 = *(_BYTE *)(v8 + 76);
  if ( v10 )
  {
    v12 = (v9 * (unsigned __int64)v10) >> v11;
    v13 = v9 - v12 * v7;
  }
  else
  {
    v12 = v9 >> v11;
    v13 = ((1 << v11) - 1) & v9;
  }
  if ( v13
    || ((*(_QWORD *)(a2 + 8 * ((unsigned __int64)(unsigned int)(2 * v12) >> 6) + 48) >> ((2 * v12) & 0x3F)) & 1) == 0 )
  {
    return -1LL;
  }
  else
  {
    return (unsigned int)RtlpHpLfhSubsegmentSizeBlockInternal(a2, a3, v12, a4);
  }
}
