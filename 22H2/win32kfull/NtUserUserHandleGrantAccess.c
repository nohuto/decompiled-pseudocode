/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C0203F50
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C004F444 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(unsigned __int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  PVOID v9; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int DLT; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *i; // rdi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  _QWORD *v27; // r9
  struct _ERESOURCE *v28; // rax
  PVOID Object; // [rsp+40h] [rbp-68h] BYREF
  __int64 v30; // [rsp+48h] [rbp-60h]
  int v31; // [rsp+50h] [rbp-58h]
  PVOID v32; // [rsp+58h] [rbp-50h]
  __int64 v33; // [rsp+60h] [rbp-48h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]
  _BYTE v35[24]; // [rsp+78h] [rbp-30h] BYREF

  v5 = 0;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v9 = Object;
  v32 = Object;
  if ( v6 < 0 )
  {
    UserSetLastError(87LL, v7, v8);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(0LL, 1LL);
  DLT = DLT_HANDLEMANAGER::getDLT(v13, v12, v14);
  GetDomainLockRef(DLT);
  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v35);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v9) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v9 )
        break;
    }
    if ( !HMValidateHandle(a1, 0xFFu) )
      goto LABEL_10;
    v33 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v33 + 25) |= 0x20u;
    v19 = i[7];
    v30 = v19;
    if ( a3 )
    {
      v20 = *((_DWORD *)i + 12);
      v21 = *((unsigned int *)i + 13);
      if ( v20 != (_DWORD)v21 )
        goto LABEL_22;
      if ( v20 )
      {
        v24 = 8 * v21;
        v34 = v24;
        v23 = 0xFFFFFFFFLL;
        if ( v24 > 0xFFFFFFFF )
          goto LABEL_19;
        v23 = (unsigned int)(v24 + 64);
        if ( (unsigned int)v23 < (unsigned int)v24 )
          goto LABEL_19;
        v31 = v24 + 64;
        v22 = UserReAllocPool(v19, (unsigned int)v24, (unsigned int)v23, 1751610197LL);
      }
      else
      {
        v22 = Win32AllocPool(64LL, 1751610197LL);
      }
      v30 = v22;
      v19 = v22;
      if ( !v22 )
      {
LABEL_19:
        UserSetLastError(8LL, v23, v17);
        goto LABEL_34;
      }
      i[7] = v22;
      *((_DWORD *)i + 13) += 8;
LABEL_22:
      while ( 1 )
      {
        v25 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v25 )
          break;
        if ( *(_QWORD *)(v19 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v25 )
            goto LABEL_33;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v19 + 8 * v25) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v26 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v26 )
          goto LABEL_32;
        v27 = (_QWORD *)(v19 + 8LL * v5);
        if ( *v27 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v19 + 8LL * v5), v27 + 1, 8LL * ((unsigned int)v26 - v5 - 1));
      v26 = (unsigned int)--*((_DWORD *)i + 12);
      if ( v5 >= (unsigned int)v26 )
LABEL_32:
        UserSetLastError(6LL, v26, v17);
    }
LABEL_33:
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87LL, v16, v17);
LABEL_34:
  UserSessionSwitchLeaveCrit(v19);
  v28 = (struct _ERESOURCE *)PsGetJobLock(v9);
  ExReleaseResourceAndLeaveCriticalRegion(v28);
  ObfDereferenceObject(v9);
  return (int)v5;
}
