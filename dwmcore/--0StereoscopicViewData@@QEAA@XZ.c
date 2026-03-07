StereoscopicViewData *__fastcall StereoscopicViewData::StereoscopicViewData(StereoscopicViewData *this)
{
  StereoscopicViewData *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  result = this;
  *(_QWORD *)this = 1065353216LL;
  *(_QWORD *)((char *)this + 20) = 1065353216LL;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_DWORD *)this + 15) = 1065353216;
  *((_QWORD *)this + 8) = 1065353216LL;
  *(_QWORD *)((char *)this + 84) = 1065353216LL;
  *((_QWORD *)this + 13) = 1065353216LL;
  *((_DWORD *)this + 31) = 1065353216;
  *((_QWORD *)this + 16) = 1065353216LL;
  *(_QWORD *)((char *)this + 148) = 1065353216LL;
  *((_QWORD *)this + 21) = 1065353216LL;
  *((_DWORD *)this + 47) = 1065353216;
  return result;
}
