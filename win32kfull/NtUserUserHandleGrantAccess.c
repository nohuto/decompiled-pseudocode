/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C01E0F70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0064BF4 (HMValidateHandle.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 *i; // rdi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // edx
  _QWORD *v18; // r9
  struct _ERESOURCE *v19; // rax
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h]
  PVOID v22; // [rsp+58h] [rbp-40h]
  __int64 v23; // [rsp+60h] [rbp-38h]
  __int64 v24; // [rsp+68h] [rbp-30h]

  v5 = 0;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v7 = Object;
  v22 = Object;
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
    v23 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v23 + 25) |= 0x20u;
    v11 = i[7];
    v21 = v11;
    if ( a3 )
    {
      v12 = *((_DWORD *)i + 12);
      v13 = *((unsigned int *)i + 13);
      if ( v12 != (_DWORD)v13 )
        goto LABEL_22;
      if ( v12 )
      {
        v15 = 8 * v13;
        v24 = 8 * v13;
        if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v15 + 64 < v15 )
          goto LABEL_19;
        v14 = UserReAllocPool(v11, v15, v15 + 64, 1751610197LL);
      }
      else
      {
        v14 = Win32AllocPoolZInit(64LL, 1751610197LL);
      }
      v21 = v14;
      v11 = v14;
      if ( !v14 )
      {
LABEL_19:
        UserSetLastError(8);
        goto LABEL_34;
      }
      i[7] = v14;
      *((_DWORD *)i + 13) += 8;
LABEL_22:
      while ( 1 )
      {
        v16 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v16 )
          break;
        if ( *(_QWORD *)(v11 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v16 )
            goto LABEL_33;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v11 + 8 * v16) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v17 = *((_DWORD *)i + 12);
        if ( v5 >= v17 )
          goto LABEL_32;
        v18 = (_QWORD *)(v11 + 8LL * v5);
        if ( *v18 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v11 + 8LL * v5), v18 + 1, 8LL * (v17 - v5 - 1));
      if ( v5 >= --*((_DWORD *)i + 12) )
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
  UserSessionSwitchLeaveCrit(v11);
  v19 = (struct _ERESOURCE *)PsGetJobLock(v7);
  ExReleaseResourceAndLeaveCriticalRegion(v19);
  ObfDereferenceObject(v7);
  return (int)v5;
}
