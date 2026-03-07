__int64 __fastcall CInputQueue::AddRef(CInputQueue *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
