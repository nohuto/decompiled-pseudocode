__int64 __fastcall CRenderTarget::HrFindInterface(CRenderTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  char *v9; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_81517092_b012_450a_acdb_d304e9efd6b3.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e1d14fc9_d6ac_4947_99ed_00f1c89e9ed9.Data4;
        if ( v7 )
          return 2147500034LL;
        v9 = (char *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
LABEL_20:
        *a3 = v9;
        return 0LL;
      }
      if ( this )
      {
        v8 = *(int *)(*((_QWORD *)this + 10) + 12LL);
        goto LABEL_15;
      }
    }
    else if ( this )
    {
      v8 = *(int *)(*((_QWORD *)this + 10) + 8LL);
LABEL_15:
      v9 = (char *)this + v8 + 80;
      goto LABEL_20;
    }
    v9 = 0LL;
    goto LABEL_20;
  }
  return result;
}
