void __fastcall CCD_TOPOLOGY::Clear(CCD_TOPOLOGY *this)
{
  __int64 v2; // rax

  CCD_TOPOLOGY::ClearModalitySetId(this);
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    *(_WORD *)(v2 + 20) = 0;
}
