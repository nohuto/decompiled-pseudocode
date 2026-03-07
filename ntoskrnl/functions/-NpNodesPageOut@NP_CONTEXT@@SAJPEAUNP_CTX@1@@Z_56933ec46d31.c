int __fastcall NP_CONTEXT::NpNodesPageOut(struct NP_CONTEXT::NP_CTX *a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( *(_DWORD *)(v2 + 40) <= *(_DWORD *)v2 )
    return 0;
  else
    return NP_CONTEXT::NpiPerformPageOut((struct NP_CONTEXT *)v2, a1);
}
