DXGADAPTERSYNCOBJECT *__fastcall DXGADAPTERSYNCOBJECT::DXGADAPTERSYNCOBJECT(
        DXGADAPTERSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2)
{
  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_WORD *)this + 12) = 0;
  *((_BYTE *)this + 26) = 0;
  *((_QWORD *)this + 4) = 0LL;
  return this;
}
