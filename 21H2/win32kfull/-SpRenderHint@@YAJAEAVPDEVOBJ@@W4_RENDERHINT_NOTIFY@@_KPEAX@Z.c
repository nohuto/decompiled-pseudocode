/*
 * XREFs of ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C0080944
 * Callers:
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C0083F48 (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 *     GreDwmStartup @ 0x1C00D3840 (GreDwmStartup.c)
 *     GreDesktopSwitch @ 0x1C0118A54 (GreDesktopSwitch.c)
 *     GreDwmShutdown @ 0x1C011FFD8 (GreDwmShutdown.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00843F8 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpRenderHint(struct PDEVOBJ *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v10; // rdx
  __int128 v11; // [rsp+30h] [rbp-78h] BYREF
  __int64 v12; // [rsp+40h] [rbp-68h]
  int v13; // [rsp+48h] [rbp-60h]
  _QWORD v14[10]; // [rsp+50h] [rbp-58h] BYREF

  v8 = -1073741822;
  if ( (unsigned int)bNeedRenderHint(a1) )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v14);
    v14[8] = 0LL;
    v14[7] = 0LL;
    v14[0] = 0LL;
    v10 = *(_QWORD *)a1;
    v11 = 0LL;
    v13 = 1;
    if ( (*(_DWORD *)(v10 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v11 = *(_QWORD *)(v10 + 48);
      v12 = v10;
      GreAcquireSemaphore(v11);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v11, 11LL);
      v10 = *(_QWORD *)a1;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v10 + 3408))(*(_QWORD *)(v10 + 1768), a2, a3, a4);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v11);
  }
  return v8;
}
