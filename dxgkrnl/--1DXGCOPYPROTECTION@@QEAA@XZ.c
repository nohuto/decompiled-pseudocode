void __fastcall DXGCOPYPROTECTION::~DXGCOPYPROTECTION(DXGCOPYPROTECTION *this)
{
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 12), *((_QWORD *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
