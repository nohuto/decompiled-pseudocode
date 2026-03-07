void __fastcall ST_STORE<SM_TRAITS>::StReleaseRegion(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  void *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ecx
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v2 = a2;
  v12 = 0;
  v4 = a2;
  if ( *(_BYTE *)(a1 + 776) )
  {
    v10 = 2LL * a2;
    *(_BYTE *)(a2 + *(_QWORD *)(a1 + 1048)) = 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v5 + 6021) & 4) != 0 )
    {
      v6 = a2;
      if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStReleaseVirtualRegion(*(_QWORD *)(a1 + 800), a2, 0) == -1073741650 )
        ST_STORE<SM_TRAITS>::StDmUpdateRegionLazyCleanup(a1, v2, 1);
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 6216);
      v8 = (void *)(*(_QWORD *)(v7 + 8LL * a2) & 0xFFFFFFFFFFFFFFF8uLL);
      MiFreePagesFromMdl((ULONG_PTR)v8, 0);
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(v7 + 8 * v2) = 0LL;
      v6 = v4;
    }
    v9 = SmEtwEnabled(0);
    if ( v9 )
    {
      v10 = 2 * v6;
      SmEtwLogRegionOp(v9, 5, a1, v2, 0, *(_WORD *)(v10 + *(_QWORD *)(a1 + 1032)), 0);
    }
    else
    {
      v10 = 2 * v2;
    }
    if ( (unsigned int)v2 < *(_DWORD *)(a1 + 1092) )
      *(_DWORD *)(a1 + 1092) = v2;
  }
  if ( *(_BYTE *)(a1 + 776) )
  {
    v11 = 0;
  }
  else
  {
    v10 = 2 * v2;
    v11 = *(unsigned __int16 *)(2 * v2 + *(_QWORD *)(a1 + 1032)) >> 13;
  }
  --*(_DWORD *)(a1 + 8LL * v11 + 1824);
  if ( !*(_BYTE *)(a1 + 776) )
    *(_WORD *)(v10 + *(_QWORD *)(a1 + 1032)) &= 0x1FFFu;
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1, &v12, 0LL);
    if ( (unsigned int)(*(_DWORD *)(a1 + 856) - v12) >= 8 && (*(_DWORD *)(a1 + 2232) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 2216) = 0;
      *(_DWORD *)(a1 + 2232) |= 1u;
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*(_QWORD *)(a1 + 800), a1 + 2200, 6);
    }
  }
}
