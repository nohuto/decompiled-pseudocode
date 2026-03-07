__int64 __fastcall PopGetPowerRequestListInfo(_QWORD *a1, _DWORD *a2)
{
  PVOID *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 Pool2; // rax
  _QWORD *v8; // r14
  int v9; // ebx
  unsigned __int64 *v10; // rbp
  __int64 v11; // rax
  PVOID *v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  _DWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  PopAcquirePowerRequestPushLock(0);
  v4 = (PVOID *)PopPowerRequestObjectList;
  v5 = (8LL * (unsigned int)PopPowerRequestObjectCount + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  while ( v4 != &PopPowerRequestObjectList )
  {
    v6 = (__int64)v4[12];
    v20 = 0LL;
    PoStoreDiagnosticContext(v6, 0LL, &v20);
    v5 = (v20 + 39 + v5) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 > 0xFFFFFFFF )
    {
      v9 = -1073741789;
      goto LABEL_17;
    }
    v4 = (PVOID *)*v4;
  }
  Pool2 = ExAllocatePool2(256LL, v5, 544040269LL);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v10 = (unsigned __int64 *)(Pool2 + 8);
    v11 = (unsigned int)PopPowerRequestObjectCount;
    *v8 = (unsigned int)PopPowerRequestObjectCount;
    v12 = (PVOID *)PopPowerRequestObjectList;
    v13 = (8 * v11 + 15) & 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v5 - v13;
    while ( 1 )
    {
      if ( v12 == &PopPowerRequestObjectList )
      {
        *a1 = v8;
        v9 = 0;
        *a2 = v13;
        goto LABEL_17;
      }
      if ( v14 < 0x48 )
        break;
      *(_DWORD *)((char *)v8 + v13) = *((_DWORD *)v12 + 5);
      v15 = (_DWORD *)((char *)v8 + v13 + 4);
      v16 = 6LL;
      do
      {
        *v15 = *(_DWORD *)((char *)v15 + (char *)v12 - ((char *)v8 + v13) + 36);
        ++v15;
        --v16;
      }
      while ( v16 );
      v17 = (__int64)v12[12];
      v20 = v14 - 32;
      v9 = PoStoreDiagnosticContext(v17, (_QWORD *)((char *)v8 + v13 + 32), &v20);
      if ( v9 < 0 )
        goto LABEL_19;
      v18 = (v20 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v14 < v18 )
        break;
      *v10 = v13;
      v14 -= v18;
      v12 = (PVOID *)*v12;
      v13 += v18;
      ++v10;
    }
    v9 = -1073741789;
LABEL_19:
    ExFreePoolWithTag(v8, 0x206D654Du);
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_17:
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return (unsigned int)v9;
}
