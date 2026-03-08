/*
 * XREFs of KiEnumerateNextProcessorNumber @ 0x1402AA0A0
 * Callers:
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
 *     PoExecuteIdleCheck @ 0x1403C65A0 (PoExecuteIdleCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnumerateNextProcessorNumber(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v3; // r9d
  unsigned __int64 i; // r8
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int16 v7; // ax

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  for ( i = (unsigned __int64)a2[1]; ; a2[1] = (unsigned __int16 *)i )
  {
    if ( i )
    {
      _BitScanForward64(&v5, i);
      *(_BYTE *)(a1 + 2) = v5;
      *(_WORD *)a1 = *((_WORD *)a2 + 8);
      result = 0LL;
      a2[1] = (unsigned __int16 *)(i & ~(1LL << v5));
      return result;
    }
    v7 = *((_WORD *)a2 + 8) + 1;
    *((_WORD *)a2 + 8) = v7;
    if ( v7 >= v3 )
      break;
    i = *(_QWORD *)&(*a2)[4 * v7 + 4];
  }
  return 3221226021LL;
}
