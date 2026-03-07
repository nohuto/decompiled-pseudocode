void __fastcall DXGPROCESSVM::FlushDevicesForTermination(DXGPROCESSVM *this)
{
  char *v2; // rsi
  __int64 Current; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  char *v7; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *i; // [rsp+28h] [rbp-30h]
  _BYTE v9[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+40h] [rbp-18h]

  v2 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  v7 = (char *)this + 320;
  for ( i = (_QWORD *)*((_QWORD *)this + 40); ; i = (_QWORD *)*i )
  {
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v7);
    v4 = Current;
    if ( !Current )
      break;
    v5 = *(_QWORD *)(Current + 16);
    v11 = 0;
    v10 = *(_QWORD *)(v5 + 16);
    v6 = v10;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
    if ( *(_DWORD *)(v6 + 200) == 1 && *(_DWORD *)(v4 + 608) == 1 )
      DXGDEVICE::FlushScheduler((_QWORD *)v4, 4u, 0xFFFFFFFD, 0);
    if ( v11 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
