__int64 __fastcall NtResetWriteWatch(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // r13
  _KPROCESS *Process; // rsi
  void *v10; // r15
  __int64 v11; // rax
  void *v12; // rsi
  unsigned __int64 VadMandatoryPageSize; // rax
  int v14; // edi
  __int64 v16; // rax
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v18; // [rsp+48h] [rbp-70h] BYREF

  v3 = 0;
  BugCheckParameter1 = 0LL;
  memset(&v18, 0, sizeof(v18));
  if ( a2 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - a2 >= a3 && a3 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = a3 + a2 - 1;
    Process = CurrentThread->ApcState.Process;
    if ( a1 == -1LL )
    {
      v10 = CurrentThread->ApcState.Process;
    }
    else
    {
      v14 = ObpReferenceObjectByHandleWithTag(a1, 0x77576D4Du, (__int64)&BugCheckParameter1, 0LL, 0LL);
      if ( v14 < 0 )
        return (unsigned int)v14;
      v10 = (void *)BugCheckParameter1;
      if ( Process != (_KPROCESS *)BugCheckParameter1 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v18);
        v3 = 1;
      }
    }
    v11 = MiObtainReferencedVadEx(a2, 0, (int *)&BugCheckParameter1);
    v12 = (void *)v11;
    if ( !v11 )
    {
      v14 = -1073741585;
      goto LABEL_12;
    }
    if ( (*(_DWORD *)(v11 + 48) & 0x600000) == 0x600000
      && v8 <= (((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF) )
    {
      VadMandatoryPageSize = MiGetVadMandatoryPageSize(v11);
      if ( VadMandatoryPageSize <= 1 )
      {
LABEL_10:
        MiMoveDirtyBitsToPfns(a2, v8, (__int64)v12, 1);
        v14 = 0;
LABEL_11:
        MiUnlockAndDereferenceVad(v12);
LABEL_12:
        if ( v3 )
          KiUnstackDetachProcess(&v18);
        if ( a1 != -1LL )
          ObfDereferenceObjectWithTag(v10, 0x77576D4Du);
        return (unsigned int)v14;
      }
      v16 = (VadMandatoryPageSize << 12) - 1;
      if ( (v16 & a2) == 0 )
      {
        if ( (v16 & a3) != 0 )
        {
          v14 = -1073741583;
          goto LABEL_11;
        }
        goto LABEL_10;
      }
    }
    v14 = -1073741585;
    goto LABEL_11;
  }
  return 3221225713LL;
}
