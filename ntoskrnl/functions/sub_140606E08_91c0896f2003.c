__int64 __fastcall sub_140606E08(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  void *v3; // rsi
  _DWORD *Pool2; // r14
  int v5; // edi
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // r9
  struct _LIST_ENTRY *Blink; // rbx
  void *v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+40h] [rbp-11h]
  const wchar_t *v12; // [rsp+48h] [rbp-9h]
  __int64 v13; // [rsp+50h] [rbp-1h]
  int v14; // [rsp+58h] [rbp+7h]
  __int64 v15; // [rsp+60h] [rbp+Fh]
  int v16; // [rsp+68h] [rbp+17h]
  __int64 v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+78h] [rbp+27h]
  __int64 v19; // [rsp+80h] [rbp+2Fh]
  __int64 v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  __int64 v22; // [rsp+98h] [rbp+47h]
  int v23; // [rsp+A0h] [rbp+4Fh]

  Flink = (struct _LIST_ENTRY *)&PspHostSiloGlobals;
  if ( a1 )
    Flink = a1[93].Flink;
  v3 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 81928LL, 1767066707LL);
  if ( Pool2 && (v6 = ExAllocatePool2(256LL, 47040LL, 1767066707LL), (v3 = (void *)v6) != 0LL) )
  {
    Pool2[20481] = 0;
    v15 = 0LL;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
    v22 = 0LL;
    v23 = 0;
    Pool2[20480] = 81920;
    *(_DWORD *)(v6 + 47036) = -1;
    *(_QWORD *)v6 = Pool2;
    Flink[56].Blink = (struct _LIST_ENTRY *)v6;
    v10 = &ExpQueryRegistryRoutine;
    v16 = 81920;
    v12 = L"ProductPolicy";
    v11 = 256;
    v14 = 50331651;
    v13 = v6;
    ExpInitLicensing(Flink);
    CurrentThread = KeGetCurrentThread();
    Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
    CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = a1;
    v5 = RtlQueryRegistryValuesEx(2LL, L"ProductOptions", &v10, 0LL, 0LL);
    ExInitLicenseData();
    KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
    if ( v5 >= 0 )
      return (unsigned int)v5;
  }
  else
  {
    v5 = -1073741801;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x69534C53u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x69534C53u);
  return (unsigned int)v5;
}
