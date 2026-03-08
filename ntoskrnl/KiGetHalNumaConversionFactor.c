/*
 * XREFs of KiGetHalNumaConversionFactor @ 0x140B925EC
 * Callers:
 *     KiComputeNumaCosts @ 0x140B727C4 (KiComputeNumaCosts.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiGetHalNumaConversionFactor(int *a1)
{
  int v1; // edx
  unsigned int v3; // r9d
  __int64 v4; // r10
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r10
  unsigned __int64 result; // rax
  int v8; // ecx
  unsigned __int64 v9; // rax

  v1 = 0;
  if ( KeNumberNodes )
  {
    while ( 2 )
    {
      v3 = 0;
      do
      {
        v4 = v3 + v1 * (unsigned __int16)KeNumberNodes;
        v5 = *((_QWORD *)KiActualNodeCost + v4);
        if ( v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v6 = *((unsigned int *)KeNodeDistance + v4);
          if ( (unsigned int)v6 > 1 )
          {
            if ( v6 < v5 )
            {
              v9 = 100 * v5;
              v8 = 2;
              result = v9 / v6;
            }
            else
            {
              result = (unsigned int)(100 * v6) / v5;
              v8 = 3;
            }
            *a1 = v8;
            return result;
          }
        }
        ++v3;
      }
      while ( v3 < (unsigned __int16)KeNumberNodes );
      if ( ++v1 < (unsigned int)(unsigned __int16)KeNumberNodes )
        continue;
      break;
    }
  }
  *a1 = 1;
  return 0LL;
}
