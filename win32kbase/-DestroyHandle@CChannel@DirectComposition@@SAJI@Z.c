__int64 __fastcall DirectComposition::CChannel::DestroyHandle(__int64 a1)
{
  struct DirectComposition::CProcessData *v1; // rax
  struct DirectComposition::CProcessData *v2; // rdi
  struct _ERESOURCE *v3; // rbx
  DirectComposition::CChannel *v4; // rsi
  unsigned int v5; // ebx

  v1 = DirectComposition::CProcessData::Current(a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = (struct _ERESOURCE *)*((_QWORD *)v1 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v3, 1u);
    v4 = (DirectComposition::CChannel *)DirectComposition::CGenericTable<unsigned int,DirectComposition::CChannel,1952662340,1>::RemoveObject(*(PRTL_GENERIC_TABLE *)v2);
    v5 = 0;
    if ( !v4 )
      v5 = -1073741790;
    ExReleaseResourceLite(*((PERESOURCE *)v2 + 1));
    KeLeaveCriticalRegion();
    if ( v4 )
      DirectComposition::CChannel::Release(v4);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
