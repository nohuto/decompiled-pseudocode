/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C01DFEC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 *i; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // edx
  _QWORD *v20; // r9
  struct _ERESOURCE *v21; // rax
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  PVOID v24; // [rsp+58h] [rbp-40h]
  __int64 v25; // [rsp+60h] [rbp-38h]
  __int64 v26; // [rsp+68h] [rbp-30h]

  v5 = 0;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v7 = Object;
  v24 = Object;
  if ( v6 < 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(1LL, 0LL);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v7) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v7 )
        break;
    }
    if ( !HMValidateHandle(a1, 0xFFu) )
      goto LABEL_10;
    v25 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v25 + 25) |= 0x20u;
    v14 = i[7];
    v23 = v14;
    if ( a3 )
    {
      v15 = *((_DWORD *)i + 12);
      v16 = *((unsigned int *)i + 13);
      if ( v15 != (_DWORD)v16 )
        goto LABEL_22;
      if ( v15 )
      {
        v18 = 8 * v16;
        v26 = 8 * v16;
        if ( (unsigned __int64)(8 * v16) > 0xFFFFFFFF || v18 + 64 < v18 )
          goto LABEL_19;
        v17 = UserReAllocPool(v14, v18, v18 + 64, 1751610197LL);
      }
      else
      {
        v17 = Win32AllocPoolZInit(64LL, 1751610197LL);
      }
      v23 = v17;
      v14 = v17;
      if ( !v17 )
      {
LABEL_19:
        UserSetLastError(8);
        goto LABEL_34;
      }
      i[7] = v17;
      *((_DWORD *)i + 13) += 8;
LABEL_22:
      while ( 1 )
      {
        v13 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v13 )
          break;
        if ( *(_QWORD *)(v14 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v13 )
            goto LABEL_33;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v14 + 8 * v13) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v19 = *((_DWORD *)i + 12);
        if ( v5 >= v19 )
          goto LABEL_32;
        v20 = (_QWORD *)(v14 + 8LL * v5);
        if ( *v20 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v14 + 8LL * v5), v20 + 1, 8LL * (v19 - v5 - 1));
      v13 = (unsigned int)--*((_DWORD *)i + 12);
      if ( v5 >= (unsigned int)v13 )
LABEL_32:
        UserSetLastError(6);
    }
LABEL_33:
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87);
LABEL_34:
  UserSessionSwitchLeaveCrit(v14, v13, v11, v12);
  v21 = (struct _ERESOURCE *)PsGetJobLock(v7);
  ExReleaseResourceAndLeaveCriticalRegion(v21);
  ObfDereferenceObject(v7);
  return (int)v5;
}
