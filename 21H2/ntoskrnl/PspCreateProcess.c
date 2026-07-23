/*
 * XREFs of PspCreateProcess @ 0x1407CE5D0
 * Callers:
 *     NtCreateProcessEx @ 0x1409070D0 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspCreateObjectHandle @ 0x14063F5E4 (PspCreateObjectHandle.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140696B38 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspInsertProcess @ 0x1406971A0 (PspInsertProcess.c)
 *     SeQuerySigningPolicy @ 0x14069CAA0 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14069CD74 (PspReferenceTokenForNewProcess.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     PspDeleteObjectAccessState @ 0x14090A23C (PspDeleteObjectAccessState.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        __int64 a1,
        ACCESS_MASK a2,
        __int64 a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        int a6,
        HANDLE Handle,
        void *a8,
        void *a9)
{
  struct _DMA_ADAPTER *v11; // r12
  PVOID v12; // r15
  int ProcessProtectionRequirementsFromImage; // esi
  __int64 v14; // r9
  char v15; // bl
  int v16; // eax
  int v17; // ebx
  char v18; // al
  NTSTATUS result; // eax
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  char v24; // [rsp+80h] [rbp-248h] BYREF
  char v25; // [rsp+81h] [rbp-247h] BYREF
  char v26; // [rsp+82h] [rbp-246h] BYREF
  char v27; // [rsp+83h] [rbp-245h]
  char v28; // [rsp+84h] [rbp-244h]
  int v29; // [rsp+88h] [rbp-240h]
  PVOID Object; // [rsp+90h] [rbp-238h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp-230h] BYREF
  ACCESS_MASK v32; // [rsp+A0h] [rbp-228h]
  PVOID v33; // [rsp+A8h] [rbp-220h] BYREF
  PVOID v34; // [rsp+B0h] [rbp-218h] BYREF
  void *v35; // [rsp+B8h] [rbp-210h]
  __int64 v36; // [rsp+C0h] [rbp-208h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-200h]
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
  v25 = 0;
  v26 = 0;
  DmaAdapter = 0LL;
  if ( (a6 & 0xFFF94040) != 0
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
      v20 = *(_QWORD *)(a3 + 16);
      if ( !v20
        || !*(_QWORD *)(v20 + 8)
        || !*(_WORD *)v20
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
      v21 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)&v40[384] = v21;
    }
    else
    {
      v21 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v22 = v21 & 0x1DF2;
    else
      v22 = v21 & 0x11FF2;
    *(_DWORD *)&v40[384] = v22;
  }
  if ( Handle )
  {
    v34 = 0LL;
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &v34, 0LL);
    v11 = (struct _DMA_ADAPTER *)v34;
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
    || (ProcessProtectionRequirementsFromImage = ObReferenceObjectByHandleWithTag(
                                                   a4,
                                                   0x80u,
                                                   (POBJECT_TYPE)PsProcessType,
                                                   AccessMode,
                                                   0x72437350u,
                                                   &v33,
                                                   0LL),
        ProcessProtectionRequirementsFromImage >= 0) )
  {
    v12 = v33;
    ProcessProtectionRequirementsFromImage = PspReferenceTokenForNewProcess(
                                               (struct _KPROCESS *)v33,
                                               a9,
                                               AccessMode,
                                               &DmaAdapter);
    if ( ProcessProtectionRequirementsFromImage < 0 )
      goto LABEL_28;
    if ( v12 )
    {
      if ( v11 )
      {
        v24 = 0;
        LOBYTE(v14) = 0;
        ProcessProtectionRequirementsFromImage = SeQuerySigningPolicy(DmaAdapter, 0LL, 0LL, v14, &v25, &v26, &v24);
        if ( ProcessProtectionRequirementsFromImage < 0 )
          goto LABEL_27;
        v27 = v25;
        if ( (unsigned __int8)v25 > 1u || (v15 = v24) != 0 )
        {
LABEL_72:
          ProcessProtectionRequirementsFromImage = -1073741637;
          goto LABEL_27;
        }
LABEL_15:
        if ( !v11 )
          goto LABEL_16;
        ProcessProtectionRequirementsFromImage = PspGetProcessProtectionRequirementsFromImage((__int64)v11);
        if ( ProcessProtectionRequirementsFromImage >= 0 )
        {
          if ( v15 == v28 )
          {
LABEL_16:
            if ( v29 )
            {
              if ( a3 )
                v23 = *(_QWORD *)(a3 + 16);
              else
                v23 = 0LL;
              ProcessProtectionRequirementsFromImage = PsCreateMinimalProcess(
                                                         (PEPROCESS)v12,
                                                         v23,
                                                         0LL,
                                                         v15,
                                                         (PADAPTER_OBJECT)((unsigned __int64)DmaAdapter & -(__int64)(v35 != 0LL)),
                                                         a6,
                                                         0,
                                                         0LL,
                                                         0LL,
                                                         (_QWORD *)v37);
            }
            else
            {
              v16 = PspAllocateProcess(
                      (__int64)v12,
                      AccessMode,
                      (volatile signed __int32 *)a3,
                      v15,
                      v27,
                      v26,
                      v11,
                      DmaAdapter,
                      a6,
                      0,
                      0LL,
                      v35 != 0LL,
                      0LL,
                      (__int64)&v36,
                      &Object);
              ProcessProtectionRequirementsFromImage = v16;
              if ( v16 >= 0 )
              {
                v17 = v16;
                v29 = v16;
                v18 = 1;
                if ( (_DWORD)v36 )
                  v18 = 3;
                ProcessProtectionRequirementsFromImage = PspInsertProcess(
                                                           (char *)Object,
                                                           (struct _KPROCESS *)v12,
                                                           v32,
                                                           a6,
                                                           v39,
                                                           v18,
                                                           0LL,
                                                           (PACCESS_STATE)v40);
                if ( ProcessProtectionRequirementsFromImage >= 0 )
                {
                  ProcessProtectionRequirementsFromImage = PspCreateObjectHandle(
                                                             Object,
                                                             (__int64)v40,
                                                             (struct _OBJECT_TYPE *)PsProcessType);
                  if ( ProcessProtectionRequirementsFromImage >= 0 )
                  {
                    *(_QWORD *)v37 = *(_QWORD *)&v40[392];
                    ProcessProtectionRequirementsFromImage = v17;
                  }
                  PspDeleteObjectAccessState(v40);
                }
                if ( ProcessProtectionRequirementsFromImage < 0 )
                  PspRundownSingleProcess((ULONG_PTR)Object, 0);
                ObfDereferenceObjectWithTag(Object, 0x72437350u);
              }
            }
            goto LABEL_27;
          }
          goto LABEL_72;
        }
LABEL_27:
        HalPutDmaAdapter(DmaAdapter);
LABEL_28:
        if ( v12 )
          ObfDereferenceObjectWithTag(v12, 0x72437350u);
        goto LABEL_30;
      }
      v15 = *((_BYTE *)v12 + 2170);
      v26 = *((_BYTE *)v12 + 2169);
      v27 = *((_BYTE *)v12 + 2168);
      v25 = v27;
    }
    else
    {
      v15 = 114;
      v27 = 30;
      v25 = 30;
      v26 = 28;
    }
    v24 = v15;
    goto LABEL_15;
  }
LABEL_30:
  if ( v11 )
    HalPutDmaAdapter(v11);
  return ProcessProtectionRequirementsFromImage;
}
