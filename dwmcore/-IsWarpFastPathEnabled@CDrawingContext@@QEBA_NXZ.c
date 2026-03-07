char __fastcall CDrawingContext::IsWarpFastPathEnabled(CDrawingContext *this)
{
  char v1; // bl
  CMILMatrix *TopByReference; // rax

  v1 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 568LL) )
  {
    if ( !CCommonRegistryData::UseHWDrawListEntriesOnWARP )
    {
      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
      if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
      {
        if ( (*((_DWORD *)this + 164) || !*((_DWORD *)this + 146)) && !*((_QWORD *)this + 428) )
          return 1;
      }
    }
  }
  return v1;
}
