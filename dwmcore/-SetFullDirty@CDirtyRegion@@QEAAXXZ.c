void __fastcall CDirtyRegion::SetFullDirty(CDirtyRegion *this)
{
  char v2; // bl
  __int64 v3; // rsi

  if ( !*((_BYTE *)this + 4420) )
  {
    v2 = *((_BYTE *)this + 4422);
    v3 = *((_QWORD *)this + 1);
    CDirtyRegion::Initialize(this, 1);
    *((_BYTE *)this + 4422) = v2;
    if ( v2 )
      *((_DWORD *)this + 705) = 1;
    *((_QWORD *)this + 1) = v3;
  }
}
