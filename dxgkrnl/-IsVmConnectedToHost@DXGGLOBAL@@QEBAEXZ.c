unsigned __int8 __fastcall DXGGLOBAL::IsVmConnectedToHost(DXGGLOBAL *this)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al

  v1 = *((_QWORD *)this + 214);
  result = 0;
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 68) )
      return 1;
  }
  return result;
}
