__int64 __fastcall CCursorState::HrFindInterface(CCursorState *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2858693f_97df_4b5a_b18f_52300bb0e6d5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2858693f_97df_4b5a_b18f_52300bb0e6d5.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2858693f_97df_4b5a_b18f_52300bb0e6d5.Data4;
  if ( v4 )
    return (unsigned int)-2147467262;
  else
    *a3 = this;
  return v3;
}
