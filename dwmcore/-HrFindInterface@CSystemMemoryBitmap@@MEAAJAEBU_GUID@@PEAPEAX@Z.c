__int64 __fastcall CSystemMemoryBitmap::HrFindInterface(CSystemMemoryBitmap *this, const struct _GUID *a2, void **a3)
{
  void *v3; // r9
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 0LL;
  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
      if ( v7 )
      {
        return (unsigned int)CBitmap::HrFindInterface(this, a2, a3);
      }
      else
      {
        if ( (unsigned int)(*((_DWORD *)this + 30) - 87) <= 1 )
        {
          v5 = 0;
          v3 = (void *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL));
        }
        else
        {
          v5 = -2147467262;
        }
        *a3 = v3;
      }
    }
    else
    {
      v5 = 0;
      *a3 = (void *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL));
    }
  }
  return v5;
}
