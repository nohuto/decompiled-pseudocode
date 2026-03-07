void __fastcall CVisRgnTrackerProp::Delete(CVisRgnTrackerProp *this)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CVisRgnTrackerProp::FreeTrackedRegions(this);
  if ( *((_BYTE *)this + 73) )
  {
    v2 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
    v3 = *(_QWORD *)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2
      || (v4 = *(_QWORD **)((((unsigned __int64)this + 24) & -(__int64)(this != 0LL)) + 8), *v4 != v2) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *((_BYTE *)this + 73) = 0;
  }
  Win32FreePool(this);
}
