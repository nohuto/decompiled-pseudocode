__int64 __fastcall DirectComposition::CChannelGroup::InsertChannel(
        DirectComposition::CChannelGroup *this,
        struct DirectComposition::CChannel *a2,
        unsigned int *a3)
{
  struct _ERESOURCE *v3; // rbx
  int inserted; // ebx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v9 = 0;
  inserted = DirectComposition::CLinearObjectTableBase::InsertObject(this, a2, &v9);
  if ( inserted >= 0 )
    *a3 = v9;
  ExReleaseResourceLite(*((PERESOURCE *)this + 7));
  KeLeaveCriticalRegion();
  return (unsigned int)inserted;
}
