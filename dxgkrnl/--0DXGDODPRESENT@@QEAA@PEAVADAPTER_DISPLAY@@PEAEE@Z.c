DXGDODPRESENT *__fastcall DXGDODPRESENT::DXGDODPRESENT(
        DXGDODPRESENT *this,
        struct ADAPTER_DISPLAY *a2,
        BLTQUEUE *a3,
        unsigned __int8 a4)
{
  unsigned int v4; // edi

  v4 = 0;
  *(_DWORD *)this = *((_DWORD *)a2 + 24);
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 96) = a4;
  *((_DWORD *)this + 32) = -1;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 66;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  memset((char *)this + 16, 0, 0x40uLL);
  *((_QWORD *)this + 1) = a3;
  if ( *(_DWORD *)this )
  {
    do
    {
      BLTQUEUE::BLTQUEUE(a3, this, v4, (struct _KEVENT *)(4000LL * v4 + *((_QWORD *)a2 + 16) + 904LL), a4);
      ++v4;
      a3 = (BLTQUEUE *)((char *)a3 + 2920);
    }
    while ( v4 < *(_DWORD *)this );
  }
  return this;
}
