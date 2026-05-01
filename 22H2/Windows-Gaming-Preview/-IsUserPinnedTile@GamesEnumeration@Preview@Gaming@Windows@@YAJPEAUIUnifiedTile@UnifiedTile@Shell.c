/*
 * XREFs of ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x1800124F8
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A1C0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVCollectionTile@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x18001C0FC (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *a2,
        unsigned __int8 *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)a2 = 0;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *, __int64 *, unsigned __int8 *))(*(_QWORD *)this + 96LL))(
         this,
         &v10,
         a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v10;
    if ( !v10 )
    {
      v5 = 0;
      goto LABEL_10;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v10 + 72LL))(
           v10,
           a2);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v6 = 26LL;
  }
  else
  {
    v6 = 24LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\FindAllOperation.h",
    (const char *)(unsigned int)v4);
LABEL_9:
  v7 = v10;
LABEL_10:
  if ( v7 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
