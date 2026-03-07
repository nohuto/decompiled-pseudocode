__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // r9
  _QWORD **v6; // r10
  int v7; // ecx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
    goto LABEL_9;
  if ( !a2 )
    return 0LL;
  result = (__int64)CmListGetNextElement((_QWORD **)(v3 + 208), &v8, 32);
  if ( !result )
    return 0LL;
  do
  {
    v7 = *(_DWORD *)(result + 68);
    if ( v7 == 2 || v7 == 11 )
      break;
    result = (__int64)CmListGetNextElement(v6, &v8, 32);
  }
  while ( result );
  if ( !CmEqualTrans(*(_QWORD *)(result + 56), v5) )
    return 0LL;
LABEL_9:
  result = 3221225852LL;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
    return 3221226533LL;
  return result;
}
