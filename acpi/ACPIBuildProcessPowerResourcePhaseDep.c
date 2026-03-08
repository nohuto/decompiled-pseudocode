/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0010EE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  char v6; // al

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  *(_OWORD *)(a1 + 80) = 0LL;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v4 = AMLIGetNamedChild(*(_QWORD *)(v2 + 32), 1346716767LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( v5 )
      AMLIDereferenceHandleEx(v5);
    v6 = gdwfAMLI;
    *(_QWORD *)(a1 + 56) = v4;
    dword_1C006F938 = 0;
    pszDest = 0;
    if ( (v6 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v3 = AMLIAsyncEvalObject(v4, (int)a1 + 80, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1);
    if ( v3 == 259 )
      goto LABEL_8;
  }
  ACPIBuildCompleteMustSucceed(v4, v3, a1 + 80, a1);
  if ( v4 )
LABEL_8:
    AMLIDereferenceHandleEx(v4);
  return v3;
}
