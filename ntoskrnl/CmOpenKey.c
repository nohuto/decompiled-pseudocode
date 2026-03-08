/*
 * XREFs of CmOpenKey @ 0x1406E7B60
 * Callers:
 *     NtOpenKeyEx @ 0x140758240 (NtOpenKeyEx.c)
 *     NtOpenKey @ 0x140758B00 (NtOpenKey.c)
 *     NtOpenKeyTransactedEx @ 0x140784470 (NtOpenKeyTransactedEx.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x140A0A440 (CmOpenKeyForBugCheckRecovery.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406B6660 (CmpDereferenceKeyControlBlock.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     CmpFreeExtraParameter @ 0x140797DC0 (CmpFreeExtraParameter.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5, unsigned __int8 a6)
{
  unsigned int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int16 v15; // ax
  void *v16; // rax
  POBJECT_TYPE *v17; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  _OWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v27; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  PVOID Object; // [rsp+58h] [rbp-1F0h] BYREF
  HANDLE v35; // [rsp+60h] [rbp-1E8h]
  HANDLE Handle; // [rsp+68h] [rbp-1E0h] BYREF
  __int64 v37; // [rsp+70h] [rbp-1D8h]
  __m128i v38; // [rsp+80h] [rbp-1C8h] BYREF
  HANDLE *v39; // [rsp+90h] [rbp-1B8h]
  __int64 v40; // [rsp+98h] [rbp-1B0h]
  __m128i v41; // [rsp+A0h] [rbp-1A8h]
  _OWORD v42[2]; // [rsp+B0h] [rbp-198h] BYREF
  _OWORD v43[19]; // [rsp+D0h] [rbp-178h] BYREF

  v39 = a1;
  v40 = a3;
  Handle = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  LODWORD(Object) = 0;
  memset(v42, 0, sizeof(v42));
  v37 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v42, 0x20000LL);
  memset(v43, 0, 0x128uLL);
  LODWORD(v43[6]) = -1;
  *((_QWORD *)&v43[9] + 1) = &v43[9];
  *(_QWORD *)&v43[9] = &v43[9];
  *(_OWORD *)((char *)&v43[13] + 8) = 0LL;
  *(_OWORD *)((char *)&v43[14] + 8) = 0LL;
  *(_OWORD *)((char *)&v43[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v43[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v43[17] + 8) = 0LL;
  HIDWORD(v43[1]) = a2 & 0x300;
  v10 = a2 & 0xFFFFFCFF;
  if ( (unsigned __int8)CmpAcquireShutdownRundown() )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      if ( a6 == 1 )
      {
        v12 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v12 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = *(_QWORD *)(a3 + 16);
        v41 = 0LL;
        if ( v13 >= 0x7FFFFFFF0000LL )
          v13 = 0x7FFFFFFF0000LL;
        v41.m128i_i32[0] = *(_DWORD *)v13;
        v14 = *(_QWORD *)(v13 + 8);
        v41.m128i_i64[1] = v14;
        v38 = v41;
        v15 = _mm_cvtsi128_si32(v41);
        if ( v15 )
        {
          if ( (v14 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v14 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v38 = *(__m128i *)*(_QWORD *)(a3 + 16);
      }
      v16 = *(void **)(a3 + 8);
      v35 = v16;
      if ( CmpTraceRoutine )
      {
        if ( v16 )
        {
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          Object = 0LL;
          if ( ObReferenceObjectByHandle(v35, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
          {
            v37 = *((_QWORD *)Object + 1);
            ObfDereferenceObject(Object);
          }
        }
      }
      *((_QWORD *)&v43[4] + 1) = a5;
      DWORD2(v43[1]) = a4;
      v17 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v20 = ObOpenObjectByNameEx(a3, v17, a6, 0LL, v10, v43, CurrentSilo, &Handle);
      v23 = v20 >= 0;
      if ( v20 >= 0 )
      {
        v23 = (unsigned __int64)Handle;
        *a1 = Handle;
      }
      if ( CmpTraceRoutine )
      {
        v29 = v37;
        LOBYTE(v29) = 11;
        CmpTraceRoutine(v29, v42, (unsigned int)v20, 0LL, v37, &v38);
      }
      if ( *((_QWORD *)&v43[5] + 1) )
      {
        CmpLockRegistry(v23, v19, v21, v22);
        CmpDereferenceKeyControlBlock(*((ULONG_PTR *)&v43[5] + 1));
        CmpUnlockRegistry(v31, v30, v32, v33);
      }
      v24 = *(_OWORD **)&v43[9];
      v25 = **(_QWORD **)&v43[9];
      if ( *(_OWORD **)(*(_QWORD *)&v43[9] + 8LL) == &v43[9] && *(_QWORD *)(v25 + 8) == *(_QWORD *)&v43[9] )
      {
        *(_QWORD *)&v43[9] = **(_QWORD **)&v43[9];
        *(_QWORD *)(v25 + 8) = &v43[9];
        if ( v24 == &v43[9] )
        {
LABEL_29:
          CmpReleaseShutdownRundown();
          return (unsigned int)v20;
        }
        while ( 1 )
        {
          CmpFreeExtraParameter(v24);
          v24 = *(_OWORD **)&v43[9];
          v27 = **(_QWORD **)&v43[9];
          if ( *(_OWORD **)(*(_QWORD *)&v43[9] + 8LL) != &v43[9] || *(_QWORD *)(v27 + 8) != *(_QWORD *)&v43[9] )
            break;
          *(_QWORD *)&v43[9] = **(_QWORD **)&v43[9];
          *(_QWORD *)(v27 + 8) = &v43[9];
          if ( v24 == &v43[9] )
            goto LABEL_29;
        }
      }
      __fastfail(3u);
    }
    CmpReleaseShutdownRundown();
    return 3221225714LL;
  }
  else
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(v11) = 11;
      CmpTraceRoutine(v11, v42, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return 3221225865LL;
  }
}
