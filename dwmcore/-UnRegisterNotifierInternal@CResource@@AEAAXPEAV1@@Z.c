void __fastcall CResource::UnRegisterNotifierInternal(CResource *this, struct CResource *a2)
{
  if ( a2 )
  {
    if ( CPtrArrayBase::Remove((struct CResource *)((char *)a2 + 24), (unsigned __int64)this) )
      (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 16LL))(a2);
  }
}
