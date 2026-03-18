/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0012230
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C00015B4 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     DxgkGetWin32kImportTable @ 0x1C001166C (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this)
{
  int v1; // eax
  __int64 Win32kImportTable; // rax
  char *v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rsi
  void (__fastcall ***v7)(_QWORD); // rcx

  v1 = *((_DWORD *)this + 6);
  if ( v1 < 3 )
  {
    if ( !v1 && *((_QWORD *)this + 8) )
    {
      Win32kImportTable = DxgkGetWin32kImportTable();
      (*(void (__fastcall **)(_QWORD, __int64))(Win32kImportTable + 48))(*((_QWORD *)this + 8), 1LL);
    }
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  }
  v4 = (char *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v5 = 0;
    if ( !*((_DWORD *)this + 14) )
      goto LABEL_14;
    do
    {
      v6 = 32LL * v5;
      v7 = *(void (__fastcall ****)(_QWORD))&v4[v6 + 24];
      if ( v7 )
        (**v7)(v7);
      v4 = (char *)*((_QWORD *)this + 6);
      if ( *(_QWORD *)&v4[v6 + 8] )
      {
        ObfDereferenceObject(*(PVOID *)&v4[v6 + 8]);
        v4 = (char *)*((_QWORD *)this + 6);
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)this + 14) );
    if ( v4 )
LABEL_14:
      ExFreePoolWithTag(v4, 0);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 6) = 6;
}
