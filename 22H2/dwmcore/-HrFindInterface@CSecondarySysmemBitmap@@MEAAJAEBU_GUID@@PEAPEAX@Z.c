/*
 * XREFs of ?HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18019C1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C500 (-HrFindInterface@CMILCOMBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::HrFindInterface(
        CSecondarySysmemBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  char *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = (char *)(*(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1);
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = (char *)(*(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4);
    if ( !v5 )
    {
      if ( this )
        v5 = (char *)this + *(int *)(*((_QWORD *)this + 3) + 8LL) + 24;
      goto LABEL_16;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( !v6 )
    {
      v7 = (unsigned __int64)this + 16;
LABEL_15:
      v5 = (char *)(v7 & -(__int64)(this != 0LL));
LABEL_16:
      *a3 = v5;
      return 0LL;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data4;
    if ( !v8 )
    {
      v7 = (unsigned __int64)this + 32;
      goto LABEL_15;
    }
    return CMILCOMBase::HrFindInterface(this, a2, a3);
  }
  return result;
}
