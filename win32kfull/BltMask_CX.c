/*
 * XREFs of BltMask_CX @ 0x1C025F4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BltMask_CX(__int64 a1)
{
  char *v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // rdx
  char v5; // al
  char *v6; // r8
  __int64 result; // rax
  char v8; // cl
  int v9; // [rsp+8h] [rbp+8h]
  int v10; // [rsp+8h] [rbp+8h]
  char v11; // [rsp+Ah] [rbp+Ah]

  v1 = *(char **)(a1 + 208);
  v2 = *(_QWORD *)(a1 + 576);
  v3 = *(_QWORD *)(a1 + 584);
  v4 = *(int *)(a1 + 592);
  v5 = *v1;
  v6 = v1 + 1;
  v9 = 1;
  BYTE2(v9) = v5;
  LODWORD(result) = v9 << *(_BYTE *)(a1 + 4);
  v11 = BYTE2(result);
  do
  {
    if ( BYTE1(result) )
    {
      v8 = *v6++;
      v10 = 1;
      BYTE2(v10) = v8;
      LODWORD(result) = v10;
    }
    else
    {
      v8 = v11;
    }
    result = (unsigned int)(2 * result);
    *(_BYTE *)(v2 + 3) = -(v8 < 0);
    v2 += v4;
    v11 = BYTE2(result);
  }
  while ( v2 != v3 );
  return result;
}
