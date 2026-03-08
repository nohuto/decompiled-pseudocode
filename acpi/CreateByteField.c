/*
 * XREFs of CreateByteField @ 0x1C0050140
 * Callers:
 *     <none>
 * Callees:
 *     CreateXField @ 0x1C0050374 (CreateXField.c)
 */

__int64 __fastcall CreateByteField(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  _DWORD *v5; // rcx
  _DWORD *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  v6 = 0LL;
  result = CreateXField(a1, a2, v2 + 80, &v6);
  if ( !(_DWORD)result )
  {
    v5 = v6;
    v6[3] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
    v5[4] = 0;
    v5[5] = 8;
    v5[6] = 1;
  }
  return result;
}
