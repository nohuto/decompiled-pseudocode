void __fastcall KiUnlockKobjectArray(volatile signed __int32 **a1, unsigned int a2)
{
  volatile signed __int32 *v2; // r8
  volatile signed __int32 **v3; // rcx
  __int64 v4; // rdx

  v2 = *a1;
  _InterlockedAnd(*a1, 0xFFFFFF7F);
  if ( a2 > 1 )
  {
    v3 = a1 + 1;
    v4 = a2 - 1;
    do
    {
      if ( *v3 != v2 )
      {
        v2 = *v3;
        _InterlockedAnd(*v3, 0xFFFFFF7F);
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}
