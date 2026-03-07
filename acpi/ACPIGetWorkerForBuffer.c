void __fastcall ACPIGetWorkerForBuffer(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // edi
  char v8; // r14
  unsigned int v9; // eax
  void *Pool2; // rax
  void *v11; // rbp
  _QWORD *v12; // rax
  _DWORD *v13; // rcx
  void (__fastcall *v14)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v15; // al
  _QWORD **v16; // r9
  void **v17; // r8

  v6 = a2;
  v8 = 1;
  if ( a2 < 0 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  if ( *(_WORD *)(a3 + 2) != 3 )
  {
    if ( (*(_DWORD *)a4 & 0x40000000) != 0 )
      KeBugCheckEx(0xA3u, 1uLL, 0x60E66uLL, 0LL, 0LL);
    goto LABEL_6;
  }
  v9 = *(_DWORD *)(a3 + 24);
  if ( !v9 )
  {
LABEL_6:
    v6 = -1072431089;
    goto LABEL_13;
  }
  Pool2 = (void *)ExAllocatePool2(
                    (-(__int64)((*(_DWORD *)a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                    v9,
                    1114661697LL);
  v11 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v12 = (_QWORD *)a4[7];
    if ( v12 )
    {
      *v12 = v11;
      v13 = (_DWORD *)a4[8];
      if ( v13 )
        *v13 = *(_DWORD *)(a3 + 24);
    }
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_13:
  *((_DWORD *)a4 + 18) = v6;
  if ( v8 )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1LL);
  }
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v14 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v14 )
      v14(a1, v6, 0LL, a4[6]);
    v15 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v16 = (_QWORD **)a4[1];
    if ( v16[1] != a4 + 1 || (v17 = (void **)a4[2], *v17 != a4 + 1) )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = v17;
    KeReleaseSpinLock(&AcpiGetLock, v15);
    ExFreePoolWithTag(a4, 0);
  }
}
