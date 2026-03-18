/*
 * XREFs of ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C007B2F8
 * Callers:
 *     GreDwmShutdown @ 0x1C0054344 (GreDwmShutdown.c)
 *     GreDesktopSwitch @ 0x1C006CE0C (GreDesktopSwitch.c)
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C007BCA4 (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 *     GreDwmStartup @ 0x1C00B10F8 (GreDwmStartup.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C007C9F4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpRenderHint(struct PDEVOBJ *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v10; // rax
  Gre::Base *v11; // rcx
  __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+40h] [rbp-68h]
  int v15; // [rsp+48h] [rbp-60h]
  _QWORD v16[10]; // [rsp+50h] [rbp-58h] BYREF

  v8 = -1073741822;
  if ( (unsigned int)bNeedRenderHint(a1) )
  {
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v16);
    v16[8] = 0LL;
    v16[7] = 0LL;
    v16[0] = 0LL;
    v10 = *(_QWORD *)a1;
    v13 = 0LL;
    v15 = 1;
    v11 = (Gre::Base *)*(unsigned int *)(v10 + 40);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      Gre::Base::Globals(v11);
      v12 = *(_QWORD *)a1;
      *(_QWORD *)&v13 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v14 = v12;
      GreAcquireSemaphore(v13);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v13, 11LL);
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 3408LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 1768LL),
           a2,
           a3,
           a4);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v13);
  }
  return v8;
}
