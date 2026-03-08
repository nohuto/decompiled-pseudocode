/*
 * XREFs of CmCreateKey @ 0x1406BBA60
 * Callers:
 *     NtCreateKeyTransacted @ 0x1406BB890 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x1406BB9F0 (NtCreateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140243978 (CmpAllocateTransientPoolWithQuota.c)
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     CmpFreeExtraParameter @ 0x140797DC0 (CmpFreeExtraParameter.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __m128i *a5,
        unsigned int a6,
        _DWORD *a7,
        __int64 a8)
{
  HANDLE *v10; // r14
  unsigned int v11; // r12d
  char v12; // al
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  char v16; // si
  unsigned __int8 PreviousMode; // si
  size_t v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int16 v21; // ax
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rax
  struct _PRIVILEGE_SET *v23; // r14
  int v24; // ebx
  void *v25; // rax
  POBJECT_TYPE *v26; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  _OWORD *v28; // rax
  __int64 v29; // rcx
  KPROCESSOR_MODE v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-258h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-250h]
  __int64 v40; // [rsp+30h] [rbp-248h]
  char v41; // [rsp+40h] [rbp-238h]
  HANDLE Handle; // [rsp+48h] [rbp-230h] BYREF
  unsigned int v43; // [rsp+50h] [rbp-228h]
  PVOID Object; // [rsp+58h] [rbp-220h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-218h]
  size_t Size; // [rsp+68h] [rbp-210h]
  __m128i v47; // [rsp+70h] [rbp-208h] BYREF
  __int64 v48; // [rsp+80h] [rbp-1F8h]
  HANDLE *v49; // [rsp+88h] [rbp-1F0h]
  __m128i v50; // [rsp+90h] [rbp-1E8h]
  __m128i v51; // [rsp+A0h] [rbp-1D8h]
  void *Src; // [rsp+B0h] [rbp-1C8h]
  HANDLE *v53; // [rsp+B8h] [rbp-1C0h]
  ULONG_PTR v54; // [rsp+C0h] [rbp-1B8h]
  _DWORD *v55; // [rsp+C8h] [rbp-1B0h]
  __m128i v56; // [rsp+D0h] [rbp-1A8h]
  _OWORD v57[19]; // [rsp+E0h] [rbp-198h] BYREF
  _OWORD v58[2]; // [rsp+210h] [rbp-68h] BYREF

  v10 = a1;
  v49 = a1;
  Size = (size_t)a5;
  v53 = a1;
  v54 = a3;
  v55 = a7;
  Handle = 0LL;
  v47 = 0LL;
  v50 = 0LL;
  Privileges = 0LL;
  LODWORD(Object) = 0;
  memset(v58, 0, sizeof(v58));
  v48 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v58, 0x20000LL);
  memset(v57, 0, 0x128uLL);
  LODWORD(v57[6]) = -1;
  *((_QWORD *)&v57[9] + 1) = &v57[9];
  *(_QWORD *)&v57[9] = &v57[9];
  memset((char *)&v57[13] + 8, 0, 0x50uLL);
  HIDWORD(v57[1]) = a2 & 0x300;
  v11 = a2 & 0xFFFFFCFF;
  v43 = v11;
  v12 = CmpAcquireShutdownRundown();
  v16 = v12;
  v41 = v12;
  if ( v12 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( a5 )
      {
        v51 = 0LL;
        v18 = 0x7FFFFFFF0000LL;
        if ( Size < 0x7FFFFFFF0000LL )
          v18 = Size;
        v51.m128i_i32[0] = *(_DWORD *)v18;
        v14 = *(_QWORD *)(v18 + 8);
        Src = (void *)v14;
        v51.m128i_i64[1] = v14;
        v50 = v51;
        v13 = (unsigned int)_mm_cvtsi128_si32(v51);
        if ( (_WORD)v13 )
        {
          if ( (v14 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = (unsigned __int16)v13 + v14;
          v18 = v15;
          if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (v51.m128i_i8[0] & 1) != 0 )
        {
          v24 = -1073741811;
          v16 = v12;
          goto LABEL_45;
        }
        if ( (_WORD)v13 )
        {
          Size = (unsigned __int16)v13;
          TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota(
                                                              v18,
                                                              (unsigned __int16)v13,
                                                              2019773763LL);
          Privileges = TransientPoolWithQuota;
          if ( !TransientPoolWithQuota )
          {
            v24 = -1073741670;
            v16 = v41;
            goto LABEL_45;
          }
          v23 = TransientPoolWithQuota;
          memmove(TransientPoolWithQuota, Src, Size);
          v50.m128i_i64[1] = (__int64)v23;
          v10 = v49;
        }
      }
      v19 = (__int64)v10;
      if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v19 = 0LL;
      if ( a7 )
      {
        v20 = (__int64)a7;
        if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
          v20 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v20 = *(_DWORD *)v20;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = *(_QWORD *)(a3 + 16);
      v49 = (HANDLE *)v18;
      v56 = 0LL;
      if ( v18 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      v56.m128i_i32[0] = *(_DWORD *)v18;
      v13 = *(_QWORD *)(v18 + 8);
      v56.m128i_i64[1] = v13;
      v47 = v56;
      v21 = _mm_cvtsi128_si32(v56);
      if ( v21 )
      {
        if ( (v13 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = v21 + v13;
        v18 = v14;
        if ( v14 > 0x7FFFFFFF0000LL || v14 < v13 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v47.m128i_i8[0] & 1) != 0 )
      {
        v24 = -1073741811;
        v16 = v41;
        goto LABEL_45;
      }
      v25 = *(void **)(a3 + 8);
      Handle = v25;
    }
    else
    {
      if ( a5 )
        v50 = *a5;
      v47 = *(__m128i *)*(_QWORD *)(a3 + 16);
      v25 = *(void **)(a3 + 8);
      Handle = v25;
    }
    if ( CmpTraceRoutine )
    {
      if ( v25 )
      {
        v31 = KeGetCurrentThread()->PreviousMode;
        Object = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v31, &Object, 0LL) >= 0 )
        {
          v48 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
      }
    }
    v18 = a6;
    if ( (a6 & 0x100001F) == a6 )
    {
      DWORD2(v57[1]) = a6;
      LODWORD(v57[0]) = 1;
      *((_QWORD *)&v57[0] + 1) = v50.m128i_i64[1];
      WORD2(v57[0]) = v50.m128i_i16[0];
      *((_QWORD *)&v57[4] + 1) = a8;
      v26 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v24 = ObOpenObjectByNameEx(a3, v26, PreviousMode, 0LL, v11, v57, CurrentSilo, &Handle);
      if ( v24 >= 0 )
      {
        *v10 = Handle;
        if ( a7 )
          *a7 = v57[2];
      }
      v16 = v41;
    }
    else
    {
      v24 = -1073741811;
      v16 = v41;
    }
  }
  else
  {
    v18 = (unsigned __int8)HvShutdownComplete;
    if ( HvShutdownComplete )
    {
      v18 = (unsigned int)PopShutdownCleanly;
      if ( (PopShutdownCleanly & 8) != 0 )
        KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    }
    v24 = -1073741431;
  }
LABEL_45:
  if ( CmpTraceRoutine )
  {
    v32 = v48;
    LOBYTE(v32) = 10;
    CmpTraceRoutine(v32, v58, (unsigned int)v24, 0LL, v48, &v47);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( *((_QWORD *)&v57[5] + 1) )
  {
    CmpLockRegistry(v18, v13, v14, v15, BugCheckParameter4, HandleInformation, v40);
    CmpDereferenceKeyControlBlock(*((ULONG_PTR *)&v57[5] + 1));
    CmpUnlockRegistry(v34, v33, v35, v36);
  }
  v28 = *(_OWORD **)&v57[9];
  v29 = **(_QWORD **)&v57[9];
  if ( *(_OWORD **)(*(_QWORD *)&v57[9] + 8LL) != &v57[9] || *(_QWORD *)(v29 + 8) != *(_QWORD *)&v57[9] )
    goto LABEL_72;
  *(_QWORD *)&v57[9] = **(_QWORD **)&v57[9];
  *(_QWORD *)(v29 + 8) = &v57[9];
  if ( v28 != &v57[9] )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(v28);
      v28 = *(_OWORD **)&v57[9];
      v37 = **(_QWORD **)&v57[9];
      if ( *(_OWORD **)(*(_QWORD *)&v57[9] + 8LL) != &v57[9] || *(_QWORD *)(v37 + 8) != *(_QWORD *)&v57[9] )
        break;
      *(_QWORD *)&v57[9] = **(_QWORD **)&v57[9];
      *(_QWORD *)(v37 + 8) = &v57[9];
      if ( v28 == &v57[9] )
        goto LABEL_54;
    }
LABEL_72:
    __fastfail(3u);
  }
LABEL_54:
  if ( v16 )
    CmpReleaseShutdownRundown();
  return (unsigned int)v24;
}
