void __fastcall CVisRgnTrackerProp::RemoveTracker(CVisRgnTrackerProp *this, int a2)
{
  int v3; // edx
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rbx
  void *v7; // rax
  __int64 v8; // rbx
  void *v9; // rax

  v3 = *((_DWORD *)this + 10) & ~a2;
  *((_DWORD *)this + 10) = v3;
  if ( (v3 & 8) == 0 && *((_QWORD *)this + 6) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 0);
    v8 = **((_QWORD **)this + 2);
    v9 = (void *)ReferenceDwmApiPort();
    DwmAsyncUpdateVisRgn(v9, v8, 0, 0LL, 0);
  }
  if ( (*((_DWORD *)this + 10) & 6) == 0 && *((_QWORD *)this + 7) )
  {
    CVisRgnTrackerProp::FreeTrackedRegion(this, 1u);
    v6 = **((_QWORD **)this + 2);
    v7 = (void *)ReferenceDwmApiPort();
    DwmAsyncUpdateVisRgn(v7, v6, 1, 0LL, 0);
  }
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
  {
    if ( *((_QWORD *)this + 8) )
    {
      CVisRgnTrackerProp::FreeTrackedRegion(this, 2u);
      v4 = **((_QWORD **)this + 2);
      v5 = (void *)ReferenceDwmApiPort();
      DwmAsyncUpdateVisRgn(v5, v4, 2, 0LL, 0);
    }
  }
}
