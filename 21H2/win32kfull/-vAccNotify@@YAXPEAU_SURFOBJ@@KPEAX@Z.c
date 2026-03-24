/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0018F78
 * Callers:
 *     GreDwmStartup @ 0x1C000CD48 (GreDwmStartup.c)
 *     GreAccNotifyWindow @ 0x1C0018280 (GreAccNotifyWindow.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C0101AB0 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreDwmShutdown @ 0x1C0134404 (GreDwmShutdown.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C00B2C64 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0286C34 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029AEB4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  int v7; // eax
  struct _DISPSURF *i; // rbx
  __int64 v9; // rax
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v11)(struct _SURFOBJ *, _QWORD, void *); // r10
  void (__fastcall *v12)(struct _SURFOBJ *, _QWORD, void *); // rax
  __int128 v13; // [rsp+28h] [rbp-19h] BYREF
  HDEV v14; // [rsp+38h] [rbp-9h]
  int v15; // [rsp+40h] [rbp-1h]
  _QWORD v16[2]; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v17[40]; // [rsp+58h] [rbp+17h] BYREF
  __int64 v18; // [rsp+80h] [rbp+3Fh]
  __int64 v19; // [rsp+88h] [rbp+47h]

  hdev = a1->hdev;
  if ( hdev || (hdev = (HDEV)UserGetHDEV()) != 0LL )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v16);
    v19 = 0LL;
    v18 = 0LL;
    v16[0] = 0LL;
    v13 = 0LL;
    v15 = 1;
    v7 = *((_DWORD *)hdev + 10);
    if ( (v7 & 1) != 0 )
    {
      *(_QWORD *)&v13 = *((_QWORD *)hdev + 6);
      v14 = hdev;
      GreAcquireSemaphore(v13);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v13, 11LL);
      v7 = *((_DWORD *)hdev + 10);
    }
    if ( (v7 & 0x20000000) != 0 )
    {
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 225); i; i = *(struct _DISPSURF **)i )
      {
        v9 = *((_QWORD *)i + 6);
        if ( v9
          && (*(_DWORD *)(v9 + 1824) & 0x8000000) != 0
          && (*(_DWORD *)(v9 + 2128) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)(v9 + 1792) + 760LL) )
        {
          DevBitmap = GetDevBitmap(i, a1);
          v11(DevBitmap, a2, a3);
        }
      }
    }
    else if ( (v7 & 0x20000) == 0 && ((_DWORD)hdev[456] & 0x8000000) != 0 && ((_DWORD)hdev[532] & 0x8000) != 0 )
    {
      v12 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 224) + 760LL);
      if ( v12 )
        v12(a1, a2, a3);
    }
    if ( gbWndobjUpdate && a2 == 5 )
    {
      gbWndobjUpdate = 0;
      vForceClientRgnUpdate();
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v13);
    if ( v16[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v16);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
  }
}
