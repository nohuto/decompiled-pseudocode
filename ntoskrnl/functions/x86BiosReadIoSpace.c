unsigned __int32 __fastcall x86BiosReadIoSpace(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  unsigned __int32 result; // eax

  if ( !XmPciBiosPresent )
    goto LABEL_5;
  if ( (unsigned __int16)(a2 - 3320) <= 3u )
  {
    LOWORD(a2) = a2 - 3320;
    return x86BiosReadPciAddressPort(a1, a2, 3LL);
  }
  if ( XmPCIConfigAddress < 0 && (unsigned __int16)a2 >= 0xCFCu )
  {
    if ( (unsigned __int16)a2 <= 0xCFFu )
      return x86BiosReadPciDataPort(a1, (unsigned __int16)a2 - 3324);
  }
  else
  {
LABEL_5:
    if ( (unsigned __int16)(a2 - 112) <= 1u )
      return x86BiosReadCmosPort(a1, a2, 3LL);
  }
  v2 = x86BiosIoSpace + a2;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      return __indword(v2);
    }
    else
    {
      LOWORD(result) = __inword(v2);
      return (unsigned __int16)result;
    }
  }
  else
  {
    LOBYTE(result) = __inbyte(v2);
    return (unsigned __int8)result;
  }
}
