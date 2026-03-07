struct CVectorShape *__fastcall CContainerVectorShape::GetChildAt(CContainerVectorShape *this, unsigned int a2)
{
  return *(struct CVectorShape **)(*((_QWORD *)this + 13) + 8LL * a2);
}
