__int64 __fastcall DirectComposition::CApplicationChannel::InitializeAndRegisterInternalResource(
        DirectComposition::CConnection **this,
        struct DirectComposition::CResourceMarshaler *a2)
{
  int v4; // ebx

  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a2 + 16LL))(a2)
    && (v4 = DirectComposition::CConnection::AcquireShellResourceAccess(this[5]), v4 < 0)
    || (v4 = (**(__int64 (__fastcall ***)(struct DirectComposition::CResourceMarshaler *))a2)(a2), v4 < 0)
    || (v4 = DirectComposition::CApplicationChannel::RegisterResource(
               (DirectComposition::CApplicationChannel *)this,
               a2),
        v4 < 0) )
  {
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 1LL);
  }
  return (unsigned int)v4;
}
