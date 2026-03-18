/*
 * XREFs of NtUserUserHandleGrantAccess @ 0x1C0200530
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F44 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserUserHandleGrantAccess(__int64 a1, void *a2, int a3)
{
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  PVOID v8; // rsi
  struct _ERESOURCE *JobLock; // rax
  __int64 v11; // rdx
  __int64 *i; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // r9
  struct _ERESOURCE *v22; // rax
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h]
  PVOID v25; // [rsp+58h] [rbp-40h]
  __int64 v26; // [rsp+60h] [rbp-38h]
  unsigned __int64 v27; // [rsp+68h] [rbp-30h]

  v5 = 0;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
  v8 = Object;
  v25 = Object;
  if ( v6 < 0 )
  {
    UserSetLastError(87LL, v7);
    return 0LL;
  }
  JobLock = (struct _ERESOURCE *)PsGetJobLock(Object);
  ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
  EnterCrit(1LL, 0LL);
  if ( (unsigned int)PsGetJobUIRestrictionsClass(v8) )
  {
    for ( i = (__int64 *)gpJobsList; ; i = (__int64 *)*i )
    {
      if ( !i )
        goto LABEL_10;
      if ( (PVOID)i[1] == v8 )
        break;
    }
    if ( !HMValidateHandle(a1, 0xFFu) )
      goto LABEL_10;
    v26 = gSharedInfo[1] + 32LL * (unsigned __int16)a1;
    *(_BYTE *)(v26 + 25) |= 0x20u;
    v13 = i[7];
    v24 = v13;
    if ( a3 )
    {
      v14 = *((_DWORD *)i + 12);
      v15 = *((unsigned int *)i + 13);
      if ( v14 != (_DWORD)v15 )
        goto LABEL_22;
      if ( v14 )
      {
        v18 = 8 * v15;
        v27 = v18;
        v17 = 0xFFFFFFFFLL;
        if ( v18 > 0xFFFFFFFF )
          goto LABEL_19;
        v17 = (unsigned int)(v18 + 64);
        if ( (unsigned int)v17 < (unsigned int)v18 )
          goto LABEL_19;
        v16 = UserReAllocPool(v13, (unsigned int)v18, (unsigned int)v17, 1751610197LL);
      }
      else
      {
        v16 = Win32AllocPoolZInit(64LL, 1751610197LL);
      }
      v24 = v16;
      v13 = v16;
      if ( !v16 )
      {
LABEL_19:
        UserSetLastError(8LL, v17);
        goto LABEL_34;
      }
      i[7] = v16;
      *((_DWORD *)i + 13) += 8;
LABEL_22:
      while ( 1 )
      {
        v19 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v19 )
          break;
        if ( *(_QWORD *)(v13 + 8LL * v5) == a1 )
        {
          if ( v5 < (unsigned int)v19 )
            goto LABEL_33;
          break;
        }
        ++v5;
      }
      *(_QWORD *)(v13 + 8 * v19) = a1;
      ++*((_DWORD *)i + 12);
    }
    else
    {
      while ( 1 )
      {
        v20 = *((unsigned int *)i + 12);
        if ( v5 >= (unsigned int)v20 )
          goto LABEL_32;
        v21 = (_QWORD *)(v13 + 8LL * v5);
        if ( *v21 == a1 )
          break;
        ++v5;
      }
      memmove((void *)(v13 + 8LL * v5), v21 + 1, 8LL * ((unsigned int)v20 - v5 - 1));
      v20 = (unsigned int)--*((_DWORD *)i + 12);
      if ( v5 >= (unsigned int)v20 )
LABEL_32:
        UserSetLastError(6LL, v20);
    }
LABEL_33:
    v5 = 1;
    goto LABEL_34;
  }
LABEL_10:
  UserSetLastError(87LL, v11);
LABEL_34:
  UserSessionSwitchLeaveCrit(v13);
  v22 = (struct _ERESOURCE *)PsGetJobLock(v8);
  ExReleaseResourceAndLeaveCriticalRegion(v22);
  ObfDereferenceObject(v8);
  return (int)v5;
}
