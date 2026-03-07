void __fastcall DXGADAPTER::PowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int *v5; // rbx
  unsigned int v6; // eax
  int v7; // r8d
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  void (__fastcall *v17)(_QWORD, __int64); // rax
  unsigned int v18; // ecx
  __int64 v19; // r14
  unsigned int v20; // edi
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  unsigned int v23; // edx
  int v24; // eax
  __int64 *v25; // rax
  __int64 *v26; // rcx
  __int64 **v27; // rdx
  int v28; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  char v30; // [rsp+58h] [rbp-50h]
  char *v31; // [rsp+68h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+70h] [rbp-38h] BYREF
  char v33; // [rsp+88h] [rbp-20h]

  v5 = (unsigned int *)(*((_QWORD *)this + 378) + 520LL * a2);
  *((_BYTE *)v5 + 356) = a3;
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v6 = v5[52];
    if ( v6 )
    {
      if ( v6 == 3 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned __int8))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 366) + 760LL)
                                                                                            + 8LL)
                                                                                + 744LL))(
          *(_QWORD *)(*((_QWORD *)this + 366) + 768LL),
          *((unsigned __int16 *)v5 + 3),
          v5[53],
          *v5,
          a3);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 366) + 736LL)
                                                                         + 8LL)
                                                             + 808LL))(
        *(_QWORD *)(*((_QWORD *)this + 366) + 744LL),
        *((unsigned __int16 *)v5 + 3),
        v5[53],
        a3);
    }
    if ( !*((_BYTE *)v5 + 357) || (int)v5[97] <= 0 )
      goto LABEL_9;
    v30 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 436, &LockHandle);
    *((_QWORD *)this + 437) = KeGetCurrentThread();
    v30 = 1;
    if ( a3 )
    {
      v8 = v5 + 100;
      v9 = *((_QWORD *)v5 + 50);
      if ( !v9 )
        goto LABEL_8;
      if ( *(_QWORD **)(v9 + 8) != v8 )
        goto LABEL_35;
      v22 = (_QWORD *)*((_QWORD *)v5 + 51);
      if ( (_QWORD *)*v22 != v8 )
        goto LABEL_35;
      *v22 = v9;
      *(_QWORD *)(v9 + 8) = v22;
      *v8 = 0LL;
    }
    else
    {
      v10 = v5[96];
      if ( v5[104] )
      {
        if ( v10 )
        {
          v18 = v5[1];
          v5[96] = 0;
          v19 = **((_QWORD **)this + 414);
          if ( *((_BYTE *)this + 3465) )
          {
            v20 = (unsigned __int16)v18 + *((unsigned __int16 *)this + ((unsigned __int64)v18 >> 16) + 1520);
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0pqx_EtwWriteTransfer(
                v18,
                (unsigned int)&Dxgk_SetPowerComponentLatencyCB,
                v7,
                (_DWORD)this,
                v20,
                v19);
            v21 = *((_QWORD *)this + 378) + 520LL * v20;
            if ( v19 != *(_QWORD *)(v21 + 368) )
            {
              *(_QWORD *)(v21 + 368) = v19;
              PoFxSetComponentLatency(*((_QWORD *)this + 379), v20, v19);
            }
          }
        }
        v11 = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v5 + 49) = MEMORY[0xFFFFF78000000320];
        *((_QWORD *)v5 + 49) = v11 + *(_QWORD *)(*((_QWORD *)this + 414) + 8LL);
        v12 = v5 + 100;
        if ( !*((_QWORD *)v5 + 50) )
        {
          v13 = (_QWORD *)((char *)this + 3472);
          v14 = *((_QWORD *)this + 434);
          if ( *(DXGADAPTER **)(v14 + 8) != (DXGADAPTER *)((char *)this + 3472) )
            goto LABEL_35;
          *v12 = v14;
          *((_QWORD *)v5 + 51) = v13;
          *(_QWORD *)(v14 + 8) = v12;
          *v13 = v12;
        }
        if ( !*((_BYTE *)this + 3460) )
        {
          v15 = *((_QWORD *)this + 366);
          *((_BYTE *)this + 3460) = 1;
          v16 = *(_QWORD *)(*(_QWORD *)(v15 + 736) + 8LL);
          v17 = *(void (__fastcall **)(_QWORD, __int64))(v16 + 864);
          LOBYTE(v16) = 1;
          v17(*(_QWORD *)(v15 + 744), v16);
        }
      }
      else
      {
        if ( v10 == 2 )
          goto LABEL_8;
        v23 = v5[1];
        v5[96] = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v23, *(_QWORD *)(*((_QWORD *)this + 414) + 32LL));
      }
    }
    if ( !v30 )
    {
LABEL_9:
      if ( v5[52] || !*((_QWORD *)this + 423) )
        return;
      v33 = 0;
      v31 = (char *)this + 3488;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 436, &v32);
      *((_QWORD *)this + 437) = KeGetCurrentThread();
      v24 = *((_DWORD *)this + 796);
      v33 = 1;
      if ( !a3 )
      {
        v28 = v24 - 1;
        *((_DWORD *)this + 796) = v28;
        if ( v28 )
          goto LABEL_48;
        DXGADAPTER::ScheduleAdapterActivityCheck(this);
LABEL_47:
        if ( !v33 )
          return;
LABEL_48:
        v33 = 0;
        *((_QWORD *)v31 + 1) = 0LL;
        KeReleaseInStackQueuedSpinLock(&v32);
        return;
      }
      if ( v24 )
      {
LABEL_44:
        ++*((_DWORD *)this + 796);
        goto LABEL_47;
      }
      v25 = (__int64 *)(*((_QWORD *)this + 423) + 400LL);
      v26 = (__int64 *)*v25;
      if ( !*v25 )
      {
LABEL_42:
        if ( *((_DWORD *)this + 867) )
        {
          *((_DWORD *)this + 867) = 0;
          DXGADAPTER::UpdateLatencyTolerances(this);
        }
        goto LABEL_44;
      }
      if ( (__int64 *)v26[1] == v25 )
      {
        v27 = *(__int64 ***)(*((_QWORD *)this + 423) + 408LL);
        if ( *v27 == v25 )
        {
          *v27 = v26;
          v26[1] = (__int64)v27;
          *(_QWORD *)(*((_QWORD *)this + 423) + 400LL) = 0LL;
          goto LABEL_42;
        }
      }
LABEL_35:
      __fastfail(3u);
    }
LABEL_8:
    v30 = 0;
    *((_QWORD *)this + 437) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_9;
  }
}
