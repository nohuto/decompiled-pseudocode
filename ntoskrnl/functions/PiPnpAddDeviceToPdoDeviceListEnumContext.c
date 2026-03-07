__int64 __fastcall PiPnpAddDeviceToPdoDeviceListEnumContext(unsigned int *a1, __int64 a2)
{
  unsigned int *v2; // rdi
  __int64 v5; // rax
  __int64 v7; // rsi
  unsigned int *Pool2; // rax
  const void *v9; // rdx

  v2 = (unsigned int *)*((_QWORD *)a1 + 1);
  if ( v2 )
  {
    v5 = *v2;
    if ( (_DWORD)v5 != *a1 )
    {
LABEL_3:
      *(_QWORD *)&v2[2 * v5 + 2] = a2;
      ++**((_DWORD **)a1 + 1);
      return 0LL;
    }
  }
  v7 = *a1 + 256;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, 8 * v7 + 8, 538996816LL);
  v2 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0;
    v9 = (const void *)*((_QWORD *)a1 + 1);
    if ( v9 )
    {
      memmove(Pool2, v9, 8LL * *a1 + 8);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    *a1 = v7;
    *((_QWORD *)a1 + 1) = v2;
    v5 = *v2;
    goto LABEL_3;
  }
  return 3221225626LL;
}
