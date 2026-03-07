void __fastcall SmpKeyedStoreDeleteInitiate(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int16 v5; // bx
  unsigned int v6; // ebx
  __int64 *v7; // rax
  __int64 v8; // rcx
  struct _EX_RUNDOWN_REF *v9; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v4 = SmpKeyedStoreEntryGet(a1, &v10, 2, 0);
  if ( v4 )
  {
    v5 = *(_WORD *)(v4 + 16);
    CmSiFreeMemory((PPRIVILEGE_SET)v4);
    v6 = v5 & 0x3FF;
    v7 = (__int64 *)SmKmStoreRefFromStoreIndex(a2, v6);
    SmKmStoreDeleteWhenEmpty(v8, *v7);
    v9 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, v6);
    ExReleaseRundownProtection_0(v9 + 1);
  }
}
