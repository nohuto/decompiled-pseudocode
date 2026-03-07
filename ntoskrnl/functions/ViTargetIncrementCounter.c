void __fastcall ViTargetIncrementCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  v9 = 0LL;
  if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a1) )
  {
    LOBYTE(v4) = VfDriverIsKernelImageAddress(v3);
    if ( !v4 )
    {
      VfAvlInitializeLockContext((__int64)&v9, 1);
      v7 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v9, v6, v5);
      if ( v7 )
      {
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      VfAvlCleanupLockContext((__int64)&v9);
    }
  }
}
