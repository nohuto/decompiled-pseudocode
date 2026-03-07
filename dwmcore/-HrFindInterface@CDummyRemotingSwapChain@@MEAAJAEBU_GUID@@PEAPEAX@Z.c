__int64 __fastcall CDummyRemotingSwapChain::HrFindInterface(
        CDummyRemotingSwapChain *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v5 )
    {
      if ( this )
      {
        v6 = *(int *)(*((_QWORD *)this + 3) + 12LL);
LABEL_13:
        v8 = (char *)this + v6 + 24;
        goto LABEL_21;
      }
      goto LABEL_11;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( !v7 )
    {
      if ( this )
      {
        v6 = *(int *)(*((_QWORD *)this + 3) + 8LL);
        goto LABEL_13;
      }
LABEL_11:
      v8 = 0LL;
LABEL_21:
      *a3 = v8;
      return 0LL;
    }
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
    if ( !v9 )
      goto LABEL_20;
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d56bd476_4f78_4415_941c_d6dd54681d7c.Data4;
    if ( !v10 )
    {
LABEL_20:
      v8 = (char *)(((unsigned __int64)this + 56) & -(__int64)(this != 0LL));
      goto LABEL_21;
    }
    return 2147500034LL;
  }
  return result;
}
