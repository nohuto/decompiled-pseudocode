/*
 * XREFs of PsOpenThread @ 0x14076A000
 * Callers:
 *     NtAlpcOpenSenderThread @ 0x140769DB0 (NtAlpcOpenSenderThread.c)
 *     NtOpenThread @ 0x140769FD0 (NtOpenThread.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetThreadId @ 0x1402DC330 (PsGetThreadId.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeCreateAccessState @ 0x1406991A0 (SeCreateAccessState.c)
 *     PsLookupThreadByThreadId @ 0x1406DBE00 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x14076A3D0 (PsLookupProcessThreadByCid.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(
        unsigned __int64 a1,
        int a2,
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
  int AccessState; // edi
  KPROCESSOR_MODE v17; // dl
  char v19; // [rsp+42h] [rbp-2F6h] BYREF
  KPROCESSOR_MODE v20; // [rsp+43h] [rbp-2F5h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-2F0h] BYREF
  int v22; // [rsp+50h] [rbp-2E8h] BYREF
  int v23; // [rsp+58h] [rbp-2E0h] BYREF
  PETHREAD Thread; // [rsp+60h] [rbp-2D8h] BYREF
  _QWORD *v25; // [rsp+68h] [rbp-2D0h] BYREF
  HANDLE ThreadId[2]; // [rsp+70h] [rbp-2C8h] BYREF
  ULONG HandleAttributes; // [rsp+80h] [rbp-2B8h]
  HANDLE Handle; // [rsp+88h] [rbp-2B0h] BYREF
  __int64 v29; // [rsp+90h] [rbp-2A8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-298h] BYREF
  _BYTE v31[224]; // [rsp+140h] [rbp-1F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp-118h] BYREF
  int *v33; // [rsp+230h] [rbp-108h]
  __int64 v34; // [rsp+238h] [rbp-100h]
  int *v35; // [rsp+240h] [rbp-F8h]
  __int64 v36; // [rsp+248h] [rbp-F0h]
  unsigned int *v37; // [rsp+250h] [rbp-E8h]
  __int64 v38; // [rsp+258h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+260h] [rbp-D8h] BYREF
  unsigned int *v40; // [rsp+280h] [rbp-B8h]
  __int64 v41; // [rsp+288h] [rbp-B0h]
  int *v42; // [rsp+290h] [rbp-A8h]
  __int64 v43; // [rsp+298h] [rbp-A0h]
  int *v44; // [rsp+2A0h] [rbp-98h]
  __int64 v45; // [rsp+2A8h] [rbp-90h]
  _QWORD **v46; // [rsp+2B0h] [rbp-88h]
  __int64 v47; // [rsp+2B8h] [rbp-80h]
  char *v48; // [rsp+2C0h] [rbp-78h]
  __int64 v49; // [rsp+2C8h] [rbp-70h]
  KPROCESSOR_MODE *v50; // [rsp+2D0h] [rbp-68h]
  __int64 v51; // [rsp+2D8h] [rbp-60h]
  __int64 *v52; // [rsp+2E0h] [rbp-58h]
  __int64 v53; // [rsp+2E8h] [rbp-50h]

  v25 = (_QWORD *)a1;
  Handle = 0LL;
  Thread = 0LL;
  *(_OWORD *)ThreadId = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v31, 0, sizeof(v31));
  v10 = 0;
  if ( a5 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v11 = a1;
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
    AccessState = -1073741776;
  }
  else
  {
    while ( 1 )
    {
      AccessState = SeCreateAccessState((int)&PassedAccessState, (int)v31, a2, (__int64)PsThreadType + 76);
      if ( AccessState < 0 )
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
        AccessState = PsLookupProcessThreadByCid(ThreadId, 0LL, &Thread);
        if ( AccessState < 0 )
        {
LABEL_27:
          SepDeleteAccessState((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          break;
        }
      }
      else
      {
        AccessState = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( AccessState < 0 )
          goto LABEL_27;
        ThreadId[0] = (HANDLE)Thread[1].CycleTime;
      }
      AccessState = ObOpenObjectByPointer(
                      Thread,
                      v13,
                      &PassedAccessState,
                      0,
                      (POBJECT_TYPE)PsThreadType,
                      AccessMode,
                      &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      ObfDereferenceObject(Thread);
      if ( AccessState >= 0 )
      {
        *v25 = Handle;
        if ( v10 && (unsigned int)dword_140C03010 > 5 && tlgKeywordOn((__int64)&dword_140C03010, 0x400000000000LL) )
        {
          v21 = (unsigned int)PsGetThreadId(Thread);
          v40 = &v21;
          v41 = 4LL;
          v22 = (int)ThreadId[0];
          v42 = &v22;
          v43 = 4LL;
          v23 = a2;
          v44 = &v23;
          v45 = 4LL;
          LODWORD(v25) = v13;
          v46 = &v25;
          v47 = 4LL;
          v19 = a5;
          v48 = &v19;
          v49 = 1LL;
          v20 = AccessMode;
          v50 = &v20;
          v51 = 1LL;
          v29 = 0x1000000LL;
          v52 = &v29;
          v53 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03010,
            (unsigned __int8 *)&dword_140033EB4,
            0LL,
            0LL,
            9u,
            &v39);
        }
        break;
      }
      if ( (v13 & 0x400) == 0 || AccessState != -1073741790 || v10 )
        break;
      v10 = 1;
    }
  }
  v21 = AccessState;
  v22 = a2;
  v23 = (int)ThreadId[1];
  LODWORD(v25) = ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v25;
  *(_QWORD *)&UserData.Size = 4LL;
  v33 = &v23;
  v34 = 4LL;
  v35 = &v22;
  v36 = 4LL;
  v37 = &v21;
  v38 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)AccessState;
}
