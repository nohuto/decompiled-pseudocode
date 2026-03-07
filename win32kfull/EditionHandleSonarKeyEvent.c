__int64 __fastcall EditionHandleSonarKeyEvent(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  result = *(unsigned __int16 *)(a1 + 2);
  if ( (result & 0x4000) == 0 )
  {
    if ( (result & 0x8000u) == 0LL )
    {
      if ( _bittest((const signed __int32 *)gpdwCPUserPreferencesMask, 0xEu) )
      {
        a1 = gfade[12];
        if ( (a1 & 0x80u) != 0LL )
        {
          StopFade();
          *(_DWORD *)(SGDGetUserSessionState(v6) + 15964) = -1;
        }
      }
      result = SGDGetUserSessionState(a1);
      if ( *(_BYTE *)(result + 13991) != a2 )
      {
        result = SGDGetUserSessionState(v5);
        *(_BYTE *)(result + 13991) = a2;
      }
    }
    else
    {
      if ( a2 == *(_BYTE *)(SGDGetUserSessionState(a1) + 13990)
        && a2 == *(_BYTE *)(SGDGetUserSessionState(v4) + 13991)
        && _bittest((const signed __int32 *)gpdwCPUserPreferencesMask, 0xEu) )
      {
        zzzStartSonar();
      }
      result = (__int64)gpdwCPUserPreferencesMask;
      if ( _bittest((const signed __int32 *)gpdwCPUserPreferencesMask, 0xEu) )
      {
        result = SGDGetUserSessionState(v4);
        if ( *(_BYTE *)(result + 13991) )
        {
          result = SGDGetUserSessionState(v7);
          *(_BYTE *)(result + 13991) = 0;
        }
      }
    }
  }
  return result;
}
