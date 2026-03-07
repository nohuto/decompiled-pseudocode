void __fastcall UmfdZombifyAllUmfdFonts(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *i; // rdi
  __int64 v9; // rcx
  struct RFONT *j; // rbx
  __int64 v11; // rcx
  struct RFONT *k; // rbx
  _QWORD *v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v1 = Gre::Base::Globals(a1);
  v3 = Gre::Base::Globals(v2);
  v13 = (_QWORD *)*((_QWORD *)v3 + 6);
  GreAcquireSemaphore(v13);
  GreAcquireFastMutex(*((_QWORD *)v3 + 18));
  v5 = SGDGetSessionState(v4);
  lambda_97c9cca63d1bce585f2b122b4771693f_::operator()(v6, *(_QWORD *)(*(_QWORD *)(v5 + 32) + 20272LL));
  lambda_97c9cca63d1bce585f2b122b4771693f_::operator()(v7, *((_QWORD *)v3 + 796));
  GreReleaseFastMutex(*((_QWORD *)v3 + 18));
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  v15 = *((_QWORD *)v1 + 3);
  GreAcquireSemaphore(v15);
  v14 = *((_QWORD *)v1 + 1);
  GreAcquireSemaphore(v14);
  for ( i = (_QWORD *)*((_QWORD *)v1 + 760); i; i = (_QWORD *)*i )
  {
    v13 = i;
    for ( j = PDEVOBJ::prfntActive((PDEVOBJ *)&v13); j; j = (struct RFONT *)*((_QWORD *)j + 84) )
    {
      v9 = *(_QWORD *)(SGDGetSessionState(v9) + 32);
      if ( *((_QWORD *)j + 12) == *(_QWORD *)(v9 + 23448) )
        *((_QWORD *)j + 7) = 0LL;
    }
    for ( k = PDEVOBJ::prfntInactive((PDEVOBJ *)&v13); k; k = (struct RFONT *)*((_QWORD *)k + 84) )
    {
      v11 = *(_QWORD *)(SGDGetSessionState(v11) + 32);
      if ( *((_QWORD *)k + 12) == *(_QWORD *)(v11 + 23448) )
        *((_QWORD *)k + 7) = 0LL;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
}
