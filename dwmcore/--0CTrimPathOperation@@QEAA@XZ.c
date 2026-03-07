CTrimPathOperation *__fastcall CTrimPathOperation::CTrimPathOperation(CTrimPathOperation *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  Path::Segment::Segment((char *)this + 48, 0LL);
  LOBYTE(v2) = 2;
  Path::Segment::Segment((char *)this + 64, v2);
  LOBYTE(v3) = 5;
  Path::Segment::Segment((char *)this + 80, v3);
  CBezierFlattener<float,CMilPoint2F>::CBezierFlattener<float,CMilPoint2F>((char *)this + 112);
  `vector constructor iterator'((char *)this + 204, 8uLL, 0x10uLL, (void *(*)(void *))CMilPoint2F::CMilPoint2F);
  return this;
}
