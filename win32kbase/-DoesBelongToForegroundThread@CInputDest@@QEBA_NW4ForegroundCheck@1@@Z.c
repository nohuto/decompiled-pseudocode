bool __fastcall CInputDest::DoesBelongToForegroundThread(__int64 a1)
{
  struct tagTHREADINFO *v1; // rbx
  __int64 v4; // rcx
  __int64 CompositionInputWindowUIOwner; // rax

  v1 = 0LL;
  if ( !gptiForeground )
    return 0;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)a1) )
    return CInputDest::GetThreadInfo((CInputDest *)a1) == gptiForeground;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v4 = *(_QWORD *)(a1 + 80);
  else
    v4 = 0LL;
  CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(v4);
  if ( CompositionInputWindowUIOwner )
    v1 = *(struct tagTHREADINFO **)(CompositionInputWindowUIOwner + 16);
  return v1 == gptiForeground;
}
