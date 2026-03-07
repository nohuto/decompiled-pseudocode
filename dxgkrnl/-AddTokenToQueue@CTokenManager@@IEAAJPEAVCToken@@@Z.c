__int64 __fastcall CTokenManager::AddTokenToQueue(CTokenManager *this, struct CompositionSurfaceObject **a2)
{
  int v4; // edi
  struct CompositionSurfaceObject *v5; // rdx
  CTokenQueue *v6; // rcx
  struct CTokenManager::TokenQueueTableEntry *v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( (*((unsigned __int8 (__fastcall **)(struct CompositionSurfaceObject **))*a2 + 23))(a2) )
  {
    v6 = (CTokenManager *)((char *)this + 344);
    goto LABEL_5;
  }
  v5 = a2[4];
  v8 = 0LL;
  v4 = CTokenManager::EnsureTokenQueue(this, v5, &v8);
  if ( v4 >= 0 )
  {
    v6 = (CTokenQueue *)*((_QWORD *)v8 + 1);
LABEL_5:
    CTokenQueue::AddToken(v6, (struct CToken *)a2);
  }
  return (unsigned int)v4;
}
