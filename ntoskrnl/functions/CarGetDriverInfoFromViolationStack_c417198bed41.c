void __fastcall CarGetDriverInfoFromViolationStack(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _QWORD *v7; // rsi
  __int64 VerifierData; // rax
  unsigned int i; // edi

  if ( a3 )
  {
    v7 = a1;
    VerifierData = 0LL;
    if ( a4 )
    {
      if ( a5 && a6 )
      {
        *a4 = 0LL;
        *a5 = 0;
        *a6 = 0;
        if ( a1 )
        {
          for ( i = 0; i < 0xA; ++i )
          {
            if ( *v7 )
            {
              VerifierData = VfTargetDriversGetVerifierData();
              if ( VerifierData )
              {
                if ( *(_QWORD *)VerifierData )
                  break;
              }
            }
            ++v7;
          }
          if ( i == 10 || !VerifierData )
          {
            *(_QWORD *)a3 = *(_QWORD *)L"Unknown";
            *(_DWORD *)(a3 + 8) = *(_DWORD *)L"own";
            *(_WORD *)(a3 + 12) = aUnknown[6];
            *(_WORD *)(a3 + 14) = 0;
          }
          else
          {
            CarCopyDriverName((_WORD *)a3, (unsigned __int16 *)(*(_QWORD *)VerifierData + 24LL));
          }
        }
        else
        {
          *(_DWORD *)a3 = 4259918;
          *(_WORD *)(a3 + 4) = 0;
        }
      }
    }
  }
}
