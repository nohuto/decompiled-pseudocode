/*
 * XREFs of ?HrFindInterface@COverlaySwapChainBase@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801024E0
 * Callers:
 *     ?HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180102490 (-HrFindInterface@CLegacySwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlaySwapChainBase::HrFindInterface(
        COverlaySwapChainBase *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
      if ( v5 )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc.Data4;
        if ( v6 )
          return 2147500034LL;
      }
      v7 = (char *)this - 16;
    }
    else
    {
      v7 = (char *)this - 16;
      if ( this != (COverlaySwapChainBase *)16 )
        v7 = (char *)this + *(int *)(*((_QWORD *)this - 1) + 8LL) - 8;
    }
    *a3 = v7;
    return 0LL;
  }
  return result;
}
