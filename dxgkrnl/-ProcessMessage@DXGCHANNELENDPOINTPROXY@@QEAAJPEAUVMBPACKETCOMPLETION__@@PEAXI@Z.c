__int64 __fastcall DXGCHANNELENDPOINTPROXY::ProcessMessage(
        DXGCHANNELENDPOINTPROXY *this,
        struct VMBPACKETCOMPLETION__ *a2,
        void *a3,
        unsigned int a4)
{
  int v6; // edi

  *((_QWORD *)this + 18) = a2;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, void *, _QWORD))this + 17))(*((_QWORD *)this + 17), a3, a4);
  if ( v6 >= 0 && *((_QWORD *)this + 18) )
  {
    ((void (__fastcall *)(struct VMBPACKETCOMPLETION__ *, _QWORD, _QWORD))qword_1C013CE98)(a2, 0LL, 0LL);
    *((_QWORD *)this + 18) = 0LL;
  }
  return (unsigned int)v6;
}
