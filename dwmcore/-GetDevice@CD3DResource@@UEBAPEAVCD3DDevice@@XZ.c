struct CD3DDevice *__fastcall CD3DResource::GetDevice(CD3DResource *this)
{
  return *(struct CD3DDevice **)(*((_QWORD *)this + 3) + 80LL);
}
