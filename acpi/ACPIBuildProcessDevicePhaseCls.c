/*
 * XREFs of ACPIBuildProcessDevicePhaseCls @ 0x1C000EF00
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCls(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1397506911LL);
  *(_DWORD *)(a1 + 32) = 13;
  if ( !v3 || (*(_BYTE *)(v1 + 1008) & 4) != 0 )
  {
    v4 = ACPIGet(v1, 1096045407, -1610348542, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  else
  {
    AMLIDereferenceHandleEx(v3);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 4uLL);
    v4 = ACPIGet(v1, 1397506911, 537165824, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 640, 0LL);
    *(_DWORD *)(a1 + 32) = 12;
  }
  v5 = v4;
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v5;
}
