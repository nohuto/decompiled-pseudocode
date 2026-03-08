/*
 * XREFs of SmpKeyedStoreCreate @ 0x1407DD424
 * Callers:
 *     SmProcessCreateNotification @ 0x140709D7C (SmProcessCreateNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SSHSupportAllocateNonPaged @ 0x1402A4AEC (SSHSupportAllocateNonPaged.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140358874 (SmKmStoreDeleteWhenEmpty.c)
 *     SmpKeyedStoreEntryGet @ 0x14035BDC0 (SmpKeyedStoreEntryGet.c)
 *     SmpDirtyStoreCreate @ 0x1407DD540 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  int v3; // eax
  struct _PRIVILEGE_SET *v5; // rbx
  int v8; // edi
  __int64 NonPaged; // rax
  int v10; // esi
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a3 + 2172);
  v16 = -1;
  v5 = 0LL;
  v8 = SmpDirtyStoreCreate(a2, (v3 & 1) != 0 ? 2048 : 512, 1LL, &v16);
  if ( v8 < 0 )
    goto LABEL_11;
  NonPaged = SSHSupportAllocateNonPaged(48LL, 0x53506D73u);
  v5 = (struct _PRIVILEGE_SET *)NonPaged;
  if ( !NonPaged )
  {
    v8 = -1073741670;
LABEL_11:
    v10 = v16;
    goto LABEL_5;
  }
  *(_OWORD *)NonPaged = 0LL;
  *(_OWORD *)(NonPaged + 16) = 0LL;
  *(_OWORD *)(NonPaged + 32) = 0LL;
  *(_QWORD *)(NonPaged + 8) = a3;
  v10 = v16;
  *(_WORD *)(NonPaged + 16) = v16;
  if ( SmpKeyedStoreEntryGet(BugCheckParameter2, (_QWORD *)(NonPaged + 8), 1, 0) )
  {
    v10 = -1;
    v5 = 0LL;
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_5:
  if ( v10 != -1 )
  {
    v12 = v10 & 0x3FF;
    v13 = (__int64 *)SmKmStoreRefFromStoreIndex(a2, v12);
    SmKmStoreDeleteWhenEmpty(v14, *v13);
    v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, v12);
    ExReleaseRundownProtection_0(v15 + 1);
  }
  if ( v5 )
    CmSiFreeMemory(v5);
  return (unsigned int)v8;
}
