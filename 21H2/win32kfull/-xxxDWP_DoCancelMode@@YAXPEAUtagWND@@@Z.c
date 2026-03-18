/*
 * XREFs of ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0107A0C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DB7A8 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C021B934 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxEndScroll @ 0x1C0241878 (xxxEndScroll.c)
 *     xxxEndMenu @ 0x1C0245A6C (xxxEndMenu.c)
 */

void __fastcall xxxDWP_DoCancelMode(struct tagWND *a1)
{
  struct tagWND *v2; // rsi
  __int64 v3; // rdx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct tagMENUSTATE *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL);
  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 608LL);
  if ( v3 )
  {
    if ( a1 == *(struct tagWND **)(*(_QWORD *)v3 + 8LL) && (*(_DWORD *)(v3 + 8) & 0x100) == 0 )
    {
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        (MenuStateOwnerLockxxxUnlock *)&v7,
        (struct tagMENUSTATE *)v3);
      xxxEndMenu(v4);
      if ( v7 )
        xxxUnlockMenuStateInternal(v7, 0);
    }
  }
  if ( v2 == a1 )
  {
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
    if ( v5 && *(_QWORD *)(v5 + 48) )
      xxxEndScroll(a1);
    v6 = *(_QWORD *)(gptiCurrent + 672LL);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 200) |= 8u;
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
      CCursorClip::ClearClip(gpCursorClip);
    }
    xxxReleaseCapture();
  }
}
