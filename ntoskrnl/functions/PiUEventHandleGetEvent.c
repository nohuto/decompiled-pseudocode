__int64 __fastcall PiUEventHandleGetEvent(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rsi
  int v6; // edi
  unsigned int *v9; // r13
  unsigned int v10; // ebx
  _QWORD *v11; // r12
  _QWORD *v12; // r15
  __int64 v13; // rax
  unsigned int v14; // r13d
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+20h] [rbp-38h]
  unsigned int *v19; // [rsp+60h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  if ( v5 && a2 && a4 > 4 )
  {
    *a2 = 0;
    v9 = a2 + 1;
    v19 = a2 + 1;
    v10 = a4 - 4;
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 16));
    v11 = *(_QWORD **)(v5 + 112);
    if ( v11 != (_QWORD *)(v5 + 112) )
    {
      while ( v6 >= 0 )
      {
        v12 = v11;
        v18 = v11 + 3;
        v6 = PiUEventCopyEventData(v9, v10, v11[3]);
        if ( v6 < 0 )
        {
          if ( *a2 )
            break;
          *(_QWORD *)(a5 + 8) = 0LL;
          ExReleaseFastMutex(*(PFAST_MUTEX *)(v5 + 16));
          return (unsigned int)v6;
        }
        v13 = *v9;
        v14 = v10 - v13;
        if ( (unsigned int)v13 > v10 )
          v6 = -1073741789;
        else
          v19 = (unsigned int *)((char *)v19 + v13);
        ++*a2;
        v11 = (_QWORD *)*v11;
        if ( *(_BYTE *)(*v18 + 68LL) )
        {
          if ( (_QWORD *)v11[1] != v12
            || (v16 = (_QWORD *)v12[1], (_QWORD *)*v16 != v12)
            || (*v16 = v11, v11[1] = v16, --*(_DWORD *)(v5 + 128), v17 = *(_QWORD **)(v5 + 104), *v17 != v5 + 96) )
          {
            __fastfail(3u);
          }
          *v12 = v5 + 96;
          v12[1] = v17;
          *v17 = v12;
          *(_QWORD *)(v5 + 104) = v12;
        }
        else
        {
          PiUEventDequeuePendingEventWorker(v5, v12, 0);
        }
        v10 = v14;
        if ( v11 == (_QWORD *)(v5 + 112) )
          break;
        v9 = v19;
      }
    }
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v5 + 16));
    if ( v6 == -1073741789 )
    {
      v6 = 0;
      PiUEventNotifyClientPendingEvent(v5);
    }
    *(_QWORD *)(a5 + 8) = a4 - v10;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
