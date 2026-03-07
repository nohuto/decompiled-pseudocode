void __fastcall SURFACE::hdev(SURFACE *this, HDEV a2)
{
  *((_QWORD *)this + 89) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6088LL);
  memset((char *)this + 728, 0, 0x40uLL);
  RtlCaptureStackBackTrace(0, 8u, (PVOID *)this + 91, 0LL);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 87) = a2;
}
