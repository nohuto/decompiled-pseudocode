/*
 * XREFs of ?GetPinnedItemForAppID@CPinnedList@@UEAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180156EA0
 * Callers:
 *     ?GetPinnedItemForAppID@CPinnedList@@W7EAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z @ 0x180171DD0 (-GetPinnedItemForAppID@CPinnedList@@W7EAAJPEBGPEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180152C04 (--1CPinList@@QEAA@XZ.c)
 *     ?FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z @ 0x1801552D8 (-FindPinEntryFromAppId@CPinList@@QEAAPEAVPINENTRY@@PEBG_NPEAH@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159A1C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 */

__int64 __fastcall CPinnedList::GetPinnedItemForAppID(
        CPinnedList *this,
        const unsigned __int16 *a2,
        struct _ITEMIDLIST **a3)
{
  signed int v5; // ebx
  const ITEMIDLIST **PinEntryFromAppId; // rax
  struct _ITEMIDLIST *v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  v5 = CPinList::Load((CPinList *)&v9, (CPinnedList *)((char *)this - 16));
  if ( v5 >= 0 )
  {
    v5 = -2147023728;
    PinEntryFromAppId = CPinList::FindPinEntryFromAppId((HDSA *)&v9, a2, 0, 0LL);
    if ( PinEntryFromAppId )
    {
      v7 = ILClone(*PinEntryFromAppId);
      *a3 = v7;
      v5 = v7 == 0LL ? 0x8007000E : 0;
    }
  }
  CPinList::~CPinList((CPinList *)&v9);
  return (unsigned int)v5;
}
