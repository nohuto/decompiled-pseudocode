/*
 * XREFs of PspCreateProcess @ 0x140858F60
 * Callers:
 *     NtCreateProcessEx @ 0x1409AAC70 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspCreateObjectHandle @ 0x1406B1864 (PspCreateObjectHandle.c)
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x14070D5FC (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspReferenceTokenForNewProcess @ 0x14070D774 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x14070DD2C (SeQuerySigningPolicy.c)
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        _QWORD *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        KPROCESSOR_MODE AccessMode,
        int a6,
        HANDLE Handle,
        void *a8,
        void *a9)
{
  PVOID v11; // r12
  _BYTE *v12; // r14
  int SigningPolicy; // esi
  char v14; // bl
  char v15; // r13
  char v16; // al
  int v17; // eax
  int v18; // ebx
  char v19; // al
  NTSTATUS result; // eax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  char v25; // [rsp+80h] [rbp-248h] BYREF
  char v26; // [rsp+81h] [rbp-247h] BYREF
  char v27; // [rsp+82h] [rbp-246h] BYREF
  char v28; // [rsp+83h] [rbp-245h]
  int v29; // [rsp+88h] [rbp-240h]
  PVOID Object; // [rsp+90h] [rbp-238h] BYREF
  PVOID v31; // [rsp+98h] [rbp-230h] BYREF
  int v32; // [rsp+A0h] [rbp-228h]
  PVOID v33; // [rsp+A8h] [rbp-220h] BYREF
  PVOID v34; // [rsp+B0h] [rbp-218h] BYREF
  void *v35; // [rsp+B8h] [rbp-210h]
  __int64 v36; // [rsp+C0h] [rbp-208h] BYREF
  _QWORD *v37; // [rsp+C8h] [rbp-200h]
  PVOID v38; // [rsp+D0h] [rbp-1F8h]
  HANDLE v39; // [rsp+D8h] [rbp-1F0h]
  _BYTE v40[400]; // [rsp+F0h] [rbp-1D8h] BYREF

  v32 = a2;
  v37 = a1;
  v39 = a8;
  v35 = a9;
  v36 = 0LL;
  v28 = 0;
  v33 = 0LL;
  Object = 0LL;
  v26 = 0;
  v27 = 0;
  v31 = 0LL;
  if ( (a6 & 0xFFF94048) != 0
    || (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) != 0 && AccessMode )
  {
    return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
    return -1073741811;
  v29 = a6 & 0x800;
  if ( (a6 & 0x2000) != 0 && (a6 & 0x800) == 0 )
    return -1073741811;
  if ( (a6 & 0x800) != 0 )
  {
    if ( AccessMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v21 = *(_QWORD *)(a3 + 16);
      if ( !v21
        || !*(_QWORD *)(v21 + 8)
        || !*(_WORD *)v21
        || *(_DWORD *)(a3 + 24) != 512
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
    }
    if ( Handle || a8 || !a4 )
      return -1073741811;
  }
  if ( (a6 & 0x20000) != 0 && (AccessMode || (a6 & 0x800) == 0) )
    return -1073741811;
  memset(v40, 0, sizeof(v40));
  v40[388] = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&v40[384] = v22;
    }
    else
    {
      v22 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v23 = v22 & 0x1DF2;
    else
      v23 = v22 & 0x11FF2;
    *(_DWORD *)&v40[384] = v23;
  }
  if ( Handle )
  {
    v34 = 0LL;
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &v34, 0LL);
    v11 = v34;
    v38 = v34;
    if ( result < 0 )
      return result;
  }
  else
  {
    v11 = 0LL;
    v38 = 0LL;
  }
  if ( !a4
    || (SigningPolicy = ObpReferenceObjectByHandleWithTag(
                          a4,
                          128,
                          (__int64)PsProcessType,
                          AccessMode,
                          0x72437350u,
                          &v33,
                          0LL,
                          0LL),
        SigningPolicy >= 0) )
  {
    v12 = v33;
    SigningPolicy = PspReferenceTokenForNewProcess((__int64)v33, a9, AccessMode, &v31);
    if ( SigningPolicy < 0 )
      goto LABEL_28;
    if ( v12 )
    {
      if ( v11 )
      {
        v25 = 0;
        SigningPolicy = SeQuerySigningPolicy(
                          v31,
                          0LL,
                          0,
                          0,
                          (unsigned __int8 *)&v26,
                          (unsigned __int8 *)&v27,
                          (unsigned __int8 *)&v25);
        if ( SigningPolicy < 0 )
          goto LABEL_27;
        v15 = v26;
        if ( (unsigned __int8)v26 > 1u || (v14 = v25) != 0 )
        {
LABEL_72:
          SigningPolicy = -1073741637;
          goto LABEL_27;
        }
LABEL_15:
        if ( !v11 )
          goto LABEL_16;
        SigningPolicy = PspGetProcessProtectionRequirementsFromImage((__int64)v11);
        if ( SigningPolicy >= 0 )
        {
          if ( v14 == v28 )
          {
LABEL_16:
            if ( v29 )
            {
              if ( a3 )
                v24 = *(_QWORD *)(a3 + 16);
              else
                v24 = 0LL;
              SigningPolicy = PsCreateMinimalProcess(
                                (__int64)v12,
                                v24,
                                0LL,
                                v14,
                                (void *)((unsigned __int64)v31 & -(__int64)(v35 != 0LL)),
                                a6,
                                0,
                                0LL,
                                0LL,
                                0LL,
                                v37);
            }
            else
            {
              v17 = PspAllocateProcess(
                      (__int64)v12,
                      AccessMode,
                      (_QWORD *)a3,
                      v14,
                      v15,
                      v27,
                      v11,
                      v31,
                      a6,
                      0,
                      0LL,
                      v35 != 0LL,
                      0LL,
                      (__int64)&v36,
                      &Object);
              SigningPolicy = v17;
              if ( v17 >= 0 )
              {
                v18 = v17;
                v29 = v17;
                v19 = 1;
                if ( (_DWORD)v36 )
                  v19 = 3;
                SigningPolicy = PspInsertProcess(
                                  (char *)Object,
                                  (__int64)v12,
                                  v32,
                                  a6,
                                  v39,
                                  v19,
                                  0LL,
                                  (PACCESS_STATE)v40);
                if ( SigningPolicy >= 0 )
                {
                  SigningPolicy = PspCreateObjectHandle(Object, (__int64)v40, (struct _OBJECT_TYPE *)PsProcessType);
                  if ( SigningPolicy >= 0 )
                  {
                    *v37 = *(_QWORD *)&v40[392];
                    SigningPolicy = v18;
                  }
                  SepDeleteAccessState((__int64)v40);
                  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v40[32]);
                }
                if ( SigningPolicy < 0 )
                  PspRundownSingleProcess((PRKPROCESS)Object, 0);
                ObfDereferenceObjectWithTag(Object, 0x72437350u);
              }
            }
            goto LABEL_27;
          }
          goto LABEL_72;
        }
LABEL_27:
        ObfDereferenceObject(v31);
LABEL_28:
        if ( v12 )
          ObfDereferenceObjectWithTag(v12, 0x72437350u);
        goto LABEL_30;
      }
      v14 = v12[2170];
      v16 = v12[2169];
      v15 = v12[2168];
    }
    else
    {
      v14 = 114;
      v15 = 30;
      v16 = 28;
    }
    v27 = v16;
    v26 = v15;
    v25 = v14;
    goto LABEL_15;
  }
LABEL_30:
  if ( v11 )
    ObfDereferenceObject(v11);
  return SigningPolicy;
}
