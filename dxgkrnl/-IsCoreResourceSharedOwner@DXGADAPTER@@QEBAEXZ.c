bool __fastcall DXGADAPTER::IsCoreResourceSharedOwner(DXGADAPTER *this)
{
  return KeGetCurrentThread() == *((struct _KTHREAD **)this + 23)
      || ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 21)) != 0;
}
