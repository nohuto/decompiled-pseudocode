__int64 __fastcall VfTargetReplaceIoCallbacks(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 Pool2; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v6 = 0LL;
  if ( ViTargetInitialized )
  {
    v2 = *((_QWORD *)VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v6, a1, 1LL) + 6);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 48);
      if ( v3 )
      {
        Pool2 = ExAllocatePool2(64LL, 256LL, 1229940310LL);
        *(_QWORD *)(v3 + 64) = Pool2;
        if ( Pool2 )
        {
          if ( !VfDifCaptureIoCallbacks(v2) )
          {
            ExFreePoolWithTag(*(PVOID *)(v3 + 64), 0);
            *(_QWORD *)(v3 + 64) = 0LL;
            v1 = -1073738634;
          }
        }
        else
        {
          v1 = -1073741801;
        }
      }
    }
  }
  VfAvlCleanupLockContext((__int64)&v6);
  return v1;
}
