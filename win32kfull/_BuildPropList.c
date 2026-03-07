__int64 __fastcall BuildPropList(__int64 a1, char *a2, unsigned int a3, _DWORD *a4)
{
  SIZE_T v7; // r15
  char *v8; // r12
  __int64 v9; // rbx
  _DWORD *v10; // rdx
  int v11; // r9d
  __int64 v12; // r8
  int v13; // r10d
  unsigned int v14; // edx
  unsigned int v15; // ebx
  __int64 v16; // rcx
  _BYTE v18[48]; // [rsp+48h] [rbp-60h] BYREF

  v7 = 16LL * a3;
  v8 = &a2[v7 - 16];
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v18,
    *(tagObjLock **)(a1 + 144));
  LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144));
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
  if ( v9 )
  {
    ProbeForWrite(a2, v7, 4u);
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = v9 + 8;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    while ( v11 )
    {
      if ( &a2[16 * v14] > v8 )
      {
        v14 = 0;
        v15 = -1073741789;
      }
      if ( (*(_BYTE *)(v12 + 10) & 1) == 0 )
      {
        v16 = 2LL * v14;
        *(_QWORD *)&a2[8 * v16] = *(_QWORD *)v12;
        *(_WORD *)&a2[8 * v16 + 8] = *(_WORD *)(v12 + 8);
        ++v14;
        ++v13;
      }
      v12 += 16LL;
      --v11;
    }
    *a4 = v13;
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v18);
    return v15;
  }
  else
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_DWORD *)MmUserProbeAddress;
    *a4 = 0;
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(v18);
    return 0LL;
  }
}
