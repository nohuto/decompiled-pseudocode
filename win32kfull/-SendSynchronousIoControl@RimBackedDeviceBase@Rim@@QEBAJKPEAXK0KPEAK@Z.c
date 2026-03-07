__int64 __fastcall Rim::RimBackedDeviceBase::SendSynchronousIoControl(
        Rim::RimBackedDeviceBase *this,
        ULONG a2,
        __int64 a3,
        ULONG a4,
        PVOID a5,
        ULONG a6,
        unsigned int *a7)
{
  bool v7; // zf
  int v10; // ebx
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v13 = 0LL;
  v7 = *((_BYTE *)this + 12) == 0;
  v12 = 0LL;
  if ( !v7
    || (v10 = Io::DeviceObjectPointer::GetByObjectName(
                (struct _UNICODE_STRING *)((*((_QWORD *)this + 2) + 280LL) & -(__int64)(*((_QWORD *)this + 2) != 0LL)),
                *((_QWORD *)this + 2) + 280LL,
                a3,
                (void **)&v12),
        v10 >= 0) )
  {
    v10 = SendSynchronousIoControl(a2, a4, a5, a6, (__int64)a7);
  }
  Io::DeviceObjectPointer::~DeviceObjectPointer((Io::DeviceObjectPointer *)&v12);
  return (unsigned int)v10;
}
