/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C0090A60
 * Callers:
 *     GreAccNotifyWindow @ 0x1C00909D4 (GreAccNotifyWindow.c)
 *     GreDwmStartup @ 0x1C00D3840 (GreDwmStartup.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00EDE70 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreDwmShutdown @ 0x1C011FFD8 (GreDwmShutdown.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02837E0 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0299790 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
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
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 221); i; i = *(struct _DISPSURF **)i )
      {
        v9 = *((_QWORD *)i + 6);
        if ( v9
          && (*(_DWORD *)(v9 + 1792) & 0x8000000) != 0
          && (*(_DWORD *)(v9 + 2096) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)(v9 + 1760) + 760LL) )
        {
          DevBitmap = GetDevBitmap(i, a1);
          v11(DevBitmap, a2, a3);
        }
      }
    }
    else if ( (v7 & 0x20000) == 0 && ((_DWORD)hdev[448] & 0x8000000) != 0 && ((_DWORD)hdev[524] & 0x8000) != 0 )
    {
      v12 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 220) + 760LL);
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
