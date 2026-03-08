/*
 * XREFs of ExpandMask_CX @ 0x1C025F710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandMask_CX(__int64 a1)
{
  int v1; // r11d
  char *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  unsigned __int16 *v5; // r10
  char v6; // al
  char *v7; // r8
  __int64 v8; // rdx
  __int64 result; // rax
  char v10; // cl
  char v11; // cl
  int v12; // [rsp+8h] [rbp+8h]
  int v13; // [rsp+8h] [rbp+8h]
  int v14; // [rsp+8h] [rbp+8h]

  v1 = 1;
  v2 = *(char **)(a1 + 208);
  v3 = *(_QWORD *)(a1 + 576);
  v4 = *(_QWORD *)(a1 + 584);
  v5 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 304) + 152LL);
  v6 = *v2;
  v7 = v2 + 1;
  v8 = *(int *)(a1 + 592);
  v12 = 1;
  BYTE2(v12) = v6;
  result = (unsigned int)(v12 << *(_BYTE *)(a1 + 4));
  v10 = -1;
  v13 = result;
  do
  {
    if ( !--v1 )
    {
      v1 = *v5++;
      if ( BYTE1(v13) )
      {
        v11 = *v7++;
        v14 = 1;
        BYTE2(v14) = v11;
        LODWORD(result) = v14;
      }
      else
      {
        v11 = BYTE2(v13);
      }
      result = (unsigned int)(2 * result);
      v13 = result;
      v10 = -(v11 < 0);
    }
    *(_BYTE *)(v3 + 3) = v10;
    v3 += v8;
  }
  while ( v3 != v4 );
  return result;
}
