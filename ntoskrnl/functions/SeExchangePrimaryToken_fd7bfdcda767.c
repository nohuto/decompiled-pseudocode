__int64 __fastcall SeExchangePrimaryToken(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  unsigned int SessionId; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v12; // ebp
  int v13; // r14d
  unsigned __int64 v14; // rbx
  struct _KTHREAD *v15; // rax
  __int64 result; // rax
  PVOID v17; // rcx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  char v21; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  SessionObjectById = 0LL;
  v21 = 0;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  if ( SessionId != -1 && !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = MmGetSessionObjectById(SessionId, v9);
  v10 = MmGetSessionId(a1);
  CurrentThread = KeGetCurrentThread();
  v12 = v10;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v20, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  else
  {
    *(_BYTE *)(a2 + 204) = 1;
    v13 = SepSetTrustLevelForProcessToken(a2, a1, &v21);
    if ( v13 < 0 )
    {
      _InterlockedOr(v20, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( !SessionObjectById )
        return (unsigned int)v13;
      v17 = SessionObjectById;
LABEL_21:
      ObfDereferenceObject(v17);
      return (unsigned int)v13;
    }
    if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    {
      v18 = *(_DWORD *)(a2 + 120);
      if ( v18 != v12 )
      {
        SepDereferenceLowBoxNumberEntry(v18, *(_QWORD *)(a2 + 1080));
        *(_QWORD *)(a2 + 1080) = 0LL;
        SepSetTokenSessionById(a2, v12, 1, (__int64)SessionObjectById, &Object);
        v19 = *(_QWORD *)(a2 + 784);
        *(_DWORD *)(a2 + 120) = v12;
        v13 = SepSetTokenLowboxNumber(a2, v19);
        if ( v13 < 0 )
        {
          _InterlockedOr(v20, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v17 = Object;
          if ( !Object )
            return (unsigned int)v13;
          goto LABEL_21;
        }
      }
    }
    SepSetTokenSessionById(a2, v12, 1, (__int64)SessionObjectById, &Object);
    *(_DWORD *)(a2 + 120) = v12;
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( Object )
      ObfDereferenceObject(Object);
    if ( SeAuditingWithTokenForSubcategory(133, 0LL) )
      SepAuditAssignPrimaryToken(a1, a2);
    ObfReferenceObject((PVOID)a2);
    v14 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), a2);
    if ( v14 )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 48), 1u);
      _InterlockedOr(v20, 0);
      *(_BYTE *)(v14 + 204) = 0;
      _InterlockedOr(v20, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v14 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      result = 0LL;
      *a3 = v14;
    }
    else
    {
      return 3221225596LL;
    }
  }
  return result;
}
