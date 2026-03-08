/*
 * XREFs of ShrinkMask_CX @ 0x1C0260550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShrinkMask_CX(__int64 a1)
{
  char *v1; // r9
  __int64 v2; // r10
  __int64 v3; // rbx
  unsigned __int16 *v4; // r11
  char v5; // al
  char *v6; // r9
  __int64 v7; // rdi
  char v8; // cl
  __int64 result; // rax
  int v10; // r8d
  char v11; // dl
  char v12; // cl
  int v13; // [rsp+8h] [rbp+8h]
  int v14; // [rsp+8h] [rbp+8h]
  int v15; // [rsp+8h] [rbp+8h]

  v1 = *(char **)(a1 + 208);
  v2 = *(_QWORD *)(a1 + 576);
  v3 = *(_QWORD *)(a1 + 584);
  v4 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 304) + 152LL);
  v5 = *v1;
  v6 = v1 + 1;
  v7 = *(int *)(a1 + 592);
  v8 = *(_BYTE *)(a1 + 4);
  v13 = 1;
  BYTE2(v13) = v5;
  result = (unsigned int)(v13 << v8);
  v14 = v13 << v8;
  do
  {
    v10 = *v4;
    v11 = 0;
    ++v4;
    while ( v10 )
    {
      --v10;
      if ( BYTE1(result) )
      {
        v12 = *v6++;
        v15 = 1;
        BYTE2(v15) = v12;
        LODWORD(result) = v15;
      }
      else
      {
        v12 = BYTE2(v14);
      }
      v11 |= v12;
      result = (unsigned int)(2 * result);
      BYTE2(v14) = BYTE2(result);
    }
    *(_BYTE *)(v2 + 3) = v11 >> 7;
    v2 += v7;
  }
  while ( v2 != v3 );
  return result;
}
