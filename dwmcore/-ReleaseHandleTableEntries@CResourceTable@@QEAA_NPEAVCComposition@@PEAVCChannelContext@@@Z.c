/*
 * XREFs of ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180099A64
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800A9BF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180099B0C (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CResourceTable::ReleaseHandleTableEntries(
        CResourceTable *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  unsigned int v3; // eax
  char v4; // dl
  unsigned int v5; // ebx
  struct CChannelContext *i; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx

  v3 = *((_DWORD *)this + 7);
  v4 = 0;
  v5 = 0;
  for ( i = a3; v5 < v3; ++v5 )
  {
    if ( v5 )
    {
      if ( v5 < v3 )
      {
        v8 = *((_QWORD *)this + 5);
        if ( *(_DWORD *)(*((_DWORD *)this + 6) * v5 + v8) )
        {
          v9 = v8 + *((_DWORD *)this + 6) * v5;
          if ( v9 )
          {
            v11 = *(_QWORD *)(v9 + 8);
            if ( v11 )
            {
              LOBYTE(a3) = 1;
              (*(void (__fastcall **)(__int64, struct CChannelContext *, struct CChannelContext *))(*(_QWORD *)v11
                                                                                                  + 168LL))(
                v11,
                i,
                a3);
              v12 = CResourceTable::DeleteHandle(*((CResourceTable **)i + 4), v5);
              if ( v12 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x991u, 0LL);
              v4 = 1;
            }
          }
        }
      }
    }
    v3 = *((_DWORD *)this + 7);
  }
  return v4;
}
