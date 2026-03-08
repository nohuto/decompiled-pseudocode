/*
 * XREFs of ??_GCHWDrawListEntry@@MEAAPEAXI@Z @ 0x18005B610
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800FE0E0 (--0CThreadContext@@AEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`scalar deleting destructor'(CHWDrawListEntry *this, char a2)
{
  __int64 v3; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  __int64 v6; // rcx
  _QWORD *Value; // rdi
  CThreadContext *v9; // rax
  unsigned int v10; // ecx
  CThreadContext *v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 8);
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x50uLL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v9 = (CThreadContext *)operator new(0x190uLL);
        if ( !v9 || (v11 = CThreadContext::CThreadContext(v9), (Value = v11) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v11);
      }
      if ( *((_DWORD *)Value + 33) >= *((_DWORD *)Value + 32) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = Value[17];
        ++*((_DWORD *)Value + 33);
        Value[17] = this;
      }
    }
  }
  return this;
}
