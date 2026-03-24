/*
 * XREFs of ?AddDriverBlackboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02B9B4C
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02BA930 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0218F40 (-DdiCollectDiagnosticInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDriverBlackboxInfo(DISPLAYDIAGNOSTICADAPTERDATA *this, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  PVOID v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // [rsp+50h] [rbp+8h]
  __int64 v20; // [rsp+58h] [rbp+10h]

  v2 = *(_QWORD *)this;
  v3 = 0;
  if ( !*(_QWORD *)this )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 1201LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 1202LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *(_DWORD *)(v2 + 1872) >= 0xC004u && *(int *)(v2 + 2596) >= 2700 )
  {
    if ( *((_QWORD *)this + 435) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v9 + 24) = 1219LL;
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = operator new[](0x100000uLL, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 435) = v10;
    if ( !v10 )
    {
      v15 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = 0x100000LL;
      WdLogEvent5_WdLowResource(v15);
      return 3221225495LL;
    }
    memset(v10, 0, 0x100000uLL);
    *((_QWORD *)this + 407) = *(_QWORD *)(v2 + 272);
    *((_DWORD *)this + 816) = 3;
    *((_DWORD *)this + 868) = 0x100000;
    v19 = MEMORY[0xFFFFF78000000320];
    v17 = v19 * KeQueryTimeIncrement();
    v3 = DXGADAPTER::DdiCollectDiagnosticInfo(
           (DXGADAPTER *)v2,
           (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 3256),
           v18);
    v20 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)this + 437) = (v20 * (unsigned __int64)KeQueryTimeIncrement() - v17) / 0x2710;
    if ( v3 >= 0 )
    {
      if ( *((_DWORD *)this + 869) <= 0x100000u )
        *((_BYTE *)this + 3488) = 1;
      else
        *((_DWORD *)this + 869) = 0;
    }
  }
  return (unsigned int)v3;
}
