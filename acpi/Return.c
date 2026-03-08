/*
 * XREFs of Return @ 0x1C0055B50
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 */

__int64 __fastcall Return(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = DupObjData(*(_QWORD *)(a1 + 320), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  if ( !(_DWORD)result )
    return 32770LL;
  return result;
}
