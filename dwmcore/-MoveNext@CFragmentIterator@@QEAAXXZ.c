void __fastcall CFragmentIterator::MoveNext(CFragmentIterator *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1) - 16LL;
  *((_QWORD *)this + 1) = v1;
  if ( (v1 - *(_QWORD *)this) >> 4 )
  {
    ++*(_DWORD *)(v1 - 8);
    CFragmentIterator::FindFirst(this);
  }
}
