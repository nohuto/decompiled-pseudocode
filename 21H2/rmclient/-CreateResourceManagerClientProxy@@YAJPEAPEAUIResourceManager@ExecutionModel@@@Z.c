/*
 * XREFs of ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x1800097C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x180009840 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180009AF4 (--0ResourceManagerClientProxy@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A8E0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateResourceManagerClientProxy(struct IResourceManager **a1)
{
  ResourceManagerClientProxy *v2; // rax
  ResourceManagerClientProxy *v3; // rbx
  int v4; // edi

  if ( a1 )
  {
    v2 = (ResourceManagerClientProxy *)operator new(0x290uLL);
    if ( v2 )
      v3 = ResourceManagerClientProxy::ResourceManagerClientProxy(v2);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v4 = ResourceManagerClientProxy::Init(v3);
      if ( v4 >= 0 )
      {
        *a1 = (struct IResourceManager *)v3;
        v3 = 0LL;
      }
      if ( v3 )
        (*(void (__fastcall **)(ResourceManagerClientProxy *, __int64))(*(_QWORD *)v3 + 120LL))(v3, 1LL);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v4;
}
