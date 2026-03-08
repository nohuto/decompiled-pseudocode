/*
 * XREFs of CreateBitField @ 0x1C00500D0
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x1C0050374 (CreateXField.c)
 */

__int64 __fastcall CreateBitField(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  _DWORD *v5; // r9
  __int64 v6; // rdx
  _DWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  v7 = 0LL;
  result = CreateXField(a1, a2, v2 + 80, &v7);
  if ( !(_DWORD)result )
  {
    v5 = v7;
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL) >> 3;
    v7[3] = v6;
    v5[4] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL) - 8 * v6;
    v5[5] = 1;
    v5[6] = 1;
  }
  return result;
}
