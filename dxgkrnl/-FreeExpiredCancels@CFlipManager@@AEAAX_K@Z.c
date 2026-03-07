void __fastcall CFlipManager::FreeExpiredCancels(CFlipManager *this, unsigned __int64 a2)
{
  char *v2; // rdi
  char *v4; // rcx
  __int64 v5; // rcx
  char *v6; // rdx
  __int64 v7; // rbx

  v2 = (char *)this + 192;
  v4 = (char *)*((_QWORD *)this + 24);
  if ( v4 != v2 )
  {
    v5 = (unsigned __int64)(v4 - 8) & -(__int64)(v4 != 0LL);
    if ( v5 )
    {
      do
      {
        v6 = *(char **)(v5 + 8);
        if ( v6 == v2 )
          v7 = 0LL;
        else
          v7 = (unsigned __int64)(v6 - 8) & -(__int64)(v6 != 0LL);
        if ( a2 > *(_QWORD *)(v5 + 24) )
          (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
        v5 = v7;
      }
      while ( v7 );
    }
  }
}
