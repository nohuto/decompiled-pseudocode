/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180018C00
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BDB4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F570 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800139C0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180014810 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015860 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18001629C (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180016C00 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180019374 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001A880 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001AB00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B510 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B930 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003B6C0 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BCD0 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001903C (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180019160 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::SyncWindowData(CWindowList *this, struct IDwmWindow *a2, struct CWindowData *a3)
{
  char v6; // al
  __int64 v7; // rax
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  HWND v23; // rcx
  unsigned int PropW; // eax
  char v25; // al
  _BYTE v27[16]; // [rsp+20h] [rbp-38h] BYREF

  *((_QWORD *)a3 + 4) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 88LL))(a2, (char *)a3 + 180);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 96LL))(a2, (char *)a3 + 196);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 104LL))(a2, (char *)a3 + 212);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 112LL))(a2, (char *)a3 + 228);
  *((_DWORD *)a3 + 25) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)a3 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)a3 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *((_DWORD *)a3 + 28) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
  *((_BYTE *)a3 + 608) &= ~1u;
  *((_BYTE *)a3 + 608) |= v6 & 1;
  *((_QWORD *)a3 + 15) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  *(_OWORD *)((char *)a3 + 312) = *(_OWORD *)v7;
  *(_OWORD *)((char *)a3 + 328) = *(_OWORD *)(v7 + 16);
  *((_QWORD *)a3 + 43) = *(_QWORD *)(v7 + 32);
  *((_QWORD *)a3 + 37) = *((_QWORD *)a3 + 39);
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  *((_BYTE *)a3 + 608) &= ~2u;
  *((_BYTE *)a3 + 608) |= 2 * (v8 & 1);
  *((_BYTE *)a3 + 352) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
  *((_BYTE *)a3 + 609) &= ~1u;
  *((_BYTE *)a3 + 609) |= v9 & 1;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  *((_BYTE *)a3 + 612) &= ~0x10u;
  *((_BYTE *)a3 + 612) |= 16 * (v10 & 1);
  *(_OWORD *)((char *)a3 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, _BYTE *))(*(_QWORD *)a2 + 232LL))(
                                               a2,
                                               v27);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2);
  *((_BYTE *)a3 + 608) &= ~0x10u;
  *((_BYTE *)a3 + 608) |= 16 * (v11 & 1);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 264LL))(a2);
  *((_BYTE *)a3 + 610) &= ~0x80u;
  *((_BYTE *)a3 + 610) |= v12 << 7;
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 288LL))(a2);
  *((_BYTE *)a3 + 612) &= ~2u;
  *((_BYTE *)a3 + 612) |= 2 * (v13 & 1);
  v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_BYTE *)a3 + 612) &= ~0x40u;
  *((_BYTE *)a3 + 612) |= (v14 & 1) << 6;
  v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 352LL))(a2);
  *((_BYTE *)a3 + 612) &= ~0x80u;
  *((_BYTE *)a3 + 612) |= (v15 & 0x400000) != 0 ? 0x80 : 0;
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 352LL))(a2);
  *((_BYTE *)a3 + 613) &= ~1u;
  *((_BYTE *)a3 + 613) |= (v16 & 0x200000) != 0;
  if ( ((*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 352LL))(a2) & 0x800000) != 0 )
    v17 = 2;
  else
    v17 = 0;
  *((_BYTE *)a3 + 613) &= ~2u;
  *((_BYTE *)a3 + 613) |= v17;
  v18 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 400LL))(a2);
  *((_BYTE *)a3 + 613) &= ~8u;
  *((_BYTE *)a3 + 613) |= 8 * (v18 & 1);
  v19 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 216LL))(a2);
  *((_BYTE *)a3 + 609) &= ~0x80u;
  *((_BYTE *)a3 + 609) |= v19 << 7;
  v20 = *((_BYTE *)a3 + 612);
  if ( (v20 & 0x12) == 0 )
    *((_BYTE *)a3 + 612) = v20 & 0xDF;
  v21 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
  *((_BYTE *)a3 + 611) &= ~0x20u;
  *((_BYTE *)a3 + 611) |= 32 * (v21 & 1);
  v22 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 296LL))(a2);
  *((_BYTE *)a3 + 612) &= ~8u;
  *((_BYTE *)a3 + 612) |= 8 * (v22 & 1);
  CWindowList::HasIconicBitmapChange(this, a2);
  CWindowList::CheckForMaximizedChange(this, a3);
  v23 = (HWND)*((_QWORD *)a3 + 5);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 180);
  if ( v23 )
    PropW = (unsigned int)GetPropW(v23, (LPCWSTR)0xA914);
  else
    PropW = 0;
  *((_DWORD *)a3 + 89) = PropW;
  v25 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 612) &= ~4u;
  *((_BYTE *)a3 + 612) |= 4 * (v25 & 1);
  return 0LL;
}
