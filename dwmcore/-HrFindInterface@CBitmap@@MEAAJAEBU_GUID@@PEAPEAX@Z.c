/*
 * XREFs of ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180104550
 * Callers:
 *     ?HrFindInterface@CWICBitmapWrapper@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801043D0 (-HrFindInterface@CWICBitmapWrapper@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801044C0 (-HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::HrFindInterface(CBitmap *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v12; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data4;
    if ( !v5 )
      goto LABEL_24;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_11bb5fd3_c76d_405e_a8d7_7fe7375f478a.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_11bb5fd3_c76d_405e_a8d7_7fe7375f478a.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_11bb5fd3_c76d_405e_a8d7_7fe7375f478a.Data4;
      if ( v7 )
      {
        v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
          v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
        if ( !v8 )
          goto LABEL_24;
        v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmap.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmap.Data1 )
          v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmap.Data4;
        if ( v9 )
        {
          v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapSource.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapSource.Data1 )
            v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapSource.Data4;
          if ( v10 )
            return (unsigned int)-2147467262;
        }
        v12 = (unsigned __int64)this + 48;
      }
      else
      {
        v12 = (unsigned __int64)this + 32;
      }
    }
    else
    {
      v12 = (unsigned __int64)this + 24;
    }
    this = (CBitmap *)(v12 & -(__int64)(this != 0LL));
LABEL_24:
    *a3 = this;
    return 0;
  }
  return v4;
}
