/*
 * XREFs of PsOpenThread @ 0x140626120
 * Callers:
 *     NtOpenThread @ 0x1406260F0 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x14068F9F0 (NtAlpcOpenSenderThread.c)
 * Callees:
 *     EtwWrite @ 0x14025D4F0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     PsGetThreadId @ 0x14030DA30 (PsGetThreadId.c)
 *     SepDeleteAccessState @ 0x140345670 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PsLookupThreadByThreadId @ 0x140625A50 (PsLookupThreadByThreadId.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     PsLookupProcessThreadByCid @ 0x1406839D0 (PsLookupProcessThreadByCid.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCreateAccessState @ 0x1406DA670 (SeCreateAccessState.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE PreviousMode)
{
  int v10; // r12d
  __int64 v11; // rcx
  bool v12; // cl
  ULONG v13; // esi
  char v14; // al
  KPROCESSOR_MODE AccessMode; // r15
  NTSTATUS v16; // edi
  KPROCESSOR_MODE v17; // dl
  char v19; // [rsp+42h] [rbp-306h] BYREF
  KPROCESSOR_MODE v20; // [rsp+43h] [rbp-305h] BYREF
  PETHREAD Thread; // [rsp+48h] [rbp-300h] BYREF
  HANDLE ThreadId[2]; // [rsp+50h] [rbp-2F8h] BYREF
  ULONG HandleAttributes; // [rsp+60h] [rbp-2E8h]
  unsigned int v24; // [rsp+64h] [rbp-2E4h] BYREF
  int v25; // [rsp+68h] [rbp-2E0h] BYREF
  unsigned int v26; // [rsp+6Ch] [rbp-2DCh] BYREF
  ULONG v27; // [rsp+70h] [rbp-2D8h] BYREF
  int v28; // [rsp+78h] [rbp-2D0h] BYREF
  int v29; // [rsp+80h] [rbp-2C8h] BYREF
  unsigned int v30; // [rsp+88h] [rbp-2C0h] BYREF
  NTSTATUS v31; // [rsp+90h] [rbp-2B8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-2B0h] BYREF
  _QWORD *v33; // [rsp+A0h] [rbp-2A8h]
  __int64 v34; // [rsp+A8h] [rbp-2A0h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+B0h] [rbp-298h] BYREF
  _BYTE v36[224]; // [rsp+150h] [rbp-1F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+230h] [rbp-118h] BYREF
  int *v38; // [rsp+240h] [rbp-108h]
  __int64 v39; // [rsp+248h] [rbp-100h]
  int *v40; // [rsp+250h] [rbp-F8h]
  __int64 v41; // [rsp+258h] [rbp-F0h]
  NTSTATUS *v42; // [rsp+260h] [rbp-E8h]
  __int64 v43; // [rsp+268h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+270h] [rbp-D8h] BYREF
  unsigned int *v45; // [rsp+290h] [rbp-B8h]
  __int64 v46; // [rsp+298h] [rbp-B0h]
  int *v47; // [rsp+2A0h] [rbp-A8h]
  __int64 v48; // [rsp+2A8h] [rbp-A0h]
  int *v49; // [rsp+2B0h] [rbp-98h]
  __int64 v50; // [rsp+2B8h] [rbp-90h]
  ULONG *v51; // [rsp+2C0h] [rbp-88h]
  __int64 v52; // [rsp+2C8h] [rbp-80h]
  char *v53; // [rsp+2D0h] [rbp-78h]
  __int64 v54; // [rsp+2D8h] [rbp-70h]
  KPROCESSOR_MODE *v55; // [rsp+2E0h] [rbp-68h]
  __int64 v56; // [rsp+2E8h] [rbp-60h]
  __int64 *v57; // [rsp+2F0h] [rbp-58h]
  __int64 v58; // [rsp+2F8h] [rbp-50h]

  v33 = (_QWORD *)a1;
  Handle = 0LL;
  Thread = 0LL;
  *(_OWORD *)ThreadId = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v36, 0, sizeof(v36));
  v10 = 0;
  if ( a5 )
  {
    v11 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (a3 & 3) == 0 )
    {
      v12 = *(_QWORD *)(a3 + 16) != 0LL;
      v13 = *(_DWORD *)(a3 + 24) & 0x1DF2;
      HandleAttributes = v13;
      if ( !a4 )
      {
        v14 = 0;
        goto LABEL_8;
      }
      if ( ((unsigned __int8)a4 & 3) == 0 )
      {
        *(_OWORD *)ThreadId = *a4;
        v14 = 1;
        v13 = HandleAttributes;
LABEL_8:
        AccessMode = PreviousMode;
        goto LABEL_11;
      }
    }
    ExRaiseDatatypeMisalignment();
  }
  v12 = *(_QWORD *)(a3 + 16) != 0LL;
  AccessMode = PreviousMode;
  v13 = *(_DWORD *)(a3 + 24) & (PreviousMode != 0 ? 7666 : 73714);
  if ( a4 )
  {
    *(_OWORD *)ThreadId = *a4;
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
LABEL_11:
  if ( v12 || !v14 )
  {
    v16 = -1073741776;
  }
  else
  {
    while ( 1 )
    {
      v16 = SeCreateAccessState(&PassedAccessState, v36, a2, (char *)PsThreadType + 76);
      if ( v16 < 0 )
        break;
      if ( (v13 & 0x400) == 0 || (v17 = 1, v10) )
        v17 = AccessMode;
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v17) )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      if ( ThreadId[0] )
      {
        v16 = PsLookupProcessThreadByCid(ThreadId, 0LL, &Thread);
        if ( v16 < 0 )
        {
LABEL_27:
          SepDeleteAccessState((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          break;
        }
      }
      else
      {
        v16 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( v16 < 0 )
          goto LABEL_27;
        ThreadId[0] = (HANDLE)Thread[1].CycleTime;
      }
      v16 = ObOpenObjectByPointer(Thread, v13, &PassedAccessState, 0, (POBJECT_TYPE)PsThreadType, AccessMode, &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      HalPutDmaAdapter((PADAPTER_OBJECT)Thread);
      if ( v16 >= 0 )
      {
        *v33 = Handle;
        if ( v10 && (unsigned int)dword_140C01AB0 > 5 && tlgKeywordOn((__int64)&dword_140C01AB0, 0x400000000000LL) )
        {
          v24 = (unsigned int)PsGetThreadId(Thread);
          v45 = &v24;
          v46 = 4LL;
          v25 = (int)ThreadId[0];
          v47 = &v25;
          v48 = 4LL;
          v26 = a2;
          v49 = (int *)&v26;
          v50 = 4LL;
          v27 = v13;
          v51 = &v27;
          v52 = 4LL;
          v19 = a5;
          v53 = &v19;
          v54 = 1LL;
          v20 = AccessMode;
          v55 = &v20;
          v56 = 1LL;
          v34 = 0x1000000LL;
          v57 = &v34;
          v58 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C01AB0,
            (unsigned __int8 *)byte_14002C203,
            0LL,
            0LL,
            9u,
            &v44);
        }
        break;
      }
      if ( (v13 & 0x400) == 0 || v16 != -1073741790 || v10 )
        break;
      v10 = 1;
    }
  }
  v31 = v16;
  v30 = a2;
  v29 = (int)ThreadId[1];
  v28 = (int)ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v28;
  *(_QWORD *)&UserData.Size = 4LL;
  v38 = &v29;
  v39 = 4LL;
  v40 = (int *)&v30;
  v41 = 4LL;
  v42 = &v31;
  v43 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v16;
}
