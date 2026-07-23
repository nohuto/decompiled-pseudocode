/*
 * XREFs of PopReadUlongPowerKey @ 0x1403CBAB4
 * Callers:
 *     PopBatteryInitPhaseTwo @ 0x140A70604 (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x1403CBAF8 (PopReadRegKeyValue.c)
 */

__int64 __fastcall PopReadUlongPowerKey(PCWSTR a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx

  result = PopReadRegKeyValue(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power", a1, 4uLL, a2);
  if ( (int)result < 0 )
  {
    *a2 = 1;
    return result;
  }
  v4 = *a2;
  if ( *a2 != 100 )
  {
    if ( !v4 )
    {
      *a2 = 1;
      return 3221226034LL;
    }
    if ( v4 > 0xA )
    {
      *a2 = 10;
      return 3221226034LL;
    }
  }
  return result;
}
