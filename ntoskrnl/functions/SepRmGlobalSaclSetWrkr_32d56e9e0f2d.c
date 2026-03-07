void __fastcall SepRmGlobalSaclSetWrkr(__int64 a1, __int64 a2)
{
  size_t v2; // rsi
  const void *v3; // r12
  char v5; // r15
  int GlobalSacl; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  _QWORD *Pool2; // rbx
  void *v13; // rax
  _WORD v14[2]; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+24h] [rbp-14h]
  __int64 v16; // [rsp+28h] [rbp-10h]
  int v17; // [rsp+80h] [rbp+48h] BYREF
  PVOID P; // [rsp+88h] [rbp+50h] BYREF
  PVOID v19; // [rsp+90h] [rbp+58h] BYREF
  _QWORD *v20; // [rsp+98h] [rbp+60h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 44);
  v3 = (const void *)(a1 + 46);
  v19 = 0LL;
  v15 = 0;
  v14[1] = v2;
  v14[0] = v2;
  v16 = a1 + 46;
  v20 = 0LL;
  v5 = 0;
  v17 = 0;
  P = 0LL;
  GlobalSacl = SepRmFetchGlobalSacl(v14, &v17, &P);
  if ( GlobalSacl >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = 1;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&SepRmGlobalSaclLock, 1u);
    GlobalSacl = SepRmGlobalSaclFind(&v19, &v20, v14, 0LL);
    if ( GlobalSacl < 0 )
    {
      if ( !v17 )
        goto LABEL_2;
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1818448711LL);
      if ( Pool2 )
      {
        v13 = (void *)ExAllocatePool2(256LL, v2, 1818448711LL);
        Pool2[2] = v13;
        if ( v13 )
        {
          *((_WORD *)Pool2 + 5) = v2;
          *((_WORD *)Pool2 + 4) = v2;
          memmove(v13, v3, v2);
          Pool2[3] = P;
          *Pool2 = SepRmGlobalSaclHead;
          P = 0LL;
          SepRmGlobalSaclHead = (__int64)Pool2;
          goto LABEL_2;
        }
        ExFreePoolWithTag(Pool2, 0);
      }
      GlobalSacl = -1073741801;
      goto LABEL_2;
    }
    v8 = v19;
    if ( v17 )
    {
      v9 = (void *)*((_QWORD *)v19 + 3);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      v8[3] = P;
      goto LABEL_11;
    }
    if ( v20 )
      *v20 = *(_QWORD *)v19;
    else
      SepRmGlobalSaclHead = *(_QWORD *)v19;
    v10 = (void *)v8[2];
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      v8[2] = 0LL;
    }
    v11 = (void *)v8[3];
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v8[3] = 0LL;
    }
    ExFreePoolWithTag(v8, 0);
  }
LABEL_2:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v5 )
  {
LABEL_11:
    ExReleaseResourceLite(&SepRmGlobalSaclLock);
    KeLeaveCriticalRegion();
  }
  *(_DWORD *)(a2 + 40) = GlobalSacl;
}
