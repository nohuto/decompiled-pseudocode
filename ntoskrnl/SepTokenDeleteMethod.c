/*
 * XREFs of SepTokenDeleteMethod @ 0x1407C3CB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDereferenceLuidToIndexEntry @ 0x1402DF15C (SepDereferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x1402F35E0 (SepFreeTokenCapabilities.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140744278 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14074438C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeReferenceLogonSession @ 0x1407DBBB8 (SepDeReferenceLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C69B8 (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x1409CC8DC (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x1409CD544 (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x1409CE5CC (SepDeleteClaimAttributes.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rtt
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    SepRemoveTokenLogonSession(a1);
    v20 = *(void **)(a1 + 1144);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  v2 = *(void **)(a1 + 1096);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
    SepDeleteTokenUserAndGroups(a1);
  if ( (*(_DWORD *)(a1 + 200) & 0x1000000) != 0 )
    _InterlockedDecrement(&SepLearningModeTokenCount);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 1080);
    if ( v3 )
      SepDereferenceLowBoxNumberEntry(*(_DWORD *)(a1 + 120), v3);
    v4 = *(_QWORD *)(a1 + 1088);
    if ( v4 )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216), v4);
    v5 = *(_QWORD *)(a1 + 1152);
    if ( v5 )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216), v5);
    v6 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v6 + 3);
    v7 = v6[3];
    v8 = v7 - 1;
    v9 = v7 == 1;
    if ( v7 - 1 <= 0 )
    {
LABEL_35:
      if ( !v9 )
        __fastfail(0xEu);
      v18 = v6[1];
      v19 = v6[20];
      v21 = v18;
      SepDeReferenceLogonSession(&v21, v19);
    }
    else
    {
      while ( 1 )
      {
        v10 = v7;
        v7 = _InterlockedCompareExchange64(v6 + 3, v8, v7);
        if ( v10 == v7 )
          break;
        v8 = v7 - 1;
        v9 = v7 == 1;
        if ( v7 - 1 <= 0 )
          goto LABEL_35;
      }
    }
  }
  v11 = *(void **)(a1 + 1160);
  if ( v11 )
    ObfDereferenceObject(v11);
  v12 = *(void **)(a1 + 1112);
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v13 = *(_QWORD *)(a1 + 1136);
  if ( v13 )
    SepDereferenceLuidToIndexEntry(v13);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v14 = *(void **)(a1 + 176);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v15 = *(void **)(a1 + 784);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v16 )
  {
    ExDeleteResourceLite(v16);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v17 = *(void **)(a1 + 1104);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
}
