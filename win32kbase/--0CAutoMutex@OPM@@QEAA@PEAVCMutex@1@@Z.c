OPM::CAutoMutex *__fastcall OPM::CAutoMutex::CAutoMutex(OPM::CAutoMutex *this, struct OPM::CMutex *a2)
{
  *(_QWORD *)this = a2;
  OPM::CMutex::Lock(a2);
  return this;
}
