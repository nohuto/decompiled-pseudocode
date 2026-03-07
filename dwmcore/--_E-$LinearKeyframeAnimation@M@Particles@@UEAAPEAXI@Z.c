_QWORD *__fastcall Particles::LinearKeyframeAnimation<float>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  void *v4; // rcx

  v4 = (void *)a1[1];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (a1[3] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
