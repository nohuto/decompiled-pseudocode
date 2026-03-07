IOCPDispatcher::ThreadIOCPWCP *__fastcall IOCPDispatcher::ThreadIOCPWCP::ThreadIOCPWCP(
        IOCPDispatcher::ThreadIOCPWCP *this)
{
  IOCPDispatcher::ThreadIOCPWCP *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  result = this;
  *((_QWORD *)this + 3) = 0LL;
  return result;
}
