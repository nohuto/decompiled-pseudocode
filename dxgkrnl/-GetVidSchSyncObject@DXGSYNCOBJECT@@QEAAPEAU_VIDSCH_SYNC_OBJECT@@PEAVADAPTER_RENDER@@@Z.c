struct _VIDSCH_SYNC_OBJECT *__fastcall DXGSYNCOBJECT::GetVidSchSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2)
{
  if ( (*((_DWORD *)this + 51) & 4) != 0 )
    return (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject(this, a2) + 4);
  else
    return (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + 41);
}
