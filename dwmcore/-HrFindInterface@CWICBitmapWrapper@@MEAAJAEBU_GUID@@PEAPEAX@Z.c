__int64 __fastcall CWICBitmapWrapper::HrFindInterface(CWICBitmapWrapper *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v7; // rax
  int (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
  if ( v4 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
    if ( v7 )
    {
      return (unsigned int)CBitmap::HrFindInterface(this, a2, a3);
    }
    else
    {
      v9 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 20);
      v11 = 0LL;
      if ( v9 && (**v9)(v9, &IID_IWICDecoderBitmapSource, &v11) >= 0 )
      {
        v10 = v11;
        *a3 = (void *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL));
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      else
      {
        return (unsigned int)-2147467262;
      }
    }
  }
  else
  {
    *a3 = (void *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL));
  }
  return v3;
}
