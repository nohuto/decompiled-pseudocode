__int64 __fastcall CHolographicDisplay::HrFindInterface(CHolographicDisplay *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5e01b98c_b7d8_4f41_8bf2_9dc251835cd5.Data4;
  v4 = 0;
  if ( v3 )
    return (unsigned int)-2147467262;
  else
    *a3 = (void *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
  return v4;
}
