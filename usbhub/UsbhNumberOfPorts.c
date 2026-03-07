__int64 __fastcall UsbhNumberOfPorts(__int64 a1)
{
  return *((unsigned __int8 *)FdoExt(a1) + 2938);
}
