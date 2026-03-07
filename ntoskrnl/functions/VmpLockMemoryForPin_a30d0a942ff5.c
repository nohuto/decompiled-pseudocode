__int64 __fastcall VmpLockMemoryForPin(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  BOOL v8; // r14d
  _KPROCESS *Process; // rsi
  int v10; // ebx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  void *v14; // rsi

  v8 = a4 != 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return (unsigned int)-1073741558;
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  if ( (*(_BYTE *)(a1 + 106) & 1) != 0 )
  {
    v10 = -1073741558;
    goto LABEL_11;
  }
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 96)) )
  {
    v11 = a3 << 12;
    v12 = a2 << 12;
    v13 = MmSecureVirtualMemoryEx(v12, v11, 1u, 10);
    v14 = (void *)v13;
    if ( v13 )
    {
      v10 = MmLockPhysicalPagesByVa(v12, v11, v13, v8);
      if ( v10 >= 0 )
      {
        v10 = 0;
        *a5 = v14;
        return (unsigned int)v10;
      }
      MmUnsecureVirtualMemory(v14);
    }
    else
    {
      v10 = -1073741670;
    }
LABEL_11:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 96));
    return (unsigned int)v10;
  }
  return (unsigned int)-1073741558;
}
