/*
 * XREFs of ?bConvertDwordToFloat@@YAHKPEAM@Z @ 0x1C0002400
 * Callers:
 *     ?ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z @ 0x1C0002340 (-ProbeAndConvertXFORM@@YAHPEAU_XFORML@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bConvertDwordToFloat(int a1, float *a2)
{
  __int64 result; // rax

  result = 1LL;
  *(_DWORD *)a2 = a1;
  return result;
}
