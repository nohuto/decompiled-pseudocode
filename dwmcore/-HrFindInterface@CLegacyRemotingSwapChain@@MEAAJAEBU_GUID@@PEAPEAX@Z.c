/*
 * XREFs of ?HrFindInterface@CLegacyRemotingSwapChain@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A0290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRemotingSwapChain::HrFindInterface(
        CLegacyRemotingSwapChain *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  char *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = (char *)(*(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1);
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = (char *)(*(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4);
    if ( !v4 )
    {
      if ( this )
        v4 = (char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8;
      *a3 = v4;
      return 0LL;
    }
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
    if ( !v5 )
      goto LABEL_14;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data4;
    if ( !v6 )
    {
LABEL_14:
      *a3 = this;
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
