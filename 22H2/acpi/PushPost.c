/*
 * XREFs of PushPost @ 0x1C0053D00
 * Callers:
 *     Divide @ 0x1C00065A0 (Divide.c)
 *     AsyncEvalObject @ 0x1C00544F0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005498C (NestAsyncEvalObject.c)
 *     Unload @ 0x1C0055BA0 (Unload.c)
 *     IncDec @ 0x1C0056BC0 (IncDec.c)
 *     LoadTable @ 0x1C0056EA0 (LoadTable.c)
 *     Wait @ 0x1C0059650 (Wait.c)
 * Callees:
 *     PushFrame @ 0x1C0053C54 (PushFrame.c)
 */

__int64 __fastcall PushPost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  result = PushFrame(a1, 1414745936, 0x38u, a2, v9);
  if ( !(_DWORD)result )
  {
    v8 = v9[0];
    *(_QWORD *)(v9[0] + 32) = a3;
    *(_QWORD *)(v8 + 40) = a4;
    *(_QWORD *)(v8 + 48) = a5;
  }
  return result;
}
