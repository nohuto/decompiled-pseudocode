/*
 * XREFs of ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0017FE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x1C0016CC8 (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0064594 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 */

void __fastcall CCompositionToken::Discard(CCompositionToken *this, __int64 a2)
{
  int v2; // eax
  __int64 Win32kImportTable; // rax
  char *v5; // rcx
  unsigned int v6; // edi
  char *v7; // rax
  __int64 v8; // rsi
  void (__fastcall ***v9)(_QWORD); // rdx

  v2 = *((_DWORD *)this + 6);
  if ( v2 < 3 )
  {
    if ( !v2 && *((_QWORD *)this + 10) )
    {
      Win32kImportTable = DxgkGetWin32kImportTable((__int64)this, a2);
      (*(void (__fastcall **)(_QWORD, __int64))(Win32kImportTable + 32))(*((_QWORD *)this + 10), 1LL);
    }
    CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
  }
  v5 = (char *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    v6 = 0;
    if ( *((_DWORD *)this + 18) )
    {
      do
      {
        v7 = v5;
        v8 = 32LL * v6;
        v9 = *(void (__fastcall ****)(_QWORD))&v5[v8 + 24];
        if ( v9 )
        {
          (**v9)(*(_QWORD *)&v5[v8 + 24]);
          v5 = (char *)*((_QWORD *)this + 8);
          v7 = v5;
        }
        if ( *(_QWORD *)&v7[v8 + 8] )
        {
          ObfDereferenceObject(*(PVOID *)&v7[v8 + 8]);
          v5 = (char *)*((_QWORD *)this + 8);
          v7 = v5;
        }
        ++v6;
      }
      while ( v6 < *((_DWORD *)this + 18) );
      v5 = v7;
    }
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 6) = 6;
}
