/*
 * XREFs of ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0009C2C
 * Callers:
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C0165644 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C01B450C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C01B5FEC (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8C74 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C0009F40 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C001CE04 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGADAPTER::NotifyContextCreation(DXGADAPTER *this, struct DXGCONTEXT *a2, char a3, int a4)
{
  unsigned int i; // ebp
  __int64 v9; // rsi
  signed __int32 v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  void (__fastcall *v21)(_QWORD, __int64); // rax
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rax
  __int64 **v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  char v27; // [rsp+48h] [rbp-30h]

  if ( *((_DWORD *)a2 + 36) != 2 && (*((_DWORD *)a2 + 101) & 8) == 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 792); ++i )
    {
      v9 = *((_QWORD *)this + 378) + 520LL * i;
      if ( *(_DWORD *)(v9 + 208)
        || (a4 != *(_DWORD *)(v9 + 212) || *((_DWORD *)a2 + 100) != *(unsigned __int16 *)(v9 + 6))
        && !*(_BYTE *)(v9 + 358) )
      {
        continue;
      }
      v27 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 436, &LockHandle);
      *((_QWORD *)this + 437) = KeGetCurrentThread();
      v11 = *(_DWORD *)(v9 + 416);
      v27 = 1;
      if ( a3 )
      {
        v12 = v11 + 1;
        *(_DWORD *)(v9 + 416) = v12;
        if ( v12 == 1 )
        {
          v14 = *(_DWORD *)(v9 + 4);
          *(_DWORD *)(v9 + 384) = 0;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v14, **((_QWORD **)this + 414));
          if ( *(int *)(v9 + 388) > 0 )
          {
            v15 = MEMORY[0xFFFFF78000000320];
            *(_QWORD *)(v9 + 392) = MEMORY[0xFFFFF78000000320];
            *(_QWORD *)(v9 + 392) = v15 + *(_QWORD *)(*((_QWORD *)this + 414) + 8LL);
            v16 = (_QWORD *)(v9 + 400);
            if ( !*v16 )
            {
              v17 = (_QWORD *)((char *)this + 3472);
              v18 = *((_QWORD *)this + 434);
              if ( *(DXGADAPTER **)(v18 + 8) != (DXGADAPTER *)((char *)this + 3472) )
                goto LABEL_34;
              *v16 = v18;
              v16[1] = v17;
              *(_QWORD *)(v18 + 8) = v16;
              *v17 = v16;
            }
            if ( !*((_BYTE *)this + 3460) )
            {
              v19 = *((_QWORD *)this + 366);
              *((_BYTE *)this + 3460) = 1;
              v20 = *(_QWORD *)(*(_QWORD *)(v19 + 736) + 8LL);
              v21 = *(void (__fastcall **)(_QWORD, __int64))(v20 + 864);
              LOBYTE(v20) = 1;
              v21(*(_QWORD *)(v19 + 744), v20);
            }
          }
          goto LABEL_26;
        }
      }
      else
      {
        v13 = v11 - 1;
        *(_DWORD *)(v9 + 416) = v13;
        if ( !v13 )
        {
          v22 = *(_DWORD *)(v9 + 4);
          *(_DWORD *)(v9 + 384) = 2;
          DXGADAPTER::SetPowerComponentLatencyCB(this, v22, *(_QWORD *)(*((_QWORD *)this + 414) + 32LL));
          v23 = (__int64 *)(v9 + 400);
          v24 = *v23;
          if ( *v23 )
          {
            if ( *(__int64 **)(v24 + 8) != v23 || (v25 = (__int64 **)v23[1], *v25 != v23) )
LABEL_34:
              __fastfail(3u);
            *v25 = (__int64 *)v24;
            *(_QWORD *)(v24 + 8) = v25;
            *v23 = 0LL;
          }
LABEL_26:
          if ( !v27 )
            continue;
        }
      }
      v27 = 0;
      *((_QWORD *)this + 437) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    if ( a3 )
      v10 = _InterlockedIncrement((volatile signed __int32 *)this + 795);
    else
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 795, 0xFFFFFFFF);
    if ( v10 == 1 )
    {
      if ( *((_QWORD *)this + 379) )
        DXGADAPTER::UpdateLatencyTolerances(this);
    }
  }
}
