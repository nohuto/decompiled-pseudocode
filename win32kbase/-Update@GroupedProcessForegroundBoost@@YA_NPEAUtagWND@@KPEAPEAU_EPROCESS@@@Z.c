/*
 * XREFs of ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008ECEC
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C0175DB0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0072AEC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C008EDE4 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     qsort @ 0x1C00DA4E0 (qsort.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C0153B9C (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 */

char __fastcall GroupedProcessForegroundBoost::Update(
        __int64 **this,
        struct tagWND *a2,
        struct _EPROCESS **a3,
        struct _EPROCESS **a4)
{
  unsigned int v4; // ebx
  char v7; // di
  size_t v8; // r12
  NTSTATUS v9; // eax
  struct _EPROCESS **v11; // rbp
  PVOID *v12; // rsi
  __int64 v13; // r15
  ULONG v14; // eax
  __int64 v15; // rcx
  _BYTE v16[16]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+30h] [rbp-68h]
  char v18; // [rsp+40h] [rbp-58h]
  char v19; // [rsp+48h] [rbp-50h]

  v4 = (unsigned int)a2;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v16,
    this[18]);
  v7 = 1;
  if ( v4 )
  {
    v8 = v4;
    qsort(a3, v4, 8uLL, (int (__cdecl *)(const void *, const void *))pEProcessCompareAscending);
    if ( v4 > 1 )
    {
      v11 = a3 + 1;
      v12 = (PVOID *)a3;
      v13 = v4 - 1;
      do
      {
        if ( *v11 == *v12 )
        {
          ObfDereferenceObject(*v12);
          *v12 = 0LL;
          --v4;
        }
        ++v12;
        ++v11;
        --v13;
      }
      while ( v13 );
    }
    qsort(a3, v8, 8uLL, (int (__cdecl *)(const void *, const void *))pEProcessCompareDescending);
    v9 = GroupedFGBoostProp::SetGroupedFGBoost((struct tagWND *)this, v4, a3);
  }
  else
  {
    v9 = GroupedFGBoostProp::ClearGroupedFGBoost((struct tagWND *)this);
  }
  if ( v9 < 0 )
  {
    v14 = RtlNtStatusToDosError(v9);
    UserSetLastError(v14);
    v7 = 0;
  }
  if ( v19 )
  {
    if ( v18 )
    {
      v15 = v17;
      if ( v17 )
      {
        *(_QWORD *)(v17 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v15, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
  return v7;
}
