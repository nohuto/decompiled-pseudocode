/*
 * XREFs of ??_GCCpuClipAntialiasDrawListEntry@@UEAAPEAXI@Z @ 0x18007C6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800789A0 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

CCpuClipAntialiasDrawListEntry *__fastcall CCpuClipAntialiasDrawListEntry::`scalar deleting destructor'(
        CCpuClipAntialiasDrawListEntry *this,
        char a2)
{
  _QWORD *v2; // rdi
  void *v5; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  __int64 v10; // rcx
  int Current; // eax
  struct CThreadContext *v12; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    v5 = (void *)v2[2];
    if ( v5 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v5);
    }
    operator delete(v2, 0x18uLL);
  }
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 8);
  if ( v9 )
    (**v9)(v9, 1LL);
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x78uLL);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v15);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v12 = v15;
      if ( *((_DWORD *)v15 + 37) >= *((_DWORD *)v15 + 36) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v15 + 19);
        ++*((_DWORD *)v12 + 37);
        *((_QWORD *)v12 + 19) = this;
      }
    }
  }
  return this;
}
