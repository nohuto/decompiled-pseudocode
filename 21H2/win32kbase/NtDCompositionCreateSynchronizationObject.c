/*
 * XREFs of NtDCompositionCreateSynchronizationObject @ 0x1C0211480
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C00908E0 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C0210D70 (DCompositionCreateSynchronizationObject.c)
 */

__int64 __fastcall NtDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct DirectComposition::CConnection *DefaultConnection; // rax
  PERESOURCE *v7; // rdi
  int v8; // ebx
  struct _ERESOURCE *v9; // rbx
  unsigned int v10; // edx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF
  CompositionObject *v13; // [rsp+50h] [rbp+18h] BYREF
  struct DirectComposition::CConnection *v14; // [rsp+58h] [rbp+20h]

  KeEnterCriticalRegion();
  v13 = 0LL;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v3, v2, v4, v5);
  v7 = (PERESOURCE *)DefaultConnection;
  v14 = DefaultConnection;
  if ( DefaultConnection )
  {
    v9 = (struct _ERESOURCE *)*((_QWORD *)DefaultConnection + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v9, 1u);
    v8 = DCompositionCreateSynchronizationObject(&v13);
    if ( v8 >= 0 )
    {
      Handle = 0LL;
      v8 = CompositionObject::OpenDwmHandle(v13, &Handle);
      if ( v8 >= 0 )
      {
        if ( (unsigned __int64)a1 >= MmUserProbeAddress )
          a1 = (_QWORD *)MmUserProbeAddress;
        *a1 = Handle;
      }
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( v7 )
  {
    ExReleaseResourceLite(v7[1]);
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release((DirectComposition::CConnection *)v7, v10);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v8;
}
