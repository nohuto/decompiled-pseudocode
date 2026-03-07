__int64 __fastcall CD2DBitmap::HrFindInterface(CD2DBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( !v6 )
      {
        v14 = ((unsigned __int64)this + 80) & -(__int64)(this != 0LL);
        if ( v14 )
        {
          v9 = *(int *)(*(_QWORD *)((((unsigned __int64)this + 80) & -(__int64)(this != 0LL)) + 8) + 12LL);
          v10 = (char *)(v14 + 8);
          goto LABEL_17;
        }
        goto LABEL_27;
      }
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cea79db9_036a_4caf_a945_84946a9e09d1.Data4;
      if ( !v7 )
      {
        if ( this )
        {
          v9 = *(int *)(*((_QWORD *)this + 2) + 16LL);
          goto LABEL_16;
        }
LABEL_27:
        v11 = 0LL;
        goto LABEL_18;
      }
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data4;
      if ( !v8 )
      {
        if ( this )
        {
          v9 = *(int *)(*((_QWORD *)this + 2) + 20LL);
LABEL_16:
          v10 = (char *)this + 16;
LABEL_17:
          v11 = &v10[v9];
LABEL_18:
          *a3 = v11;
          return 0LL;
        }
        goto LABEL_27;
      }
      v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
        v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
      if ( v12 )
        return CD2DResource::HrFindInterface(this, a2, a3);
      v13 = (unsigned __int64)this + 96;
    }
    else
    {
      v13 = (unsigned __int64)this + 80;
    }
    v11 = (char *)(v13 & -(__int64)(this != 0LL));
    goto LABEL_18;
  }
  return result;
}
