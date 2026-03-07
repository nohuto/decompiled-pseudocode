struct CWeakResourceReference *__fastcall CInteractionTracker::GetWeakRefToSelf(struct CWeakResourceReference **a1)
{
  struct CWeakResourceReference **v1; // rbx
  int v2; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1 + 9;
  if ( !a1[9] )
  {
    *v1 = 0LL;
    v2 = CWeakReference<CResource>::Create((struct CResource *)a1, a1 + 9);
    if ( v2 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v2, retaddr);
  }
  return *v1;
}
