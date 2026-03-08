/*
 * XREFs of ?HrFindInterface@CVisualBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C1BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CContent@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180035170 (-HrFindInterface@CContent@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CVisualBitmap::HrFindInterface(CVisualBitmap *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v5 )
      goto LABEL_8;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
    if ( v6 )
    {
      return (unsigned int)CContent::HrFindInterface(this, a2, a3);
    }
    else
    {
LABEL_8:
      *a3 = (void *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
      return 0;
    }
  }
  return v4;
}
