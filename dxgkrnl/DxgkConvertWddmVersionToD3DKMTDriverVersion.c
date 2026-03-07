__int64 __fastcall DxgkConvertWddmVersionToD3DKMTDriverVersion(int a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 12544:
      return 3100LL;
    case 12288:
      return 3000LL;
    case 10496:
      return 2900LL;
    case 10240:
      return 2800LL;
    case 9984:
      return 2700LL;
    case 9728:
      return 2600LL;
    case 9472:
      return 2500LL;
    case 9216:
      return 2400LL;
    case 8960:
      return 2300LL;
    case 8704:
      return 2200LL;
    case 8448:
      return 2100LL;
    case 8192:
      return 2000LL;
    case 4864:
      return 1300LL;
  }
  result = 1105LL;
  if ( a1 == 4608 )
    return 1200LL;
  return result;
}
