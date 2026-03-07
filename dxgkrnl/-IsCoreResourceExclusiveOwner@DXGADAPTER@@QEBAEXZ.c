BOOLEAN __fastcall DXGADAPTER::IsCoreResourceExclusiveOwner(PERESOURCE *this)
{
  if ( KeGetCurrentThread() == (struct _KTHREAD *)this[23] )
    return 1;
  else
    return ExIsResourceAcquiredExclusiveLite(this[21]);
}
