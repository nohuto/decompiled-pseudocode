/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C02112B0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C02137A4 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v11; // rdi
  struct _ERESOURCE *v12; // rbx
  unsigned int v13; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::SynchronizationObject *v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0LL;
  if ( UserIsCurrentProcessDwm((__int64)a1, a2, a3, a4)
    || (v16 = 0,
        DestinationString = 0LL,
        RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer"),
        (int)RtlCapabilityCheck(0LL, &DestinationString, &v16) >= 0)
    && v16 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v7, v6, v8, v9);
    v11 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v12 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v12, 1u);
      v5 = DirectComposition::SynchronizationObject::ResolveHandle(a1, 2u, 1, &v17);
      if ( v5 >= 0 )
        *((_BYTE *)v17 + 33) = 1;
      ExReleaseResourceLite(v11[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v11, v13);
    }
    else
    {
      v5 = -1073741790;
    }
  }
  else
  {
    v5 = -1073741790;
    KeEnterCriticalRegion();
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
