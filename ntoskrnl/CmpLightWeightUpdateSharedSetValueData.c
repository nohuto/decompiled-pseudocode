/*
 * XREFs of CmpLightWeightUpdateSharedSetValueData @ 0x140A27348
 * Callers:
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140A264CC (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140A26E00 (CmpLightWeightPrepareSetValueKeyUoW.c)
 * Callees:
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLightWeightUpdateSharedSetValueData(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 result; // rax
  _DWORD *v5; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = a2 + 208;
  v3 = 32LL;
  while ( 1 )
  {
    result = CmListGetNextElement(v2, &v6, v3);
    if ( !result )
      break;
    if ( *(_DWORD *)(result + 68) == 4 || (unsigned int)(*(_DWORD *)(result + 68) - 5) <= 1 )
    {
      *(_QWORD *)(result + 104) = v5;
      ++*v5;
    }
  }
  return result;
}
