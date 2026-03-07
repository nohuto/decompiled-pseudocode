__int64 __fastcall CHolographicViewer::HrFindInterface(CHolographicViewer *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = 0;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67.Data4;
  if ( v5 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_673232dd_6e24_4a2d_a5e8_245c5f9b5cc8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_673232dd_6e24_4a2d_a5e8_245c5f9b5cc8.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_673232dd_6e24_4a2d_a5e8_245c5f9b5cc8.Data4;
    if ( v7 )
      return (unsigned int)-2147467262;
    v6 = (unsigned __int64)this + 72;
  }
  else
  {
    v6 = (unsigned __int64)this + 64;
  }
  *a3 = (void *)(v6 & -(__int64)(this != 0LL));
  return v4;
}
