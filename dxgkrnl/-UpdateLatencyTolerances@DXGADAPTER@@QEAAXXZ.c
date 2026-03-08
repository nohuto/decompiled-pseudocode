/*
 * XREFs of ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0009F40
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C2C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C000F410 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C0012AE0 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001CCF4 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?NotifyProcessThaw@DXGPROCESS@@QEAAXXZ @ 0x1C01654D0 (-NotifyProcessThaw@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180784 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C0186F04 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01EA4F4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001CE04 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::UpdateLatencyTolerances(DXGADAPTER *this)
{
  char *v1; // rdi
  unsigned __int64 v3; // rsi
  DXGADAPTER *v4; // rdi
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  int v9; // ecx
  unsigned int v10; // edx
  DXGADAPTER *v11; // rax
  KSPIN_LOCK *v12; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+48h] [rbp-10h]

  v1 = (char *)this + 3488;
  v12 = (KSPIN_LOCK *)((char *)this + 3488);
  v14 = 0;
  if ( *((struct _KTHREAD **)this + 437) != KeGetCurrentThread() )
  {
    KeAcquireInStackQueuedSpinLock(v12, &LockHandle);
    *((_QWORD *)v1 + 1) = KeGetCurrentThread();
    v14 = 1;
  }
  if ( *((_QWORD *)this + 423) && *((_DWORD *)this + 40) != 1 )
  {
    v5 = *((_DWORD *)this + 795);
    if ( *((_BYTE *)this + 3466) )
    {
      if ( !v5 )
      {
        v7 = *((_QWORD *)this + 424);
        v8 = *((_QWORD *)this + 430);
        goto LABEL_29;
      }
      v6 = *((_DWORD *)this + 867);
      if ( v6 )
      {
        if ( v6 != 2 )
        {
          v8 = *((_QWORD *)this + 429);
          if ( v6 == 3 )
            v7 = *((_QWORD *)this + 421);
          else
            v7 = *((_QWORD *)this + 417);
          goto LABEL_29;
        }
        v7 = *((_QWORD *)this + 419);
        goto LABEL_18;
      }
    }
    else
    {
      if ( !v5 || (v9 = *((_DWORD *)this + 867), (unsigned int)(v9 - 2) <= 1) )
      {
        v7 = *((_QWORD *)this + 425);
        v8 = *((_QWORD *)this + 431);
        goto LABEL_29;
      }
      if ( v9 )
      {
        v7 = *((_QWORD *)this + 417);
LABEL_18:
        v8 = *((_QWORD *)this + 429);
LABEL_29:
        if ( *((_BYTE *)this + 3464) )
          DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)this + 793), v7);
        v10 = *((_DWORD *)this + 794);
        if ( v10 != -1 )
          DXGADAPTER::SetPowerComponentLatencyCB(this, v10, v8);
        goto LABEL_4;
      }
    }
    v7 = *((_QWORD *)this + 415);
    v8 = *((_QWORD *)this + 428);
    goto LABEL_29;
  }
LABEL_4:
  if ( *((_DWORD *)this + 795) )
    v3 = *((_QWORD *)this + 426);
  else
    v3 = *((_QWORD *)this + 427);
  v4 = (DXGADAPTER *)*((_QWORD *)this + 441);
  while ( v4 != (DXGADAPTER *)((char *)this + 3528) )
  {
    v11 = v4;
    v4 = *(DXGADAPTER **)v4;
    if ( v3 == *((_QWORD *)v11 - 7) )
      break;
    DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v11 - 105), v3);
  }
  if ( v14 )
  {
    v14 = 0;
    v12[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
