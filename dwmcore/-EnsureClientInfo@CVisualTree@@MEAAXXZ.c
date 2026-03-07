void __fastcall CVisualTree::EnsureClientInfo(CVisualTree *this)
{
  if ( *((_BYTE *)this + 4712) )
  {
    CVisualTree::UpdateClientBounds(this);
    if ( CCommonRegistryData::ForceDesktopTreeFullDirty )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 184LL))(this) )
        *((_BYTE *)this + 4714) = 0;
    }
    *((_BYTE *)this + 4712) = 0;
  }
}
