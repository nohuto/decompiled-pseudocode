__int64 __fastcall CD3DSurface::HrFindInterface(CD3DSurface *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // r8d

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  v5 = 0;
  if ( v4 )
    return (unsigned int)CD3DResource::HrFindInterface(this, a2, a3);
  else
    *a3 = this;
  return v5;
}
