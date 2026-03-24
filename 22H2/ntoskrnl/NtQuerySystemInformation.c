/*
 * XREFs of NtQuerySystemInformation @ 0x1406C9CB0
 * Callers:
 *     HalpTimerConfigureQpcBypass @ 0x1403CD6AC (HalpTimerConfigureQpcBypass.c)
 *     AlpcpInitSystem @ 0x1407CDF6C (AlpcpInitSystem.c)
 * Callees:
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 */

__int64 __fastcall NtQuerySystemInformation(__int64 a1)
{
  __int16 *p_Group; // r10
  __int16 Group; // [rsp+40h] [rbp+8h] BYREF

  p_Group = 0LL;
  Group = 0;
  if ( (int)a1 < 74 || (int)a1 >= 83 )
  {
    switch ( (int)a1 )
    {
      case 8:
      case 23:
      case 42:
      case 61:
      case 83:
      case 100:
      case 108:
      case 141:
        Group = KeGetCurrentPrcb()->Group;
        goto LABEL_7;
      case 73:
LABEL_7:
        p_Group = &Group;
        return ExpQuerySystemInformation(a1, p_Group);
      case 107:
      case 121:
      case 180:
      case 210:
      case 211:
        return 3221225475LL;
      default:
        return ExpQuerySystemInformation(a1, p_Group);
    }
  }
  return ExpQuerySystemInformation(a1, p_Group);
}
