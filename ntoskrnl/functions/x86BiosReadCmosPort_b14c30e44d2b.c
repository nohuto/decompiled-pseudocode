__int64 __fastcall x86BiosReadCmosPort(int a1, unsigned __int16 a2)
{
  int v3; // esi
  unsigned int CmosPortByte; // edi
  int v5; // ebx

  v3 = a2;
  CmosPortByte = (unsigned __int8)x86BiosReadCmosPortByte(a2);
  if ( a1 > 0 )
  {
    CmosPortByte |= (unsigned __int8)x86BiosReadCmosPortByte((unsigned int)(v3 + 1)) << 8;
    if ( a1 > 1 )
    {
      v5 = (unsigned __int8)x86BiosReadCmosPortByte((unsigned int)(v3 + 3)) << 8;
      CmosPortByte |= (v5 | (unsigned __int8)x86BiosReadCmosPortByte((unsigned int)(v3 + 2))) << 16;
    }
  }
  return CmosPortByte;
}
