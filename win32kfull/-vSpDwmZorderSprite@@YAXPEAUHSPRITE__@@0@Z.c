void __fastcall vSpDwmZorderSprite(Gre::Base *a1, HSPRITE a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  Gre::Base *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rax

  v4 = 0LL;
  Gre::Base::Globals(a1);
  if ( a1 )
  {
    LOBYTE(v5) = 15;
    v4 = HmgLock(a1, v5);
  }
  v7 = 0LL;
  Gre::Base::Globals(v6);
  if ( a2 )
  {
    LOBYTE(v8) = 15;
    v7 = HmgLock(a2, v8);
  }
  if ( v4 )
  {
    v9 = (_QWORD *)(v4 + 24);
    v10 = *(_QWORD *)(v4 + 24);
    if ( *(_QWORD *)(v10 + 8) != v4 + 24
      || (v11 = *(Gre::Base **)(v4 + 32), *(_QWORD **)v11 != v9)
      || ((*(_QWORD *)v11 = v10, *(_QWORD *)(v10 + 8) = v11, v12 = Gre::Base::Globals(v11), !v7)
        ? (v13 = *((_QWORD *)v12 + 38) + 80LL)
        : (v13 = v7 + 24),
          v14 = *(_QWORD *)v13,
          *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13) )
    {
      __fastfail(3u);
    }
    *v9 = v14;
    *(_QWORD *)(v4 + 32) = v13;
    *(_QWORD *)(v14 + 8) = v9;
    *(_QWORD *)v13 = v9;
    v15 = (void *)UserReferenceDwmApiPort();
    DwmAsyncZorderSprite(v15);
  }
  if ( v7 )
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
  if ( v4 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
}
