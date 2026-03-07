void __fastcall CTokenManager::DeleteAllCompositionTokens(CTokenManager *this)
{
  char *v1; // rbx
  char *v2; // rax
  __int64 v3; // rcx

  v1 = (char *)this + 272;
  while ( 1 )
  {
    v2 = *(char **)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v3 = *(_QWORD *)v2, *(char **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *(_QWORD *)v1 = v3;
    *(_QWORD *)(v3 + 8) = v1;
    if ( v2 == v1 )
      break;
    ObfDereferenceObject(v2 - 48);
  }
}
