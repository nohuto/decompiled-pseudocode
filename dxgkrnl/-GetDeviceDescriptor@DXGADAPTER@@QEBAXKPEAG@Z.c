void __fastcall DXGADAPTER::GetDeviceDescriptor(DXGADAPTER *this, unsigned int a2, unsigned __int16 *a3)
{
  size_t *v4; // r8

  v4 = (size_t *)*((_QWORD *)this + 217);
  if ( v4 )
  {
    RtlStringCbCopyW(a3, a2, v4);
  }
  else if ( a2 >= 2 )
  {
    if ( a3 )
      *a3 = 0;
  }
}
