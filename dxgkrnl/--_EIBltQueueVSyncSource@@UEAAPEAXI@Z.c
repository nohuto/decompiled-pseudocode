IBltQueueVSyncSource *__fastcall IBltQueueVSyncSource::`vector deleting destructor'(
        IBltQueueVSyncSource *this,
        char a2)
{
  *(_QWORD *)this = &IBltQueueVSyncSource::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
