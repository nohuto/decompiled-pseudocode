__int64 __fastcall ExpSetKernelDataProtection(__int64 a1, __int64 a2, char a3, char a4)
{
  void *v7; // rcx
  __int64 *v8; // rsi
  __int64 *v9; // rax
  __int64 Pool2; // rbx
  __int64 *v11; // rax
  __int64 *v12; // r12
  char v13; // al
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+28h] [rbp-40h]
  __int64 *v18; // [rsp+30h] [rbp-38h]
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  if ( !a2 )
  {
    v14 = -1073741811;
    goto LABEL_26;
  }
  if ( (a4 & 1) == 0 && !*(_QWORD *)(a1 + 46832) )
  {
    v14 = 0;
    goto LABEL_26;
  }
  ExAcquirePushLockExclusiveEx(a1 + 47024, 0LL);
  v9 = *(__int64 **)(a1 + 47016);
  if ( v9 )
  {
    v19 = *v9;
    v16 = sub_14075B378(&v19);
    if ( v16 >= 0 )
    {
      Pool2 = v19;
LABEL_7:
      if ( (a3 & 1) != 0 )
        *(_QWORD *)Pool2 = *(_QWORD *)a2;
      if ( (a3 & 2) != 0 )
        *(_DWORD *)(Pool2 + 8) = *(_DWORD *)(a2 + 8);
      if ( (a3 & 4) != 0 )
        *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a2 + 16);
      if ( (a3 & 8) != 0 )
        *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a2 + 24);
      if ( (a3 & 0x10) != 0 )
        *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a2 + 32);
      if ( (a3 & 0x20) != 0 )
        *(_BYTE *)(Pool2 + 40) = *(_BYTE *)(a2 + 40);
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 48LL, 542329939LL);
    P = (PVOID)Pool2;
    if ( Pool2 && (v11 = (__int64 *)ExAllocatePool2(256LL, 8LL, 542329939LL), v12 = v11, (v18 = v11) != 0LL) )
    {
      *v11 = Pool2;
      v19 = Pool2;
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = 0LL;
      *(_DWORD *)(Pool2 + 8) = 4;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_BYTE *)(Pool2 + 40) = 1;
      v16 = sub_14084DF70(v11);
      if ( v16 >= 0 )
      {
        *(_QWORD *)(a1 + 47016) = v12;
        P = 0LL;
        v18 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v16 = -1073741801;
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 47024), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 47024));
  KeAbPostRelease(a1 + 47024);
  v14 = v16;
  v7 = P;
  v8 = v18;
LABEL_26:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return v14;
}
