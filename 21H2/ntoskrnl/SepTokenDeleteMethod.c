/*
 * XREFs of SepTokenDeleteMethod @ 0x1406FE720
 * Callers:
 *     <none>
 * Callees:
 *     SepFreeTokenCapabilities @ 0x1402493D4 (SepFreeTokenCapabilities.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDereferenceLuidToIndexEntry @ 0x14028ACE8 (SepDereferenceLuidToIndexEntry.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140696EC8 (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406AB17C (SepDereferenceLowBoxNumberEntry.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C6578 (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x1409CCBCC (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x1409CD6CC (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x1409CE8C4 (SepDeleteClaimAttributes.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  bool v10; // zf
  signed __int64 v11; // rtt
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  struct _ERESOURCE *v17; // rcx
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  void *v21; // rcx
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    SepRemoveTokenLogonSession(a1);
    v21 = *(void **)(a1 + 1144);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
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
  v3 = *(_DWORD *)(a1 + 200);
  if ( (v3 & 0x400000) != 0 )
  {
    _InterlockedDecrement(&SepLearningModeTokenCount);
    v3 = *(_DWORD *)(a1 + 200);
  }
  if ( (v3 & 0x20) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1080);
    if ( v4 )
      SepDereferenceLowBoxNumberEntry(*(_DWORD *)(a1 + 120), v4);
    v5 = *(_QWORD *)(a1 + 1088);
    if ( v5 )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216), v5);
    v6 = *(_QWORD *)(a1 + 1152);
    if ( v6 )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216), v6);
    v7 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v7 + 3);
    v8 = v7[3];
    v9 = v8 - 1;
    v10 = v8 == 1;
    if ( v8 - 1 <= 0 )
    {
LABEL_35:
      if ( !v10 )
        __fastfail(0xEu);
      v19 = v7[1];
      v20 = v7[20];
      v22 = v19;
      SepDeReferenceLogonSession(&v22, v20);
    }
    else
    {
      while ( 1 )
      {
        v11 = v8;
        v8 = _InterlockedCompareExchange64(v7 + 3, v9, v8);
        if ( v11 == v8 )
          break;
        v9 = v8 - 1;
        v10 = v8 == 1;
        if ( v8 - 1 <= 0 )
          goto LABEL_35;
      }
    }
  }
  v12 = *(void **)(a1 + 1160);
  if ( v12 )
    ObfDereferenceObject(v12);
  v13 = *(void **)(a1 + 1112);
  if ( v13 )
    ObfDereferenceObject(v13);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v14 = *(_QWORD *)(a1 + 1136);
  if ( v14 )
    SepDereferenceLuidToIndexEntry(v14);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v15 = *(void **)(a1 + 176);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v16 = *(void **)(a1 + 784);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v17 )
  {
    ExDeleteResourceLite(v17);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v18 = *(void **)(a1 + 1104);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
}
