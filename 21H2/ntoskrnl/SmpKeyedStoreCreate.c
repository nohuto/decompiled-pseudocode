/*
 * XREFs of SmpKeyedStoreCreate @ 0x1406ED260
 * Callers:
 *     SmProcessCreateNotification @ 0x14070EE20 (SmProcessCreateNotification.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     SmAlloc @ 0x140260C2C (SmAlloc.c)
 *     SmpKeyedStoreEntryGet @ 0x1402A1124 (SmpKeyedStoreEntryGet.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14035F344 (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 *     SmpDirtyStoreCreate @ 0x1406ED344 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR BugCheckParameter2, __int64 a2, LUID a3)
{
  int v3; // eax
  struct _PRIVILEGE_SET *v5; // rbx
  int v8; // edi
  struct _PRIVILEGE_SET *v9; // rax
  int v10; // esi
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)&a3 + 2172LL);
  v16 = -1;
  v5 = 0LL;
  v8 = SmpDirtyStoreCreate(a2, (v3 & 1) != 0 ? 2048 : 512, 1LL, &v16);
  if ( v8 < 0 )
    goto LABEL_11;
  v9 = (struct _PRIVILEGE_SET *)SmAlloc(0x30uLL, 0x53506D73u);
  v5 = v9;
  if ( !v9 )
  {
    v8 = -1073741670;
LABEL_11:
    v10 = v16;
    goto LABEL_5;
  }
  *(_OWORD *)&v9->PrivilegeCount = 0LL;
  *(_OWORD *)&v9->Privilege[0].Attributes = 0LL;
  *(_OWORD *)&v9[1].Privilege[0].Luid.HighPart = 0LL;
  v9->Privilege[0].Luid = a3;
  v10 = v16;
  LOWORD(v9->Privilege[0].Attributes) = v16;
  if ( SmpKeyedStoreEntryGet(BugCheckParameter2, &v9->Privilege[0].Luid, 1uLL, 0) )
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
    ExReleaseRundownProtection(v15 + 1);
  }
  if ( v5 )
    CmSiFreeMemory(v5);
  return (unsigned int)v8;
}
