__int64 __fastcall DpUnmapMemory(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 *v4; // rdi
  char v5; // r14
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 *v10; // rdx
  __int64 **v11; // rcx

  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( a1
    && a2
    && (v6 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v6 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v6 + 20) - 2) <= 1 )
  {
    if ( KeGetCurrentIrql() )
      WdLogSingleEntry1(3LL, -1073741811LL);
    KeWaitForSingleObject((PVOID)(v6 + 2520), Executive, 0, 0, 0LL);
    v7 = *(__int64 **)(v6 + 2504);
    v8 = v7;
    if ( (__int64 *)*v7 != v7 )
    {
      while ( 1 )
      {
        v4 = v7;
        if ( v7[8] == a2 )
          break;
        v7 = (__int64 *)*v7;
        if ( (__int64 *)*v7 == v8 )
          goto LABEL_14;
      }
      if ( (*((_DWORD *)v7 + 6))-- == 1 )
      {
        v10 = (__int64 *)*v7;
        if ( *(__int64 **)(*v7 + 8) != v7 || (v11 = (__int64 **)v7[1], *v11 != v7) )
          __fastfail(3u);
        *v11 = v10;
        v5 = 1;
        v10[1] = (__int64)v11;
      }
    }
LABEL_14:
    KeReleaseMutex((PRKMUTEX)(v6 + 2520), 0);
    if ( v5 == 1 )
    {
      if ( *((_BYTE *)v4 + 72) == 1 )
      {
        if ( *((_BYTE *)v4 + 45) == 1 )
          v2 = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)v4[8]);
        else
          MmUnmapIoSpace((PVOID)v4[8], *((unsigned int *)v4 + 10));
      }
      ExFreePoolWithTag(v4, 0x74727044u);
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
  }
  return v2;
}
