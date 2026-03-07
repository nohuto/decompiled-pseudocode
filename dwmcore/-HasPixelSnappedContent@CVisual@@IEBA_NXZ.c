char __fastcall CVisual::HasPixelSnappedContent(CVisual *this)
{
  char v1; // bl
  struct CBrush *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( CVisual::GetContentAsBrushNoRef(this, &v3) )
    return (*(unsigned __int8 (__fastcall **)(struct CBrush *))(*(_QWORD *)v3 + 304LL))(v3) != 0;
  return v1;
}
