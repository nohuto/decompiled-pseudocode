void __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  PVOID v4; // rbx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( ViRemLockInitialized )
  {
    if ( qword_140D719E8 )
    {
      if ( !(unsigned int)VfPoolIsInternalFree() )
      {
        VfAvlInitializeLockContext((__int64)&v5, 1);
        v4 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v5, a1, a2);
        VfAvlCleanupLockContext((__int64)&v5);
        if ( v4 )
        {
          while ( (unsigned int)ViRemLockDeleteFirstTreeNode(a1, a2) )
            ;
        }
      }
    }
  }
}
