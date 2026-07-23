/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlock @ 0x140595388
 * Callers:
 *     RtlpHpSegSizeInternal @ 0x1405952F8 (RtlpHpSegSizeInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x140595444 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlock(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  int v6; // r11d
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  char v10; // cl
  unsigned __int64 v11; // r8
  int v12; // edx

  v5 = DWORD2(RtlpHpHeapGlobals) ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v6 = (unsigned __int16)v5;
  v7 = *(_QWORD *)(a1
                 + 8LL
                 * *((unsigned __int8 *)RtlpLfhBucketIndexMap
                   + ((unsigned __int64)((unsigned int)(unsigned __int16)v5 + 15) >> 4))
                 + 128);
  v8 = a3 - HIWORD(v5) - a2;
  v9 = *(_DWORD *)(v7 + 72);
  v10 = *(_BYTE *)(v7 + 76);
  if ( v9 )
  {
    v11 = (v8 * (unsigned __int64)v9) >> v10;
    v12 = v8 - v11 * v6;
  }
  else
  {
    LODWORD(v11) = v8 >> v10;
    v12 = ((1 << v10) - 1) & v8;
  }
  if ( v12
    || ((*(_QWORD *)(a2 + 8 * ((unsigned __int64)(unsigned int)(2 * v11) >> 6) + 48) >> ((2 * v11) & 0x3F)) & 1) == 0 )
  {
    return -1LL;
  }
  else
  {
    return (unsigned int)RtlpHpLfhSubsegmentSizeBlockInternal(a2, a3);
  }
}
