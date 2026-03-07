__int64 __fastcall NVMeGetControllerSerialNumber(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  result = 1LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 1840);
    if ( v3 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        *(_OWORD *)(a2 + 9) = *(_OWORD *)(v3 + 4);
        *(_DWORD *)(a2 + 25) = *(_DWORD *)(v3 + 20);
        *(_BYTE *)(a2 + 29) = 95;
        v4 = *(unsigned __int16 *)(v3 + 78);
        *(_BYTE *)(a2 + 33) = `HexFromUchar'::`2'::hexDigits[v4 & 0xF];
        *(_BYTE *)(a2 + 32) = `HexFromUchar'::`2'::hexDigits[(unsigned __int8)v4 >> 4];
        *(_BYTE *)(a2 + 31) = `HexFromUchar'::`2'::hexDigits[((unsigned int)v4 >> 8) & 0xF];
        *(_BYTE *)(a2 + 30) = `HexFromUchar'::`2'::hexDigits[v4 >> 12];
        result = 0LL;
        *(_BYTE *)(a2 + 34) = 0;
        *(_BYTE *)(a2 + 8) = 0;
      }
    }
  }
  return result;
}
