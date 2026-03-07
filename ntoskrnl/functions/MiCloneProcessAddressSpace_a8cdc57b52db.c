__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  char v3; // r12
  int v6; // r13d
  int v7; // r15d
  _QWORD *v8; // r14
  _KPROCESS *Process; // rdi
  int v11; // r12d
  int v12; // edi
  _QWORD *v13; // r12
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rax
  int v21; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v23; // [rsp+40h] [rbp-39h]
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25; // [rsp+50h] [rbp-29h]
  unsigned __int64 v26; // [rsp+58h] [rbp-21h]
  _KPROCESS *v27; // [rsp+60h] [rbp-19h]
  $115DCDF994C6370D29323EAB0E0C9502 v28; // [rsp+68h] [rbp-11h] BYREF

  v23 = a3;
  v24 = 0LL;
  memset(&v28, 0, sizeof(v28));
  v3 = a3;
  v6 = 0;
  v7 = 1;
  P = 0LL;
  v8 = 0LL;
  v21 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v27 = Process;
  if ( (unsigned int)MiIsStoreProcess((__int64)BugCheckParameter1) )
    return 3221225659LL;
  MiLockDownWorkingSet(a2, 1);
  if ( Process != BugCheckParameter1 )
  {
    v6 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v28);
  }
  v11 = v3 & 1;
  v26 = BugCheckParameter1[1].ActiveProcessors.StaticBitmap[28];
  if ( *(_QWORD *)(v26 + 344) && !v11 )
  {
    v12 = -1073741637;
    goto LABEL_11;
  }
  v25 = MiLockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 1);
  if ( !v25 )
  {
    v12 = -1073741558;
LABEL_10:
    MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v25, 1);
    goto LABEL_11;
  }
  v12 = MiCreateCloneChain(a2, &P);
  if ( v12 < 0 )
    goto LABEL_10;
  v12 = MiAllocateChildVads((ULONG_PTR)a2, &v24);
  if ( v12 < 0 )
    goto LABEL_10;
  if ( v11 )
  {
    v15 = MiBuildNewCloneDescriptor(a2, 2LL, *(_QWORD *)(v26 + 344));
    v8 = v15;
    if ( !v15 )
    {
      v12 = -1073741670;
      goto LABEL_10;
    }
    memset((void *)v15[3], 0, 32LL * v15[5]);
    *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0xF07FFFFFFFFFFFFFuLL | 0x200000000000000LL;
    *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0xF07FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  }
  v12 = MiCloneVads(BugCheckParameter1, (__int64)a2, (__int64)P, (__int64)v8, v23, &v21);
  if ( v12 < 0 )
    goto LABEL_10;
  P = 0LL;
  v12 = MiMapChildLargePageVads(a2, v24);
  MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v25, 1);
  if ( v6 )
  {
    KiUnstackDetachProcess(&v28);
    v6 = 0;
  }
  if ( v27 != a2 )
  {
    v6 = 1;
    KiStackAttachProcess(a2, 0, (__int64)&v28);
  }
  MiCreateForkWsles();
  if ( v8 )
  {
    v16 = v8[5];
    v17 = 0LL;
    v18 = 0;
    if ( !v16 )
      goto LABEL_38;
    v19 = v8[3];
    v20 = 0LL;
    do
    {
      ++v18;
      v17 += *(_QWORD *)(32 * v20 + v19 + 24);
      v20 = v18;
    }
    while ( v18 < v16 );
    if ( v17 )
    {
      v8[6] = v17;
      MiInsertClone((__int64)a2, (unsigned __int64)v8, 0LL, v19);
    }
    else
    {
LABEL_38:
      MiFreeCloneDescriptor(a2, v8);
    }
    v8 = 0LL;
  }
  if ( v12 >= 0 )
  {
    MiLockDownWorkingSet(a2, 0);
    v7 = 0;
    if ( v6 )
    {
      KiUnstackDetachProcess(&v28);
      v6 = 0;
    }
    if ( !v21 )
      return (unsigned int)v12;
    v12 = -1073741670;
  }
LABEL_11:
  v13 = P;
  if ( P )
  {
    do
    {
      v14 = (_QWORD *)*v13;
      PsReturnProcessNonPagedPoolQuota(a2, v13[8]);
      ExFreePoolWithTag(v13, 0);
      v13 = v14;
    }
    while ( v14 );
  }
  if ( v8 )
    MiFreeCloneDescriptor(a2, v8);
  if ( v6 )
    KiUnstackDetachProcess(&v28);
  if ( v7 )
    MiLockDownWorkingSet(a2, 0);
  MiDeleteInsertedCloneVads(a2);
  return (unsigned int)v12;
}
