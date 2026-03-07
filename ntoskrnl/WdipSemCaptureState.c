__int64 __fastcall WdipSemCaptureState(__int64 a1, char a2)
{
  char v3; // si
  unsigned int v4; // ecx
  unsigned __int16 v5; // di
  int v6; // edx
  int v8; // edx
  __int64 v10; // rcx
  int v11; // r8d

  v3 = 0;
  v4 = 0;
  if ( !a2 )
  {
    if ( !a1 )
      return (unsigned int)-1073741811;
    v5 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
    v6 = *(_DWORD *)(a1 + 32);
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          return v4;
        return (unsigned int)WdipSemEnableDisableTrace(v5, a1, 0, 0, 0, 2);
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 40);
        if ( !*(_BYTE *)(v10 + 69) )
        {
          v3 = 1;
          v11 = *(unsigned __int8 *)(a1 + 18);
          if ( (unsigned __int8)v11 <= *(_BYTE *)(v10 + 48) )
            v11 = *(unsigned __int8 *)(v10 + 48);
          v4 = WdipSemEnableDisableTrace(
                 v5,
                 a1,
                 v11,
                 *(_DWORD *)(a1 + 24) | *(_DWORD *)(v10 + 56),
                 *(_DWORD *)(a1 + 36) | *(_DWORD *)(v10 + 64),
                 1);
          if ( (v4 & 0x80000000) != 0 )
            return v4;
        }
        v4 = WdipSemEnableDisableTrace(v5, a1, 0, 0, 0, 2);
        if ( !v3 )
          return v4;
        return (unsigned int)WdipSemEnableDisableTrace(v5, a1, 0, 0, 0, 0);
      }
    }
  }
  return v4;
}
