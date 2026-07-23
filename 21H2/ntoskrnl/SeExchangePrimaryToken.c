/*
 * XREFs of SeExchangePrimaryToken @ 0x1407BC3D4
 * Callers:
 *     PspAssignPrimaryToken @ 0x1407BC1D0 (PspAssignPrimaryToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     MmGetSessionObjectById @ 0x1402AAC94 (MmGetSessionObjectById.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     SepSetTrustLevelForProcessToken @ 0x1402F5F68 (SepSetTrustLevelForProcessToken.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     SepSetTokenLowboxNumber @ 0x1406C65AC (SepSetTokenLowboxNumber.c)
 *     SepSetTokenSessionById @ 0x1406F3A30 (SepSetTokenSessionById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406FF29C (SepDereferenceLowBoxNumberEntry.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC574 (SepAuditAssignPrimaryToken.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, ULONG_PTR a2, ULONG_PTR *a3)
{
  bool v4; // zf
  struct _DMA_ADAPTER *SessionObjectById; // rdi
  unsigned int SessionId; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v12; // ebp
  int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v17; // rbx
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct _DMA_ADAPTER *v29; // rcx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  signed __int32 v35[8]; // [rsp+0h] [rbp-58h] BYREF
  char v36; // [rsp+68h] [rbp+10h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  DmaAdapter = 0LL;
  SessionObjectById = 0LL;
  v36 = 0;
  if ( !v4 )
    return 3221225640LL;
  SessionId = MmGetSessionIdEx(a1);
  if ( SessionId != -1 && !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = (struct _DMA_ADAPTER *)MmGetSessionObjectById(SessionId, v9);
  v10 = MmGetSessionId(a1);
  CurrentThread = KeGetCurrentThread();
  v12 = v10;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v35, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v35, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
    if ( SessionObjectById )
      HalPutDmaAdapter(SessionObjectById);
    return 3221225771LL;
  }
  else
  {
    *(_BYTE *)(a2 + 204) = 1;
    v13 = SepSetTrustLevelForProcessToken(a2, a1, &v36);
    if ( v13 < 0 )
    {
      _InterlockedOr(v35, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
      if ( !SessionObjectById )
        return (unsigned int)v13;
      v29 = SessionObjectById;
LABEL_21:
      HalPutDmaAdapter(v29);
      return (unsigned int)v13;
    }
    if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    {
      v30 = *(_DWORD *)(a2 + 120);
      if ( v30 != v12 )
      {
        SepDereferenceLowBoxNumberEntry(v30, *(_QWORD *)(a2 + 1080));
        *(_QWORD *)(a2 + 1080) = 0LL;
        SepSetTokenSessionById(a2, v12, 1, (__int64)SessionObjectById, &DmaAdapter);
        v31 = *(_QWORD *)(a2 + 784);
        *(_DWORD *)(a2 + 120) = v12;
        v13 = SepSetTokenLowboxNumber(a2, v31);
        if ( v13 < 0 )
        {
          _InterlockedOr(v35, 0);
          ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33, v34);
          v29 = DmaAdapter;
          if ( !DmaAdapter )
            return (unsigned int)v13;
          goto LABEL_21;
        }
      }
    }
    SepSetTokenSessionById(a2, v12, 1, (__int64)SessionObjectById, &DmaAdapter);
    *(_DWORD *)(a2 + 120) = v12;
    _InterlockedOr(v35, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( SeAuditingWithTokenForSubcategory(134, 0LL) )
      SepAuditAssignPrimaryToken(a1, a2);
    ObfReferenceObject((PVOID)a2);
    v17 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), a2);
    if ( v17 )
    {
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 48), 1u);
      _InterlockedOr(v35, 0);
      *(_BYTE *)(v17 + 204) = 0;
      _InterlockedOr(v35, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
      result = 0LL;
      *a3 = v17;
    }
    else
    {
      return 3221225596LL;
    }
  }
  return result;
}
