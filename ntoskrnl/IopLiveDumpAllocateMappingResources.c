/*
 * XREFs of IopLiveDumpAllocateMappingResources @ 0x14094AE18
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     MmAllocateDumpHibernateResources @ 0x1407FCCCC (MmAllocateDumpHibernateResources.c)
 *     IopLiveDumpFreeMappingResources @ 0x14094B3F0 (IopLiveDumpFreeMappingResources.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLiveDumpAllocateMappingResources(__int64 a1)
{
  unsigned int v1; // esi
  __int64 Pool2; // rax
  unsigned int v4; // ebx
  int v6; // ebp
  __int64 i; // r14
  __int64 v8; // r15
  void *DumpHibernateResources; // rax
  PMDL Mdl; // rax

  v1 = KeNumberProcessors_0;
  Pool2 = ExAllocatePool2(64LL, 16LL * (unsigned int)KeNumberProcessors_0, 1886217292LL);
  v4 = 0;
  *(_QWORD *)(a1 + 896) = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(a1 + 888) = v1;
    v6 = 0;
    if ( !v1 )
      return v4;
    for ( i = 0LL; ; i += 16LL )
    {
      v8 = *(_QWORD *)(a1 + 896);
      DumpHibernateResources = (void *)MmAllocateDumpHibernateResources(0x10000uLL);
      *(_QWORD *)(i + v8) = DumpHibernateResources;
      if ( !DumpHibernateResources )
        break;
      Mdl = IoAllocateMdl(DumpHibernateResources, 0x10000u, 0, 0, 0LL);
      *(_QWORD *)(i + v8 + 8) = Mdl;
      if ( !Mdl )
        break;
      if ( ++v6 >= v1 )
        return v4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 888) = 0;
  }
  v4 = -1073741670;
  IopLiveDumpFreeMappingResources(a1);
  return v4;
}
