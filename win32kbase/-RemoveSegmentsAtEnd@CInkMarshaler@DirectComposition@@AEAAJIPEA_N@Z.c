__int64 __fastcall DirectComposition::CInkMarshaler::RemoveSegmentsAtEnd(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        bool *a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // r9

  result = DirectComposition::CDCompDynamicArrayBase::Shrink(
             (DirectComposition::CInkMarshaler *)((char *)this + 112),
             a2);
  if ( (int)result >= 0 )
  {
    v6 = *((unsigned int *)this + 38);
    if ( v6 >= *((_QWORD *)this + 17) )
      LODWORD(v6) = *((_QWORD *)this + 17);
    *((_DWORD *)this + 4) &= ~0x80u;
    *((_DWORD *)this + 38) = v6;
    *a3 = 1;
  }
  return result;
}
