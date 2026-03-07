__int64 __fastcall CWICBitmapRealization::HrFindInterface(
        CWICBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v5; // edi
  char *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = (char *)(*(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1);
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = (char *)(*(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4);
    if ( !v6 )
    {
      if ( this )
        v6 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16;
      goto LABEL_11;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( !v7 )
    {
      v6 = (char *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
LABEL_11:
      *a3 = v6;
      return 0;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
    if ( v8 )
      return (unsigned int)-2147467262;
    v13 = 0LL;
    v9 = *((_QWORD *)this + 3);
    if ( !v9 )
      return (unsigned int)-2147467262;
    v10 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 4LL));
    if ( (**v10)(v10, &IID_IWICDecoderBitmapSource, &v13) < 0 )
    {
      return (unsigned int)-2147467262;
    }
    else
    {
      v5 = 0;
      v11 = v13;
      *a3 = (void *)(((unsigned __int64)this + 96) & -(__int64)(this != 0LL));
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return v5;
}
