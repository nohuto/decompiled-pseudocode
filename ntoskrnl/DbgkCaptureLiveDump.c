/*
 * XREFs of DbgkCaptureLiveDump @ 0x1409378F8
 * Callers:
 *     NtSystemDebugControl @ 0x140791FE0 (NtSystemDebugControl.c)
 * Callees:
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DbgkpLkmdSnapData @ 0x1405397D0 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapDataEx @ 0x140539804 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapGlobals @ 0x14053983C (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapThread @ 0x140539BD4 (DbgkpLkmdSnapThread.c)
 *     DbgkpLkmdSqmIncrementDword @ 0x140539C38 (DbgkpLkmdSqmIncrementDword.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     DbgkpLkmdFireCallbacks @ 0x140937DC4 (DbgkpLkmdFireCallbacks.c)
 *     DbgkpLkmdSqmIsOptedIn @ 0x14093830C (DbgkpLkmdSqmIsOptedIn.c)
 *     DbgkpLkmdSqmStatus @ 0x1409384AC (DbgkpLkmdSqmStatus.c)
 *     DbgkpTriageDumpInitialize @ 0x14093921C (DbgkpTriageDumpInitialize.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkCaptureLiveDump(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  REGHANDLE v4; // r15
  PVOID v5; // r13
  PEPROCESS v6; // r12
  _DWORD *v7; // rsi
  char *PoolWithTag; // rax
  __int64 v11; // rbx
  int v12; // r14d
  _DWORD *v13; // rax
  __int64 i; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  PEPROCESS v19; // rax
  int v20; // eax
  char v21; // al
  void *v22; // rcx
  char v24; // [rsp+40h] [rbp-39h]
  char AccessMode; // [rsp+41h] [rbp-38h]
  unsigned int v26; // [rsp+44h] [rbp-35h]
  ULONGLONG RegHandle; // [rsp+48h] [rbp-31h] BYREF
  PVOID Object; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v29; // [rsp+58h] [rbp-21h]
  __int64 v30; // [rsp+60h] [rbp-19h] BYREF
  _DWORD *v31; // [rsp+68h] [rbp-11h]
  __int64 v32; // [rsp+70h] [rbp-9h]
  __int128 v33; // [rsp+78h] [rbp-1h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v32 = a4;
  v6 = 0LL;
  Object = a2;
  v7 = 0LL;
  RegHandle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v29 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  LODWORD(v31) = 0;
  if ( !*(_DWORD *)(a1 + 44) || a3 < 0x40000 || (*(_DWORD *)a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( (unsigned __int8)DbgkpLkmdSqmIsOptedIn() )
  {
    EtwRegister(&stru_140014DA0, 0LL, 0LL, &RegHandle);
    v4 = RegHandle;
    if ( RegHandle )
      DbgkpLkmdSqmIncrementDword(RegHandle, 3292);
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0x4060uLL, 0x504D444Cu);
  v11 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = DbgkpTriageDumpInitialize(PoolWithTag + 0x4000, Object, a3, PoolWithTag + 16432);
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v11 + 16432))(
              v11 + 0x4000,
              *(unsigned int *)(a1 + 4),
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 24),
              *(_QWORD *)(a1 + 32));
      if ( v12 >= 0 )
      {
        DbgkpLkmdSnapGlobals(v11);
        LODWORD(RegHandle) = 4 * *(_DWORD *)(a1 + 44) + 4;
        v13 = ExAllocatePoolWithTag((POOL_TYPE)1025, (unsigned int)RegHandle, 0x704E534Bu);
        v7 = v13;
        if ( v13 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
            v13[i] = -1073741823;
          v13[i] = 1112752980;
        }
        v15 = 0;
        v24 = 1;
        v26 = 0;
        if ( *(_DWORD *)(a1 + 44) )
        {
          do
          {
            v16 = *(_QWORD *)(a1 + 48);
            v17 = *(_DWORD *)(a1 + 40) + v15;
            v33 = 0xC0000001uLL;
            Object = 0LL;
            v18 = ObReferenceObjectByHandle(
                    *(HANDLE *)(v16 + 8 * v17),
                    0x1FFFFFu,
                    (POBJECT_TYPE)PsThreadType,
                    AccessMode,
                    &Object,
                    0LL);
            v5 = Object;
            if ( v18 == -1073741790 || (v24 = 0, v18 < 0) )
            {
              if ( v7 )
                v7[v26] = v18;
              if ( v4 )
              {
                LODWORD(v33) = v18;
                DbgkpLkmdSqmStatus(v4, &v33);
              }
              v21 = v24;
            }
            else
            {
              if ( !v6 )
              {
                v19 = IoThreadToProcess((PETHREAD)Object);
                v6 = v19;
                if ( v19 )
                {
                  ObfReferenceObjectWithTag(v19, 0x4C676244u);
                  DbgkpLkmdSnapDataEx(v11);
                }
              }
              v20 = DbgkpLkmdSnapThread(v11, a1, (__int64)v5, (__int64)&v33);
              if ( !v20 )
                v20 = v33;
              if ( v7 )
                v7[v26] = v20;
              DbgkpLkmdFireCallbacks(v11, 2LL, v5);
              if ( v4 )
                DbgkpLkmdSqmStatus(v4, &v33);
              ObfDereferenceObject(v5);
              v21 = 0;
              v5 = 0LL;
              v24 = 0;
              if ( (_DWORD)v33 == -1073741670 )
                goto LABEL_36;
            }
            v15 = v26 + 1;
            v26 = v15;
          }
          while ( v15 < *(_DWORD *)(a1 + 44) );
          if ( v21 )
            goto LABEL_43;
LABEL_36:
          if ( v6 )
            DbgkpLkmdFireCallbacks(v11, 1LL, v6);
          LODWORD(v30) = *(_DWORD *)(a1 + 44);
          v31 = v7;
          DbgkpLkmdSnapData(v11, (__int64)&v30, 16LL);
          if ( v7 )
            DbgkpLkmdSnapData(v11, (__int64)v7, (unsigned int)RegHandle);
          if ( (int)DbgkpLkmdSnapDataEx(v11) >= 0 )
            *v29 = &v30;
          v12 = (*(__int64 (__fastcall **)(__int64, __int64))(v11 + 16472))(v11 + 0x4000, v32);
        }
        else
        {
LABEL_43:
          v12 = -1073741790;
        }
        if ( v6 )
          ObfDereferenceObjectWithTag(v6, 0x4C676244u);
        if ( v5 )
          ObfDereferenceObject(v5);
      }
    }
    v22 = *(void **)(v11 + 16416);
    if ( v22 )
      ExFreePoolWithTag(v22, 0x4D574454u);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x704E534Bu);
  }
  else
  {
    v12 = -1073741670;
  }
  if ( v4 )
    EtwUnregister(v4);
  if ( v11 )
    ExFreePoolWithTag((PVOID)v11, 0x504D444Cu);
  return (unsigned int)v12;
}
