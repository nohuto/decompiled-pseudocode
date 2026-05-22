/*
 * XREFs of GameInputServerCreate @ 0x1800341C8
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x180033F1C (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180043184 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BF010 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputServerCreate(struct IGameInputServerInputRouter *a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // edx
  char *v5; // rcx
  unsigned int v6; // ebx
  struct GameInputServerProxy *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = GameInputServerProxy::CreateSingleton(a1, &v8);
  v5 = 0LL;
  v6 = v3;
  if ( v3 < 0 )
  {
    *a2 = 0LL;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)v3, v4);
    return v6;
  }
  else
  {
    if ( v8 )
      v5 = (char *)v8 + 16;
    *a2 = v5;
    return 0LL;
  }
}
