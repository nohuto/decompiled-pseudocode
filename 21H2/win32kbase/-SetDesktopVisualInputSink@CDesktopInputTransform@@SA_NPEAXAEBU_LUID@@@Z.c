/*
 * XREFs of ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01BAD9C
 * Callers:
 *     NtUserSetDesktopVisualInputSink @ 0x1C0133330 (NtUserSetDesktopVisualInputSink.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C005A5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C005CD98 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0082B80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?GetInstance@CDesktopInputTransform@@CAAEAV1@XZ @ 0x1C008782C (-GetInstance@CDesktopInputTransform@@CAAEAV1@XZ.c)
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1C01FB264 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C01FB870 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 */

char __fastcall CDesktopInputTransform::SetDesktopVisualInputSink(void *a1, const struct _LUID *a2)
{
  char v4; // bp
  struct CDesktopInputTransform *Instance; // rsi
  void *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rbx
  void **v9; // r14
  void *v10; // rcx
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  Instance = CDesktopInputTransform::GetInstance();
  v6 = 0LL;
  CPushLock::AcquireLockExclusive(Instance);
  v8 = *((_QWORD *)Instance + 4);
  v9 = (void **)((char *)Instance + 24);
  v10 = (void *)*((_QWORD *)Instance + 3);
  if ( v10 )
  {
    *((_QWORD *)Instance + 4) = 0LL;
    ObfDereferenceObject(v10);
    *v9 = 0LL;
  }
  v12 = v8;
  if ( a1 )
  {
    LOBYTE(v7) = 1;
    if ( (int)CompositionInputObject::ResolveHandle(a1, 1LL, v7, (struct CompositionInputObject **)Instance + 3) < 0 )
    {
      v4 = 0;
    }
    else
    {
      v6 = *v9;
      *((struct _LUID *)Instance + 4) = *a2;
      ObReferenceObjectByPointer(v6, 3u, ExCompositionObjectType, 0);
    }
  }
  CPushLock::ReleaseLock(Instance);
  if ( v8 )
    InputObjectMap::RemoveMapping(&v12, 1LL);
  if ( v6 )
  {
    InputObjectMap::AddMapping(a2, (const struct CompositionInputObject *)v6);
    ObfDereferenceObject(v6);
  }
  return v4;
}
