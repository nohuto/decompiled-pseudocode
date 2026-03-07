void __fastcall FastRegion::Internal::CRgnData::BeginIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  int v3; // eax
  char *v4; // rdx
  FastRegion::Internal::CRgnData *v5; // rcx
  __int64 v6; // rdx

  *(_QWORD *)a2 = this;
  v3 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v4 = (char *)this + 12;
    *((_QWORD *)a2 + 2) = (char *)this + 12;
    *((_QWORD *)a2 + 1) = (char *)this + 8 * v3 + 4;
    v5 = (FastRegion::Internal::CRgnData *)((char *)this + *((int *)this + 4) + 12);
    *((_DWORD *)a2 + 8) = 0;
    *((_QWORD *)a2 + 3) = v5;
    v6 = (__int64)&v4[*((int *)v4 + 3) - (_QWORD)v5 + 8] >> 3;
    *((_DWORD *)a2 + 9) = v6;
    if ( (int)v6 <= 0 )
      FastRegion::Internal::CRgnData::StepIterator(v5, a2);
  }
  else
  {
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
  }
}
