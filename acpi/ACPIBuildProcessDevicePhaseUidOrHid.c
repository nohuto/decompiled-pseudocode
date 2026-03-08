/*
 * XREFs of ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0010B20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUidOrHid(__int64 a1)
{
  __int64 v1; // r14
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 1145656671;
  v4 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1145653343LL);
  v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1145656671LL);
  if ( v5 )
  {
    AMLIDereferenceHandleEx(v4);
    v6 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 8;
    if ( v6 )
      AMLIDereferenceHandleEx(v6);
    v7 = 616LL;
    v8 = 671613062;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 32) = 7;
    if ( v9 )
      AMLIDereferenceHandleEx(v9);
    v3 = 1145653343;
    v7 = 608LL;
    v8 = 671612966;
    v5 = v4;
  }
  *(_QWORD *)(a1 + 56) = v5;
  v10 = ACPIGet(v1, v3, v8, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + v7, 0LL);
  v11 = v10;
  if ( v10 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v10, 0LL, a1);
  return v11;
}
