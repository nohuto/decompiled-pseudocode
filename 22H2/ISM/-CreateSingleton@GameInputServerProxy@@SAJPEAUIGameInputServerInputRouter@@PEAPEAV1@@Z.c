/*
 * XREFs of ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180043184
 * Callers:
 *     GameInputServerCreate @ 0x1800341C8 (GameInputServerCreate.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x180042CC0 (--0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z.c)
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x180043430 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEEF0 (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputServerProxy::CreateSingleton(
        struct IGameInputServerInputRouter *a1,
        struct GameInputServerProxy **a2)
{
  unsigned int v3; // ebx
  int v5; // edx
  GameInputServerProxy *v6; // rax
  SharedObjectBase *v7; // rax
  int GameInput; // edi
  int v9; // edx

  v3 = 0;
  *a2 = 0LL;
  AcquireSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  if ( GameInputServerProxy::s_singleton )
  {
    v3 = -2147418113;
LABEL_8:
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)v3, v5);
    goto LABEL_14;
  }
  v6 = (GameInputServerProxy *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = GameInputServerProxy::GameInputServerProxy(v6, a1);
  else
    v7 = 0LL;
  GameInputServerProxy::s_singleton = v7;
  if ( !v7 )
  {
    v3 = -2147024882;
    goto LABEL_8;
  }
  GameInput = GameInputServerProxy::LoadGameInput(v7);
  if ( GameInput < 0 )
  {
    SharedObjectBase::ReleasePrivateReference(GameInputServerProxy::s_singleton);
    GameInputServerProxy::s_singleton = 0LL;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)GameInput, v9);
    v3 = GameInput;
  }
  else
  {
    if ( (unsigned int)_InterlockedExchangeAdd64((volatile signed __int64 *)GameInputServerProxy::s_singleton + 1, 2uLL) )
      __fastfail(0xEu);
    *a2 = GameInputServerProxy::s_singleton;
  }
LABEL_14:
  ReleaseSRWLockExclusive(&GameInputServerProxy::s_singletonLock);
  return v3;
}
