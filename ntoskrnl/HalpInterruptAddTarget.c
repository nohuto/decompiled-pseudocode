/*
 * XREFs of HalpInterruptAddTarget @ 0x14028ED40
 * Callers:
 *     HalpInterruptDestinationToTarget @ 0x14028EC7C (HalpInterruptDestinationToTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptAddTarget(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = a2;
  v4 = HalpInterruptTargets;
  v5 = 3 * v2;
  result = *(unsigned int *)(HalpInterruptTargets + 24 * v2);
  switch ( (_DWORD)result )
  {
    case 4:
      *a1 = 4;
      goto LABEL_11;
    case 5:
      if ( *a1 == 5 )
      {
        a1[2] |= *(_DWORD *)(HalpInterruptTargets + 8 * v5 + 8);
        return result;
      }
      *a1 = 5;
LABEL_11:
      result = *(unsigned int *)(v4 + 8 * v5 + 8);
      a1[2] = result;
      return result;
    case 6:
      if ( *a1 == 6 && a1[2] == *(_DWORD *)(HalpInterruptTargets + 8 * v5 + 8) )
      {
        result = *(unsigned int *)(HalpInterruptTargets + 8 * v5 + 12);
        a1[3] |= result;
      }
      else
      {
        *a1 = 6;
        a1[2] = *(_DWORD *)(v4 + 8 * v5 + 8);
        result = *(unsigned int *)(v4 + 8 * v5 + 12);
        a1[3] = result;
      }
      break;
    default:
      *a1 = 3;
      break;
  }
  return result;
}
