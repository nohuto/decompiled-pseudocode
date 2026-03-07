__int64 __fastcall CBitmapLock::HrFindInterface(CBitmapLock *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v5 )
    {
LABEL_8:
      *a3 = this;
      return 0LL;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapLock.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapLock.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapLock.Data4;
    if ( !v6 )
    {
      *a3 = (void *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
