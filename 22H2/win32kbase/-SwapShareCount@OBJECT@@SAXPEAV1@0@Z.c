/*
 * XREFs of ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C00AB090
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00BA100 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002FE00 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall OBJECT::SwapShareCount(struct OBJECT *a1, struct OBJECT *a2)
{
  int v2; // r8d
  GdiHandleEntryDirectory **v5; // rsi
  __int64 v6; // rcx

  v2 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 2) = v2;
  v5 = (GdiHandleEntryDirectory **)gpHandleManager;
  if ( *((_BYTE *)GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, a1) + 14) == 5
    && *((_BYTE *)GdiHandleManager::GetEntryFromObject(v5, a1) + 14) == 5 )
  {
    v6 = *((_QWORD *)a1 + 85);
    *((_QWORD *)a1 + 85) = *((_QWORD *)a2 + 85);
    *((_QWORD *)a2 + 85) = v6;
  }
}
