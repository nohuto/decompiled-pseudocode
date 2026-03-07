void __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  _QWORD *v4; // rdx

  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
  v4 = (_QWORD *)*((_QWORD *)this + 47);
  if ( v4 )
  {
    *v4 = *((_QWORD *)a2 + 50);
    *((_QWORD *)a2 + 50) = v4;
    *((_QWORD *)this + 47) = 0LL;
  }
}
