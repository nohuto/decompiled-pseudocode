/*
 * XREFs of PspCreateProcess @ 0x1407CE380
 * Callers:
 *     NtCreateProcessEx @ 0x140906FC0 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140A3D098 (PspInitPhase0.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140607508 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspInsertProcess @ 0x140607B70 (PspInsertProcess.c)
 *     SeQuerySigningPolicy @ 0x14060D450 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x14060D724 (PspReferenceTokenForNewProcess.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     PspCreateObjectHandle @ 0x1406C3584 (PspCreateObjectHandle.c)
 *     PspAllocateProcess @ 0x140703F08 (PspAllocateProcess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     PspDeleteObjectAccessState @ 0x14090A12C (PspDeleteObjectAccessState.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        __int64 a1,
        int a2,
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
  char v14; // bl
  int v15; // eax
  int v16; // ebx
  char v17; // al
  NTSTATUS result; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  char v23; // [rsp+80h] [rbp-248h] BYREF
  unsigned __int8 v24; // [rsp+81h] [rbp-247h] BYREF
  char v25; // [rsp+82h] [rbp-246h] BYREF
  char v26; // [rsp+83h] [rbp-245h]
  char v27; // [rsp+84h] [rbp-244h]
  int v28; // [rsp+88h] [rbp-240h]
  PVOID Object; // [rsp+90h] [rbp-238h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+98h] [rbp-230h] BYREF
  int v31; // [rsp+A0h] [rbp-228h]
  PVOID v32; // [rsp+A8h] [rbp-220h] BYREF
  PVOID v33; // [rsp+B0h] [rbp-218h] BYREF
  void *v34; // [rsp+B8h] [rbp-210h]
  __int64 v35; // [rsp+C0h] [rbp-208h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-200h]
  PVOID v37; // [rsp+D0h] [rbp-1F8h]
  HANDLE v38; // [rsp+D8h] [rbp-1F0h]
  __int64 v39[50]; // [rsp+F0h] [rbp-1D8h] BYREF

  v31 = a2;
  v36 = a1;
  v38 = a8;
  v34 = a9;
  v35 = 0LL;
  v27 = 0;
  v32 = 0LL;
  Object = 0LL;
  v24 = 0;
  v25 = 0;
  DmaAdapter = 0LL;
  if ( (a6 & 0xFFF94040) != 0
    || (BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 7) != 0 && AccessMode )
  {
    return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
    return -1073741811;
  v28 = a6 & 0x800;
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
      v19 = *(_QWORD *)(a3 + 16);
      if ( !v19
        || !*(_QWORD *)(v19 + 8)
        || !*(_WORD *)v19
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
  memset(v39, 0, sizeof(v39));
  BYTE4(v39[48]) = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = *(_DWORD *)(a3 + 24);
      LODWORD(v39[48]) = v20;
    }
    else
    {
      v20 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v21 = v20 & 0x1DF2;
    else
      v21 = v20 & 0x11FF2;
    LODWORD(v39[48]) = v21;
  }
  if ( Handle )
  {
    v33 = 0LL;
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &v33, 0LL);
    v11 = (struct _DMA_ADAPTER *)v33;
    v37 = v33;
    if ( result < 0 )
      return result;
  }
  else
  {
    v11 = 0LL;
    v37 = 0LL;
  }
  if ( !a4
    || (ProcessProtectionRequirementsFromImage = ObReferenceObjectByHandleWithTag(
                                                   a4,
                                                   0x80u,
                                                   (POBJECT_TYPE)PsProcessType,
                                                   AccessMode,
                                                   0x72437350u,
                                                   &v32,
                                                   0LL),
        ProcessProtectionRequirementsFromImage >= 0) )
  {
    v12 = v32;
    ProcessProtectionRequirementsFromImage = PspReferenceTokenForNewProcess(
                                               (struct _KPROCESS *)v32,
                                               a9,
                                               AccessMode,
                                               &DmaAdapter);
    if ( ProcessProtectionRequirementsFromImage < 0 )
      goto LABEL_28;
    if ( v12 )
    {
      if ( v11 )
      {
        v23 = 0;
        ProcessProtectionRequirementsFromImage = SeQuerySigningPolicy(
                                                   DmaAdapter,
                                                   0LL,
                                                   0,
                                                   0,
                                                   &v24,
                                                   (unsigned __int8 *)&v25,
                                                   (unsigned __int8 *)&v23);
        if ( ProcessProtectionRequirementsFromImage < 0 )
          goto LABEL_27;
        v26 = v24;
        if ( v24 > 1u || (v14 = v23) != 0 )
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
          if ( v14 == v27 )
          {
LABEL_16:
            if ( v28 )
            {
              if ( a3 )
                v22 = *(_QWORD *)(a3 + 16);
              else
                v22 = 0LL;
              ProcessProtectionRequirementsFromImage = PsCreateMinimalProcess(
                                                         (PEPROCESS)v12,
                                                         v22,
                                                         0LL,
                                                         v14,
                                                         (PADAPTER_OBJECT)((unsigned __int64)DmaAdapter & -(__int64)(v34 != 0LL)),
                                                         a6,
                                                         0,
                                                         0LL,
                                                         0LL,
                                                         (_QWORD *)v36);
            }
            else
            {
              v15 = PspAllocateProcess(
                      (__int64)v12,
                      AccessMode,
                      (volatile signed __int32 *)a3,
                      v14,
                      v26,
                      v25,
                      v11,
                      DmaAdapter,
                      a6,
                      0,
                      0LL,
                      v34 != 0LL,
                      0LL,
                      (__int64)&v35,
                      &Object);
              ProcessProtectionRequirementsFromImage = v15;
              if ( v15 >= 0 )
              {
                v16 = v15;
                v28 = v15;
                v17 = 1;
                if ( (_DWORD)v35 )
                  v17 = 3;
                ProcessProtectionRequirementsFromImage = PspInsertProcess(
                                                           (char *)Object,
                                                           (struct _KPROCESS *)v12,
                                                           v31,
                                                           a6,
                                                           v38,
                                                           v17,
                                                           0LL,
                                                           (__int64)v39);
                if ( ProcessProtectionRequirementsFromImage >= 0 )
                {
                  ProcessProtectionRequirementsFromImage = PspCreateObjectHandle(
                                                             Object,
                                                             (__int64)v39,
                                                             (struct _OBJECT_TYPE *)PsProcessType);
                  if ( ProcessProtectionRequirementsFromImage >= 0 )
                  {
                    *(_QWORD *)v36 = v39[49];
                    ProcessProtectionRequirementsFromImage = v16;
                  }
                  PspDeleteObjectAccessState(v39);
                }
                if ( ProcessProtectionRequirementsFromImage < 0 )
                  PspRundownSingleProcess((__int64)Object, 0);
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
      v14 = *((_BYTE *)v12 + 2170);
      v25 = *((_BYTE *)v12 + 2169);
      v26 = *((_BYTE *)v12 + 2168);
      v24 = v26;
    }
    else
    {
      v14 = 114;
      v26 = 30;
      v24 = 30;
      v25 = 28;
    }
    v23 = v14;
    goto LABEL_15;
  }
LABEL_30:
  if ( v11 )
    HalPutDmaAdapter(v11);
  return ProcessProtectionRequirementsFromImage;
}
