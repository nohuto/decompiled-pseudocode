/*
 * XREFs of FreeOwnedObjects @ 0x1C004B81C
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0049C4C (AMLIRemoveNativeObjectsFromNamespace.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2A8 (AMLIAddNamespaceOverride.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 *     ParseUnload @ 0x1C005CB20 (ParseUnload.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0005600 (FreeNameSpaceObjects.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 */

void __fastcall FreeOwnedObjects(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  KIRQL v4; // al
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx

  byte_1C0070300 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  KeReleaseSpinLock(&gmutOwnerList, byte_1C0070300);
  v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  v5 = a1[3];
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 56);
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
      if ( (gdwfAMLI & 4) != 0 )
        AMLIDereferenceHandleEx((volatile signed __int32 *)(v5 + 120), v7);
      else
        FreeNameSpaceObjects((__int64 *)v5);
      v4 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
      v5 = v6;
    }
    while ( v6 );
  }
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v4);
}
