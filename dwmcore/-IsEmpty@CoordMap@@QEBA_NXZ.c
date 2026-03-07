bool __fastcall CoordMap::IsEmpty(CoordMap *this)
{
  return ((*((_QWORD *)this + 1) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF0uLL) == 0
      && ((*((_QWORD *)this + 24) - *((_QWORD *)this + 23)) & 0xFFFFFFFFFFFFFFF0uLL) == 0
      && ((*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) & 0xFFFFFFFFFFFFFFF0uLL) == 0;
}
