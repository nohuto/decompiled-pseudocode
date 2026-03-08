/*
 * XREFs of EngpMovePointer @ 0x1C0127E08
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C001DC84 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     EngMovePointer @ 0x1C0269DC0 (EngMovePointer.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0018890 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     IsDwmActive @ 0x1C002CF30 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D32A0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0128ACC (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027CD08 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 */

void EngpMovePointer(struct _SURFOBJ *a1, int a2, int a3, ...)
{
  HDEV hdev; // rbx
  Gre::Base *v7; // rcx
  struct _RECTL *v8; // r9
  struct Gre::Base::SESSION_GLOBALS *v9; // rdi
  __int64 v10; // rbx
  Gre::Base *v11; // rcx
  struct _RECTL *v12; // r9
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v16; // [rsp+70h] [rbp+28h]
  va_list va1; // [rsp+78h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, _QWORD);
  hdev = a1->hdev;
  if ( IsDwmActive((Gre::Base *)a1) )
  {
    v9 = Gre::Base::Globals(v7);
    v13 = *((_QWORD *)hdev + 7);
    GreAcquireSemaphore(v13);
    v14 = *((_QWORD *)v9 + 14);
    v10 = v14;
    GreAcquireSemaphoreSharedStarveExclusiveInternal(v14);
    EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"hsem", v10);
    if ( IsDwmActive(v11) )
    {
      DwmMovePointer(a1, a2, a3, v12, v16);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)va);
      SEMOBJ::vUnlock((SEMOBJ *)&v13);
      return;
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)va);
    SEMOBJ::vUnlock((SEMOBJ *)&v13);
  }
  GdiMovePointer(a1, a2, a3, v8, 0);
}
