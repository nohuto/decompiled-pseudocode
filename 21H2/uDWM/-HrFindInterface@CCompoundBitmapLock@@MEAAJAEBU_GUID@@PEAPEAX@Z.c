/*
 * XREFs of ?HrFindInterface@CCompoundBitmapLock@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompoundBitmapLock::HrFindInterface(CCompoundBitmapLock *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data4;
    if ( !v5 )
      goto LABEL_15;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapLock.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapLock.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapLock.Data4;
      if ( v7 )
        return (unsigned int)-2147467262;
      v8 = (unsigned __int64)this + 24;
    }
    else
    {
LABEL_15:
      v8 = (unsigned __int64)this + 16;
    }
    *a3 = (void *)(v8 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
