void *__fastcall CKernelTransport::GetWorkEvent(CKernelTransport *this)
{
  return (void *)*((_QWORD *)this + 2);
}
