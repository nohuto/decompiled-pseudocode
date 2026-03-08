/*
 * XREFs of RtlpRemoveArchDisallowedXStateFeatures @ 0x1403D1FAC
 * Callers:
 *     RtlGetExtendedContextLength2 @ 0x140364DF0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x140364EE0 (RtlInitializeExtendedContext2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpRemoveArchDisallowedXStateFeatures(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (a1 & 0x10040) == 0x10040 )
  {
    result = 0x40000000000009FFLL;
LABEL_3:
    *a2 &= result;
    return result;
  }
  result = 1048640LL;
  if ( (a1 & 0x100040) == 0x100040 )
  {
    result = 0x4000000000060DFFLL;
    goto LABEL_3;
  }
  return result;
}
