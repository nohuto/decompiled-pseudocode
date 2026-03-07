__int64 __fastcall KiFreeProcessorNumber(unsigned __int16 *a1)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v8 = 0;
  P = 0LL;
  KiFindSubNodeForProcessorNumber((__int64)a1, &v8, &v9, &P);
  v3 = v9;
  v4 = *(_QWORD *)(v9 + 16) & ~(1LL << *((_BYTE *)a1 + 2));
  *(_QWORD *)(v9 + 16) = v4;
  if ( !v4 )
  {
    *(_QWORD *)(KeNodeBlock[*(unsigned __int16 *)(v3 + 2)] + 8LL * *a1 + 24) = 0LL;
    *(_QWORD *)(KiSubNodes + 8LL * v8) = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  v5 = &KiGroupBlock[4 * *a1];
  result = *((unsigned __int8 *)a1 + 2);
  v7 = *v5 & ~(1LL << result);
  *v5 = v7;
  if ( !v7 )
    return KiUncommitGroupSubNodeAssignments(*a1, v5, v3, v2);
  return result;
}
