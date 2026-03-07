__int64 __fastcall CFlipManager::ConsumerAcquirePresent(
        CFlipManager *this,
        int a2,
        int a3,
        void **a4,
        struct CFlipPropertySet **a5)
{
  __int64 v5; // rax
  unsigned int v6; // r10d
  int v8; // r11d
  __int64 v9; // rcx
  struct CFlipPropertySet *v10; // rcx

  v5 = *((_QWORD *)this + 35);
  v6 = 0;
  v8 = 0;
  if ( v5 )
  {
    v9 = *(_QWORD *)(v5 + 56);
    if ( v9 )
      v8 = *(_DWORD *)(v9 + 32);
    if ( *(_DWORD *)(v5 + 40) == a2 && v8 == a3 )
    {
      *a4 = *(void **)(v5 + 48);
      v10 = *(struct CFlipPropertySet **)(*((_QWORD *)this + 35) + 56LL);
      *a5 = v10;
      if ( v10 )
        ++*((_DWORD *)v10 + 2);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
