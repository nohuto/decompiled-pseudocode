char __fastcall CD3DDevice::CheckMPOCache(
        CD3DDevice *this,
        const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        bool *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v6; // rdi

  v4 = (_QWORD *)*((_QWORD *)this + 181);
  v6 = (_QWORD *)*((_QWORD *)this + 182);
  while ( 1 )
  {
    if ( v4 == v6 )
      return 0;
    if ( (**(unsigned __int8 (__fastcall ***)(_QWORD, const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, _QWORD, bool *))*v4)(
           *v4,
           a2,
           a3,
           a4) )
    {
      break;
    }
    ++v4;
  }
  return 1;
}
