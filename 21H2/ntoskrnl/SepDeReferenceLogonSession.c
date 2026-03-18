/*
 * XREFs of SepDeReferenceLogonSession @ 0x14069BBC0
 * Callers:
 *     SepDeReferenceLogonSessionDirect @ 0x1402D6A98 (SepDeReferenceLogonSessionDirect.c)
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepTokenDeleteMethod @ 0x1406FE720 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeleteSessionLowboxEntries @ 0x1402235F4 (SepDeleteSessionLowboxEntries.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     ObDestroyHandleRevocationBlock @ 0x14069BF4C (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x14069BFB8 (SepDeleteLogonSessionClaims.c)
 *     SepInformLsaOfDeletedLogon @ 0x14069BFDC (SepInformLsaOfDeletedLogon.c)
 *     ObDereferenceDeviceMap @ 0x14069C9C0 (ObDereferenceDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14069D1D8 (SepInformFileSystemsOfDeletedLogon.c)
 *     SepDeleteLogonSessionSidValues @ 0x1409CCB9C (SepDeleteLogonSessionSidValues.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeReferenceLogonSession(_DWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 **v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rsi
  __int64 *i; // rbx
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rsi
  void *v12; // rcx

  v4 = (unsigned int)(1529154084 * *a1) >> 28;
  v5 = (__int64 **)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = &SepRmDbLock + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  for ( i = *v5; ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      ExReleaseResourceLite(v7);
      KeLeaveCriticalRegion();
      KeBugCheckEx(0x46u, 0LL, 0LL, 0LL, 0LL);
    }
    if ( i[20] == a2 && *a1 == *((_DWORD *)i + 2) && a1[1] == *((_DWORD *)i + 3) )
      break;
    v5 = (__int64 **)i;
  }
  v9 = _InterlockedDecrement64(i + 3);
  if ( v9 > 0 )
  {
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
  }
  else
  {
    if ( v9 )
      __fastfail(0xEu);
    *v5 = (__int64 *)*i;
    ExReleaseResourceLite(v7);
    KeLeaveCriticalRegion();
    if ( (i[4] & 4) != 0 && (*((_DWORD *)i + 4) || *((_DWORD *)i + 5)) )
      SepDeReferenceLogonSession(i + 2, i[20]);
    v10 = (void *)i[6];
    if ( v10 )
    {
      ObfDereferenceObject(v10);
      i[6] = 0LL;
    }
    v11 = (void *)i[5];
    if ( v11 )
    {
      i[5] = 0LL;
      SepCleanupLUIDDeviceMapDirectory(a1, a2);
      ObDereferenceDeviceMap(v11);
    }
    if ( (i[4] & 1) != 0 )
      SepInformFileSystemsOfDeletedLogon(a1, a2);
    v12 = (void *)i[8];
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    SepInformLsaOfDeletedLogon(a1, i[20], i);
    SepDeleteSessionLowboxEntries();
  }
}
