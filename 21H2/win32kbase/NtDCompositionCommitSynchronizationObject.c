/*
 * XREFs of NtDCompositionCommitSynchronizationObject @ 0x1C01D2180
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00478C0 (UserIsCurrentProcessDwm.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005C370 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C005C904 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01D3A64 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitSynchronizationObject(void *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v6; // rdi
  struct _ERESOURCE *v7; // rbx
  unsigned int v8; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF
  struct DirectComposition::SynchronizationObject *v12; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v12 = 0LL;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2) )
  {
    v11 = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"shellExperienceComposer");
    v2 = RtlCapabilityCheck(0LL, &DestinationString, &v11);
    if ( v2 < 0 || !v11 )
      v2 = -1073741790;
  }
  KeEnterCriticalRegion();
  if ( v2 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v4);
    v6 = (PERESOURCE *)DefaultConnection;
    if ( DefaultConnection )
    {
      v7 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v7, 1u);
      v2 = DirectComposition::SynchronizationObject::ResolveHandle(a1, 2u, 1, &v12);
      if ( v2 >= 0 )
        *((_BYTE *)v12 + 33) = 1;
      ExReleaseResourceLite(v6[1]);
      KeLeaveCriticalRegion();
      DirectComposition::CConnection::Release((DirectComposition::CConnection *)v6, v8);
    }
    else
    {
      v2 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
