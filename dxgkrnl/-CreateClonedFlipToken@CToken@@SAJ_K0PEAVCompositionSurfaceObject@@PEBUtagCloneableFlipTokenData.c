__int64 __fastcall CToken::CreateClonedFlipToken(
        unsigned __int64 a1,
        unsigned __int64 a2,
        struct CompositionSurfaceObject *this,
        const struct tagCloneableFlipTokenData *a4,
        struct CToken **a5)
{
  int v8; // ebx
  struct CFlipToken *v10; // [rsp+30h] [rbp-18h] BYREF

  v10 = 0LL;
  *a5 = 0LL;
  v8 = CFlipToken::CreateCloned(a1, a2, this, a4, &v10);
  if ( v8 < 0 )
    CompositionSurfaceObject::SignalGpuFence(this, a1, a2, 1);
  else
    *a5 = v10;
  return (unsigned int)v8;
}
