__int64 __fastcall IoQueryInformationByName(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        unsigned int a4,
        signed int a5,
        __int16 a6,
        _QWORD *a7)
{
  unsigned int v9; // ebx
  char v10; // r12
  char v11; // r13
  char PreviousMode; // al
  int v13; // edi
  __int64 result; // rax
  __int64 v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v17; // edi
  void *v18; // rsi
  ULONG_PTR v19; // rcx
  size_t v20; // r8
  _OWORD v23[14]; // [rsp+60h] [rbp-248h] BYREF
  __int64 v24; // [rsp+140h] [rbp-168h] BYREF
  _BYTE v25[272]; // [rsp+150h] [rbp-158h] BYREF

  memset(v25, 0, sizeof(v25));
  v9 = 0;
  v10 = 0;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a6 & 0x100) == 0 )
    v11 = PreviousMode;
  v13 = a5;
  result = IopValidateQueryInformationParameters(v11, (__int64)KeGetCurrentThread(), a2, (unsigned __int64)a3, a4, a5);
  if ( (int)result >= 0 )
  {
    if ( !v11 && a5 == 75 )
    {
      v13 = 71;
      v10 = 1;
    }
    if ( ((v13 - 68) & 0xFFFFFFFC) != 0 || v13 == 69 )
      return 3221225485LL;
    memset(v23, 0, sizeof(v23));
    LODWORD(v23[0]) = 14680072;
    WORD3(v23[4]) = 7;
    DWORD2(v23[5]) = 1;
    LODWORD(v23[4]) = 2113536;
    BYTE9(v23[8]) = 1;
    LOBYTE(v23[13]) = 1;
    *(_QWORD *)&v23[9] = v25;
    *(_QWORD *)&v23[3] = a1;
    DWORD2(v23[9]) = 32;
    *((_QWORD *)&v23[12] + 1) = __PAIR64__(a4, v13);
    memset(&v23[10], 0, 32);
    LOWORD(v23[10]) = 40;
    v15 = 1LL;
    *(_QWORD *)&v23[12] = 1LL;
    if ( v10 )
      DWORD1(v23[5]) |= 1u;
    if ( a7 )
    {
      v19 = a7[1];
      if ( v19 )
      {
        result = FsRtlpPrepareExtraCreateParametersForCreate(v19);
        if ( (int)result < 0 )
          return result;
      }
      v20 = *(__int16 *)a7;
      if ( v20 > 0x28 )
        v20 = 40LL;
      memmove(&v23[10], a7, v20);
      v15 = *(_QWORD *)&v23[12];
    }
    if ( v15 == 1 )
      *(_QWORD *)&v23[12] = PsGetCurrentSilo();
    if ( (unsigned __int64)a3 <= 0x7FFFFFFEFFFFLL )
    {
      *(_QWORD *)&v23[7] = ExAllocatePool2(65LL, a4, 538996553LL);
      if ( !*(_QWORD *)&v23[7] )
        return 3221225626LL;
    }
    else
    {
      *(_QWORD *)&v23[7] = a3;
    }
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v17 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, v11, 0LL, 128, (int)v23, *(__int64 *)&v23[12], &v24);
    IopCleanupExtraCreateParameters(v23);
    if ( LODWORD(v23[2]) == -1096154543 )
      v17 = v23[1];
    v18 = *(void **)&v23[7];
    if ( a3 != *(void **)&v23[7] )
    {
      if ( v17 >= 0 )
        memmove(a3, *(const void **)&v23[7], HIDWORD(v23[12]));
      ExFreePoolWithTag(v18, 0);
    }
    *(_DWORD *)a2 = v17;
    if ( v17 >= 0 )
      v9 = HIDWORD(v23[12]);
    *(_QWORD *)(a2 + 8) = v9;
    return (unsigned int)v17;
  }
  return result;
}
