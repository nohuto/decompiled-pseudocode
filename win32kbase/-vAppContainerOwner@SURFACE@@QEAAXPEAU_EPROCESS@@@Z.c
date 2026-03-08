/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00D27E8
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0186E60 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C00841C0 (UserIsProcessImmersiveAppContainer.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, struct _EPROCESS *a2)
{
  struct _EPROCESS *v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _ENTRY *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _ENTRY *EntryFromObject; // rax

  v2 = a2;
  if ( !a2 || (unsigned int)UserIsProcessImmersiveAppContainer((__int64)a2) )
  {
    GreAcquireHmgrSemaphore((__int64)this);
    if ( v2 )
    {
      v8 = SGDGetSessionState(v4);
      EntryFromObject = GdiHandleManager::GetEntryFromObject(
                          *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v8 + 24) + 8008LL),
                          this);
      *((_BYTE *)EntryFromObject + 15) |= 0x80u;
      goto LABEL_5;
    }
  }
  else
  {
    v2 = 0LL;
    GreAcquireHmgrSemaphore((__int64)this);
  }
  v5 = SGDGetSessionState(v4);
  v6 = GdiHandleManager::GetEntryFromObject(*(GdiHandleEntryDirectory ***)(*(_QWORD *)(v5 + 24) + 8008LL), this);
  *((_BYTE *)v6 + 15) &= ~0x80u;
LABEL_5:
  *((_QWORD *)this + 80) = v2;
  GreReleaseHmgrSemaphore(v7);
}
