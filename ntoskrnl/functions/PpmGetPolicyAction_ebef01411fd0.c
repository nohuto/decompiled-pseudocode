__int64 __fastcall PpmGetPolicyAction(__int64 *a1, int *a2)
{
  __int64 result; // rax
  int v3; // ecx
  bool v4; // zf

  result = *a1;
  if ( (*a1 & 0x38000000700LL) != 0 )
  {
    if ( (result & 0x100) != 0 )
      *a2 |= 0x200u;
    if ( (result & 0x400) != 0 )
      *a2 |= 0x40u;
    if ( (result & 0x200) != 0 )
      *a2 |= 0x20u;
    if ( (result & 0x10000000000LL) != 0 )
      *a2 |= 0x82u;
    if ( (result & 0x8000000000LL) != 0 )
    {
      v3 = *a2 | 0x100;
      v4 = PpmPerfAutonomousActivityWindowViaPerfControl == 0;
      *a2 = v3;
      if ( !v4 )
        *a2 = v3 | 2;
    }
    if ( (result & 0x20000000000LL) != 0 )
      *a2 |= 0x400u;
  }
  if ( (result & 0x4000000000LL) != 0 && PpmPerfEppViaPerfControl )
    *a2 |= 2u;
  if ( (result & 0x200CC54000004EC0LL) != 0 )
    *a2 |= 2u;
  if ( (result & 0x3E0180000000000LL) != 0 )
    *a2 |= 0x1000u;
  if ( (result & 0x1C10000000030000LL) != 0 )
    *a2 |= 0xCu;
  if ( (result & 0xC40000030DC0LL) != 0 )
    *a2 |= 8u;
  if ( (result & 0x2000D8000000LL) != 0 )
    *a2 |= 1u;
  if ( (result & 0x1000) != 0 )
    *a2 |= 0x10u;
  return result;
}
