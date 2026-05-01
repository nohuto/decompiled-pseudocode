/*
 * XREFs of CreateResourceManagerProxy @ 0x18000FC7C
 * Callers:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FD30 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180005070 (CempRpcBindToServer.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A8E0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 CreateResourceManagerProxy()
{
  void *v0; // rax
  int v1; // ebx
  int v2; // eax

  v0 = operator new(0x10uLL);
  if ( v0 )
  {
    *((_QWORD *)v0 + 1) = 0LL;
    *(_QWORD *)v0 = &ResourceManagerProxy::`vftable';
  }
  qword_180024788 = (__int64)v0;
  if ( v0 )
  {
    v2 = CempRpcBindToServer(&unk_180015640, (RPC_BINDING_HANDLE *)v0 + 1) | 0x10000000;
    v1 = 0;
    if ( v2 < 0 )
      v1 = v2;
    if ( v1 < 0 )
    {
      if ( qword_180024788 )
      {
        (**(void (__fastcall ***)(__int64, __int64))qword_180024788)(qword_180024788, 1LL);
        qword_180024788 = 0LL;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v1;
}
