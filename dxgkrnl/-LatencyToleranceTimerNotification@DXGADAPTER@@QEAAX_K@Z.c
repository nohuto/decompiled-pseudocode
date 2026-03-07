void __fastcall DXGADAPTER::LatencyToleranceTimerNotification(KSPIN_LOCK *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r8d
  _QWORD *v7; // r15
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r12
  unsigned int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  KSPIN_LOCK v19; // rcx
  __int64 v20; // rdx
  void (__fastcall *v21)(_QWORD, __int64); // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  KSPIN_LOCK v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  char v31; // [rsp+58h] [rbp-40h]
  int v32; // [rsp+A0h] [rbp+8h]
  __int64 v33; // [rsp+B0h] [rbp+18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0_EtwWriteTransfer(this, &Dxgk_LatencyToleranceTimer, a3, a4);
  v31 = 0;
  KeAcquireInStackQueuedSpinLock(this + 436, &LockHandle);
  v7 = this + 434;
  this[437] = (KSPIN_LOCK)KeGetCurrentThread();
  v8 = (_QWORD *)this[434];
  v31 = 1;
  while ( v8 != v7 )
  {
    v9 = v8;
    v10 = v8;
    v8 = (_QWORD *)*v8;
    if ( *((_BYTE *)v9 - 44) || *((_DWORD *)v9 - 14) == *((_DWORD *)v9 - 98) - 1 )
    {
      if ( (_QWORD *)v8[1] != v10 || (v29 = (_QWORD *)v10[1], (_QWORD *)*v29 != v10) )
LABEL_39:
        __fastfail(3u);
      *v29 = v8;
      v8[1] = v29;
LABEL_19:
      *v10 = 0LL;
    }
    else if ( *(v9 - 1) <= a2 )
    {
      v11 = *((_DWORD *)v9 - 48);
      if ( v11 )
      {
        if ( v11 == 6 )
        {
          v25 = *((_DWORD *)this + 867);
          switch ( v25 )
          {
            case 0:
              *((_DWORD *)this + 867) = 1;
              v26 = this[418];
LABEL_33:
              *(v9 - 1) = a2 + v26;
              goto LABEL_35;
            case 1:
              *((_DWORD *)this + 867) = 2;
              v26 = this[420];
              goto LABEL_33;
            case 2:
              *((_DWORD *)this + 867) = 3;
              v27 = *v10;
              if ( *(_QWORD **)(*v10 + 8LL) != v10 )
                goto LABEL_39;
              v28 = (_QWORD *)v10[1];
              if ( (_QWORD *)*v28 != v10 )
                goto LABEL_39;
              *v28 = v27;
              *(_QWORD *)(v27 + 8) = v28;
              *v10 = 0LL;
LABEL_35:
              DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)this);
              break;
          }
        }
      }
      else
      {
        v12 = *((int *)v9 - 4);
        v32 = v12 + 1;
        v13 = *((_DWORD *)v9 - 99);
        v33 = 16 * (v12 + 1);
        v14 = *(_QWORD *)(v33 + this[414]);
        if ( *((_BYTE *)this + 3465) )
        {
          v15 = (unsigned __int16)v13 + *((unsigned __int16 *)this + ((unsigned __int64)v13 >> 16) + 1520);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0pqx_EtwWriteTransfer(
              v13,
              (unsigned int)&Dxgk_SetPowerComponentLatencyCB,
              v6,
              (_DWORD)this,
              v15,
              v14);
          v16 = this[378] + 520LL * v15;
          if ( v14 != *(_QWORD *)(v16 + 368) )
          {
            *(_QWORD *)(v16 + 368) = v14;
            PoFxSetComponentLatency(this[379], v15, v14);
          }
        }
        *((_DWORD *)v9 - 4) = v32;
        *(v9 - 1) = a2 + *(_QWORD *)(this[414] + v33 + 8);
        if ( v32 == *((_DWORD *)v9 - 3) )
        {
          v17 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) != v10 )
            goto LABEL_39;
          v18 = (_QWORD *)v10[1];
          if ( (_QWORD *)*v18 != v10 )
            goto LABEL_39;
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          goto LABEL_19;
        }
      }
    }
  }
  if ( (_QWORD *)*v7 == v7 )
    *((_BYTE *)this + 3460) = 0;
  v19 = this[366];
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 736) + 8LL);
  v21 = *(void (__fastcall **)(_QWORD, __int64))(v20 + 864);
  LOBYTE(v20) = *((_BYTE *)this + 3460);
  v21(*(_QWORD *)(v19 + 744), v20);
  if ( v31 )
  {
    v31 = 0;
    this[437] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0_EtwWriteTransfer(v22, &Dxgk_LatencyToleranceTimerEnd, v23, v24);
  }
}
