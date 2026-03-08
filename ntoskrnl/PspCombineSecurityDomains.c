/*
 * XREFs of PspCombineSecurityDomains @ 0x140778A04
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     KeSynchronizeSecurityDomain @ 0x1402EAE28 (KeSynchronizeSecurityDomain.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     SeCreateAccessStateEx @ 0x1406991E0 (SeCreateAccessStateEx.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 */

__int64 __fastcall PspCombineSecurityDomains(PVOID Object, PVOID a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  NTSTATUS v7; // eax
  signed __int64 v9; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-100h] BYREF
  HANDLE v11; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[28]; // [rsp+F0h] [rbp-10h] BYREF

  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v14, 0, sizeof(v14));
  if ( !_bittest((const signed __int32 *)Object + 543, 0x16u) || !_bittest((const signed __int32 *)a2 + 543, 0x16u) )
    return 3221225596LL;
  _InterlockedOr(v10, 0);
  v4 = *((_QWORD *)Object + 316);
  v5 = *((_QWORD *)a2 + 316);
  if ( v4 == v5 )
    return 0LL;
  if ( !v4 || !v5 || *((int *)Object + 628) < 0 || *((int *)a2 + 628) < 0 )
    return 3221226597LL;
  Handle = 0LL;
  v11 = 0LL;
  v6 = SeCreateAccessStateEx(0LL, (struct _KPROCESS *)a2, &PassedAccessState, v14, 40, (_DWORD *)PsProcessType + 19);
  if ( v6 >= 0 )
  {
    v7 = ObOpenObjectByPointer(Object, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle);
    v6 = v7;
    if ( v7 >= 0 )
    {
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      v6 = SeCreateAccessStateEx(
             0LL,
             (struct _KPROCESS *)Object,
             &PassedAccessState,
             v14,
             40,
             (_DWORD *)PsProcessType + 19);
      if ( v6 < 0 )
        goto LABEL_14;
      v7 = ObOpenObjectByPointer(a2, 0x600u, &PassedAccessState, 0, (POBJECT_TYPE)PsProcessType, 0, &v11);
      v6 = v7;
      if ( v7 >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
        *((_QWORD *)Object + 316) = *((_QWORD *)a2 + 316);
        if ( (*((_DWORD *)a2 + 628) | *((_DWORD *)Object + 628)) < 0 )
        {
          v9 = _InterlockedIncrement64(&PsNextSecurityDomain);
          v6 = -1073740699;
          *((_QWORD *)Object + 316) = v9;
          *((_QWORD *)Object + 317) = v9;
        }
        KeSynchronizeSecurityDomain((_KPROCESS *)Object);
        goto LABEL_13;
      }
      v11 = 0LL;
    }
    else
    {
      Handle = 0LL;
    }
    if ( v7 == -1073741790 )
      v6 = -1073740699;
LABEL_13:
    SepDeleteAccessState((__int64)&PassedAccessState);
    SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
  }
LABEL_14:
  if ( v11 )
    ObCloseHandle(v11, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v6;
}
