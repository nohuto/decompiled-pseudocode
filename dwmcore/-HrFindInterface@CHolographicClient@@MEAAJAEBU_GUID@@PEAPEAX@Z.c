__int64 __fastcall CHolographicClient::HrFindInterface(CHolographicClient *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ce287c87_15c0_4973_9cca_5e86c0bb4f08.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ce287c87_15c0_4973_9cca_5e86c0bb4f08.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ce287c87_15c0_4973_9cca_5e86c0bb4f08.Data4;
  v4 = 0;
  if ( v3 )
    return (unsigned int)-2147467262;
  else
    *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  return v4;
}
