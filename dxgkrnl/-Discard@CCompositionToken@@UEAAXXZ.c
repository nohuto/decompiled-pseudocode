void __fastcall CCompositionToken::Discard(CCompositionToken *this, __int64 a2, __int64 a3)
{
  __int64 Win32kImportTable; // rax
  char *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rsi
  void (__fastcall ***v8)(_QWORD); // rcx

  if ( *((int *)this + 6) < 3 )
  {
    if ( (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage(
                         this,
                         a2,
                         a3)
      && !*((_DWORD *)this + 6)
      && *((_QWORD *)this + 8) )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(_QWORD, __int64))(Win32kImportTable + 48))(*((_QWORD *)this + 8), 1LL);
    }
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  }
  v5 = (char *)*((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = 0;
    if ( !*((_DWORD *)this + 14) )
      goto LABEL_15;
    do
    {
      v7 = 32LL * v6;
      v8 = *(void (__fastcall ****)(_QWORD))&v5[v7 + 24];
      if ( v8 )
        (**v8)(v8);
      v5 = (char *)*((_QWORD *)this + 6);
      if ( *(_QWORD *)&v5[v7 + 8] )
      {
        ObfDereferenceObject(*(PVOID *)&v5[v7 + 8]);
        v5 = (char *)*((_QWORD *)this + 6);
      }
      ++v6;
    }
    while ( v6 < *((_DWORD *)this + 14) );
    if ( v5 )
LABEL_15:
      ExFreePoolWithTag(v5, 0);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 6) = 6;
}
