/*
 * XREFs of ?vCleanupRegions@@YAXK@Z @ 0x1C0035730
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C0034CE8 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgNextOwned @ 0x1C0035880 (HmgNextOwned.c)
 *     bDeleteRegion @ 0x1C003DA20 (bDeleteRegion.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     HmgLockEx @ 0x1C0043B50 (HmgLockEx.c)
 */

void __fastcall vCleanupRegions(unsigned int a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  HRGN v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  struct _ENTRY *EntryFromObject; // rax
  HRGN v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v9);
    if ( !v2 )
      break;
    v4 = v9;
    if ( (BYTE2(v9) & 0x1F) == 4 )
    {
      LOBYTE(v3) = 4;
      v6 = HmgLockEx(v9, v3, 0LL);
      if ( v6 )
      {
        v7 = SGDGetSessionState(v5);
        EntryFromObject = GdiHandleManager::GetEntryFromObject(
                            *(GdiHandleManager **)(*(_QWORD *)(v7 + 24) + 8008LL),
                            (struct OBJECT *)v6);
        if ( EntryFromObject )
          *((_QWORD *)EntryFromObject + 2) = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
        v4 = v9;
      }
      bDeleteRegion(v4);
    }
  }
}
