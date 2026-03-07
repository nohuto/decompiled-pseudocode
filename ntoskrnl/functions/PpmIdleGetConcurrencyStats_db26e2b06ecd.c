__int64 __fastcall PpmIdleGetConcurrencyStats(int a1, __int16 a2, PVOID *a3, unsigned int *a4)
{
  int v5; // edi
  unsigned int *v6; // r12
  PVOID *v7; // r13
  _WORD *ParkNode; // rax
  _WORD *v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned int v13; // eax
  __int64 Pool2; // rax
  _DWORD *v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned int v18; // ebx
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-48h]

  v21 = 0;
  v5 = 0;
  *a3 = 0LL;
  v6 = a4;
  *a4 = 0;
  v7 = a3;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  ParkNode = PpmParkGetParkNode(a2);
  v10 = ParkNode;
  if ( ParkNode && (v11 = *((_QWORD *)ParkNode + 6)) != 0 )
  {
    if ( a1 == 76 )
    {
      v12 = 1;
    }
    else
    {
      v12 = *((unsigned __int8 *)ParkNode + 11);
      if ( (unsigned __int8)v12 <= 2u )
        v12 = 2;
    }
    v13 = 8 * (v12 + *(_DWORD *)(v11 + 8)) + 8;
    *v6 = v13;
    Pool2 = ExAllocatePool2(256LL, v13, 544040269LL);
    *v7 = (PVOID)Pool2;
    v15 = (_DWORD *)Pool2;
    if ( Pool2 )
    {
      if ( a1 == 76 )
      {
        memmove(
          (void *)(Pool2 + 8),
          (const void *)(*((_QWORD *)v10 + 6) + 328LL),
          8LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)v10 + 6) + 8LL) + 1));
        *v15 = *(_DWORD *)(*((_QWORD *)v10 + 6) + 8LL);
      }
      else
      {
        if ( a1 != 77 )
          goto LABEL_19;
        v16 = 0LL;
        if ( !*((_BYTE *)v10 + 11) )
          goto LABEL_19;
        do
        {
          if ( (unsigned int)v16 >= 2 )
            break;
          v17 = *(_QWORD *)(104LL * (unsigned int)v16 + *((_QWORD *)v10 + 23) + 32);
          if ( v17 )
          {
            v18 = *(_DWORD *)(v17 + 8) + 1;
            v5 = 1;
            memmove(&v15[2 * v21 + 2], (const void *)(v17 + 328), 8LL * v18);
            v21 += v18;
            v15[v16] = *(_DWORD *)(v17 + 8);
          }
          v16 = (unsigned int)(v16 + 1);
        }
        while ( (unsigned int)v16 < *((unsigned __int8 *)v10 + 11) );
        v7 = a3;
        v19 = v5 == 0;
        v5 = 0;
        if ( v19 )
LABEL_19:
          v5 = -1073741637;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    v6 = a4;
  }
  else
  {
    v5 = -1073741637;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  if ( v5 < 0 )
  {
    *v6 = 0;
    if ( *v7 )
    {
      ExFreePoolWithTag(*v7, 0x206D654Du);
      *v7 = 0LL;
    }
  }
  return (unsigned int)v5;
}
