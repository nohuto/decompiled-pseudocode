__int64 __fastcall NtCreateEnclave(
        ULONG_PTR a1,
        unsigned __int64 *a2,
        ULONGLONG a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        char *Src,
        unsigned int a8,
        _DWORD *a9)
{
  PVOID Pool; // rsi
  char PreviousMode; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // r12
  int Enclave; // ebx
  int v15; // ebx
  char v16; // dl
  __int64 v17; // rcx
  void *Process; // rdi
  char v20; // [rsp+50h] [rbp-E8h]
  size_t Size; // [rsp+64h] [rbp-D4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-C8h] BYREF
  PVOID v24; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v25[2]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int64 v26; // [rsp+90h] [rbp-A8h]
  ULONGLONG v27[6]; // [rsp+98h] [rbp-A0h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v28; // [rsp+C8h] [rbp-70h] BYREF

  v26 = a4;
  v27[1] = (ULONGLONG)a2;
  v27[0] = a3;
  Size = a8;
  v25[1] = (unsigned __int64)a9;
  BugCheckParameter1 = 0LL;
  memset(&v28, 0, sizeof(v28));
  v25[0] = 0LL;
  Pool = 0LL;
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( a9 && PreviousMode == 1 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a9;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( a6 == 1 )
  {
LABEL_17:
    if ( qword_140C69508 )
    {
      v15 = 4096;
      v13 = a5;
      goto LABEL_19;
    }
LABEL_16:
    Enclave = -1073741637;
    goto LABEL_49;
  }
  if ( a6 == 2 )
  {
    if ( !RtlIsEnclaveFeaturePresent(2u) )
      goto LABEL_16;
    goto LABEL_17;
  }
  if ( (unsigned int)(a6 - 16) > 1 || !RtlIsEnclaveFeaturePresent(8u) )
    goto LABEL_16;
  v13 = a5;
  if ( a5 )
  {
LABEL_11:
    Enclave = -1073741581;
    goto LABEL_49;
  }
  if ( a8 > 0x24 )
    goto LABEL_13;
  v15 = 0;
LABEL_19:
  if ( (MiValidateZeroBits(v27) & 0x80000000) != 0LL )
  {
    Enclave = -1073741583;
    goto LABEL_49;
  }
  if ( !v26 )
  {
    Enclave = -1073741582;
    goto LABEL_49;
  }
  if ( v13 > v26 )
    goto LABEL_11;
  v16 = v20;
  if ( v20 == 1 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v17 = (__int64)a2;
    *(_QWORD *)v17 = *(_QWORD *)v17;
  }
  v25[0] = *a2;
  if ( (_DWORD)Size )
  {
    if ( v15 && (_DWORD)Size != v15 )
    {
LABEL_13:
      Enclave = -1073741820;
      goto LABEL_49;
    }
    Pool = MiAllocatePool(256, ((unsigned int)Size + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x44456D4Du);
    v24 = Pool;
    if ( !Pool )
    {
      Enclave = -1073741670;
      goto LABEL_49;
    }
    if ( v20 != 1 )
      goto LABEL_42;
    if ( (unsigned int)Size >= 0x10000uLL )
    {
      if ( ((unsigned __int8)Src & 3) == 0 )
      {
        if ( (unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
        goto LABEL_42;
      }
    }
    else if ( ((unsigned __int8)Src & 3) == 0 )
    {
LABEL_42:
      memmove(Pool, Src, (unsigned int)Size);
      v16 = v20;
      goto LABEL_43;
    }
    ExRaiseDatatypeMisalignment();
  }
LABEL_43:
  if ( a1 == -1LL )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    BugCheckParameter1 = (ULONG_PTR)Process;
  }
  else
  {
    Enclave = ObpReferenceObjectByHandleWithTag(
                a1,
                8,
                (__int64)PsProcessType,
                v16,
                0x6D566D4Du,
                &BugCheckParameter1,
                0LL,
                0LL);
    if ( Enclave < 0 )
      goto LABEL_49;
    Process = (void *)BugCheckParameter1;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v28);
  }
  Enclave = MiCreateEnclave((int)Process, v25, v27[0], v26, v13, a6, (__int64)Pool, Size, (__int64)&Size + 4);
  if ( a1 != -1LL )
  {
    KiUnstackDetachProcess(&v28);
    ObfDereferenceObjectWithTag(Process, 0x6D566D4Du);
  }
LABEL_49:
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  if ( Enclave >= 0 )
    *a2 = v25[0];
  if ( a9 )
    *a9 = HIDWORD(Size);
  return (unsigned int)Enclave;
}
