__int64 __fastcall PiIommuUnblockDevice(__int64 a1, char a2)
{
  _BYTE *v2; // r9
  _BYTE *v4; // rbx
  __int64 result; // rax

  v2 = *(_BYTE **)(a1 + 720);
  v4 = v2 + 16;
  if ( !a2 && ((*v4 & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v2 + 4LL) & 1) == 0 || (v2[17] & 1) != 0) )
    return 0LL;
  if ( !PipHalIommuSecurityEnabled )
  {
    if ( PipDmaGuardTestMode )
      *v4 |= 2u;
    return 0LL;
  }
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *))off_140C01DD8[0])(
             *(_QWORD *)v2,
             *(_QWORD *)(a1 + 32),
             v2 + 8);
  if ( (_DWORD)result == -1070268391 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
      return 0LL;
  }
  else if ( (int)result >= 0 )
  {
    *v4 |= 2u;
  }
  return result;
}
