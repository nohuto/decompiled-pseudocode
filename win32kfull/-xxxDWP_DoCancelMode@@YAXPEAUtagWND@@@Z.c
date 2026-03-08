/*
 * XREFs of ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0010864
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00108E8 (xxxReleaseCapture.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01432F0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0201C0C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxEndMenu @ 0x1C0234AE4 (xxxEndMenu.c)
 */

void __fastcall xxxDWP_DoCancelMode(struct tagWND *a1)
{
  struct tagWND *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // edx
  struct tagMENUSTATE *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 608LL);
  if ( v3 )
  {
    if ( a1 == *(struct tagWND **)(*(_QWORD *)v3 + 8LL) && (*(_DWORD *)(v3 + 8) & 0x100) == 0 )
    {
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        (MenuStateOwnerLockxxxUnlock *)&v7,
        (struct tagMENUSTATE *)v3);
      xxxEndMenu(v6);
      if ( v7 )
        xxxUnlockMenuStateInternal(v7, 0);
    }
  }
  if ( v2 == a1 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
    if ( v4 && *(_QWORD *)(v4 + 48) )
      xxxEndScroll(a1);
    v5 = *(_QWORD *)(gptiCurrent + 672LL);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 200) |= 8u;
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
      CCursorClip::ClearClip(gpCursorClip);
    }
    xxxReleaseCapture();
  }
}
