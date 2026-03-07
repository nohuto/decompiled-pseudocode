__int64 __fastcall CColorKeyBitmap::HrFindInterface(CColorKeyBitmap *this, const struct _GUID *a2, void **a3)
{
  void *v3; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = -2147024809;
  if ( a3 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
      if ( v8 )
      {
        return (unsigned int)-2147467262;
      }
      else
      {
        v9 = *((_QWORD *)this + 4);
        v12 = 0LL;
        if ( v9
          && (v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL)),
              (**v10)(v10, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v12) >= 0) )
        {
          v6 = 0;
          v3 = (void *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
        }
        else
        {
          v6 = -2147467262;
        }
        *a3 = v3;
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
      }
    }
    else
    {
      *a3 = this;
      return 0;
    }
  }
  return v6;
}
