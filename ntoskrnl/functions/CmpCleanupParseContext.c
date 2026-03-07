_QWORD *__fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  _QWORD *v4; // rbx
  _QWORD *result; // rax
  __int64 v6; // rcx

  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( !a2 )
      CmpLockRegistry();
    CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
    if ( !a2 )
      CmpUnlockRegistry();
  }
  v4 = (_QWORD *)(a1 + 144);
  while ( 1 )
  {
    result = (_QWORD *)*v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = *result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( result == v4 )
      break;
    CmpFreeExtraParameter(result);
  }
  return result;
}
