unsigned __int64 __fastcall CcChargeThreadForReadAhead(__int64 a1, __int64 a2, __int64 a3, int a4, struct _KTHREAD *a5)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  int v7; // r9d
  int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rdx

  result = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 48);
  if ( !*(_DWORD *)(*(_QWORD *)(result + 8) + 4LL) )
    KeBugCheckEx(0x34u, 0x613uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = a4 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    if ( v8 != 1 )
      return result;
    v9 = *(unsigned int *)(v6 + 52);
  }
  else
  {
    v9 = *(unsigned int *)(v6 + 52);
    result = *(_QWORD *)(v6 + 72);
    v10 = v9 + *(_QWORD *)(v6 + 56);
    if ( result )
    {
      if ( v10 <= result )
        return result;
      v9 = v10 - result;
    }
    _InterlockedExchange64((volatile __int64 *)(v6 + 72), v10);
  }
  if ( v9 )
  {
    CurrentThread = a5;
    if ( !a5 )
      CurrentThread = KeGetCurrentThread();
    result = (unsigned __int64)CurrentThread->Process;
    v12 = *(volatile signed __int64 **)(result + 2232);
    if ( v12 )
    {
      _InterlockedExchangeAdd64(v12, v9);
      return _InterlockedExchangeAdd64(v12 + 2, 1uLL);
    }
  }
  return result;
}
