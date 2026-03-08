/*
 * XREFs of HUBFDO_GetPortStatusForDebugging @ 0x1C000E29C
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000E4EC (HUBFDO_IoctlGetNodeConnectionInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C0032664 (HUBMISC_ControlTransfer.c)
 */

_QWORD *__fastcall HUBFDO_GetPortStatusForDebugging(_QWORD *a1, int a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // r8
  char v5; // al
  int v6; // ecx
  unsigned __int16 v7; // dx
  __int64 v8; // [rsp+28h] [rbp-30h]

  for ( result = (_QWORD *)a1[295]; ; result = (_QWORD *)*result )
  {
    v4 = result - 31;
    if ( a1 + 295 == result )
      break;
    if ( *((unsigned __int16 *)v4 + 100) == a2 )
    {
      v5 = v4[21] & 0x1C;
      *((_WORD *)v4 + 86) = a2;
      *((_BYTE *)v4 + 169) = 0;
      *((_BYTE *)v4 + 168) = v5 | 0xA3;
      v6 = *((_DWORD *)v4 + 51) & 0x100;
      v7 = v6 != 0 ? 8 : 4;
      *((_WORD *)v4 + 85) = v6 != 0 ? 2 : 0;
      *((_WORD *)v4 + 87) = v7;
      result = (_QWORD *)HUBMISC_ControlTransfer(
                           (_DWORD)a1,
                           a1[31],
                           (_DWORD)v4,
                           (int)v4 + 16,
                           (__int64)HUBFDO_GetPortStatusForDebuggingComplete,
                           (__int64)(v4 + 23),
                           v7,
                           0,
                           0);
      if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v8) = (_DWORD)result;
        return (_QWORD *)WPP_RECORDER_SF_d(
                           a1[315],
                           2u,
                           3u,
                           0x36u,
                           (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
                           v8);
      }
      return result;
    }
  }
  return result;
}
