union _SLIST_HEADER *__fastcall CHolographicInteropTaskQueue::`scalar deleting destructor'(
        union _SLIST_HEADER *this,
        char a2)
{
  CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
