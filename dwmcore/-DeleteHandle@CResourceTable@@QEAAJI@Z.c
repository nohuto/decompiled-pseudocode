/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x180099B0C
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180099A64 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x18009C3AC (-Channel_CreateResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180099BBC (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800DE484 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800DF5C0 (_anonymous_namespace_--AddToResourceCount.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  unsigned int v4; // r8d
  unsigned int *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r8d

  if ( (unsigned int)HANDLE_TABLE::ValidEntry((CResourceTable *)((char *)this + 16), a2) )
  {
    v5 = (unsigned int *)(*((_QWORD *)this + 5) + *((_DWORD *)this + 6) * a2);
    if ( v5 )
    {
      if ( *v5 )
      {
        if ( *((_QWORD *)v5 + 1) )
        {
          v6 = AddToResourceCount(*((_QWORD *)this + 7) + 44LL, *v5, 0xFFFFFFFFLL);
          anonymous_namespace_::AddToResourceCount(v6, v7);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 1) + 16LL))(*((_QWORD *)v5 + 1));
          *((_QWORD *)v5 + 1) = 0LL;
        }
        memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        return 0;
      }
    }
  }
  return v4;
}
