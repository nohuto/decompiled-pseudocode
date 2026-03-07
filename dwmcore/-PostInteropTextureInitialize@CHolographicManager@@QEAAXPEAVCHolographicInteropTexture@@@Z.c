void __fastcall CHolographicManager::PostInteropTextureInitialize(
        CHolographicInteropTaskQueue **this,
        struct CHolographicInteropTexture *a2)
{
  if ( this[6] )
  {
    if ( *((_BYTE *)this + 240) )
      CHolographicInteropTaskQueue::PostMessageW(
        this[6],
        1u,
        (struct IUnknown *)(((unsigned __int64)a2 + 80) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
