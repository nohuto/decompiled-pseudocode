struct CD3DDevice *__fastcall CDxHandleYUVBitmapRealization::GetDevice(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDevice *result; // rax

  result = (struct CD3DDevice *)*((_QWORD *)this - 13);
  if ( result )
    return *(struct CD3DDevice **)(*((_QWORD *)result + 3) + 80LL);
  return result;
}
