/*
 * XREFs of ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D801C
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C00D8880 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00337E0 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00AE618 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     qsort @ 0x1C00D5A30 (qsort.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C00D7CE4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 */

char __fastcall GroupedProcessForegroundBoost::Update(
        __int64 **this,
        struct tagWND *a2,
        struct _EPROCESS **Src,
        struct _EPROCESS **a4)
{
  unsigned int v4; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bl
  size_t v11; // r12
  struct _EPROCESS **v12; // rbp
  PVOID *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // r9
  NTSTATUS v16; // eax
  ULONG v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _BYTE v22[48]; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned int)a2;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v22,
    this[18]);
  v10 = 0;
  if ( v4 )
  {
    v11 = v4;
    qsort(Src, v4, 8uLL, pEProcessCompareAscending);
    if ( v4 > 1 )
    {
      v12 = Src + 1;
      v13 = (PVOID *)Src;
      v14 = v4 - 1;
      do
      {
        if ( *v12 == *v13 )
        {
          ObfDereferenceObject(*v13);
          --v4;
          *v13 = 0LL;
        }
        ++v13;
        ++v12;
        --v14;
      }
      while ( v14 );
    }
    qsort(Src, v11, 8uLL, pEProcessCompareDescending);
    v16 = GroupedFGBoostProp::SetGroupedFGBoost((struct _KTHREAD ***)this, v4, Src, v15);
  }
  else
  {
    v16 = GroupedFGBoostProp::ClearGroupedFGBoost((struct _KTHREAD ***)this, v7, v8, v9);
  }
  if ( v16 >= 0 )
  {
    v10 = 1;
  }
  else
  {
    v17 = RtlNtStatusToDosError(v16);
    UserSetLastError(v17, v18, v19, v20);
  }
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)v22);
  return v10;
}
