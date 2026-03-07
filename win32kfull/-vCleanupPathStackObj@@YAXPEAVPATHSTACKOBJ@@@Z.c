void __fastcall vCleanupPathStackObj(struct PATHSTACKOBJ *a1)
{
  if ( a1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
      EPATHOBJ::vFreeBlocks(a1);
  }
}
