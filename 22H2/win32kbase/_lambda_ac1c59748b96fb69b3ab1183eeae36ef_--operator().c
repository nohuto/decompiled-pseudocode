/*
 * XREFs of _lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator() @ 0x1C01F3958
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36ef___ @ 0x1C01F37A4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ac1c59748b96fb69b3ab1183eeae36e.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_ac1c59748b96fb69b3ab1183eeae36ef_::operator()(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 269;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(*a1 + 24);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(*a1 + 184);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(*a1 + 176);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(*a1 + 180);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(*a1 + 192);
  result = *a1;
  *(_BYTE *)(a2 + 32) = (*(_DWORD *)(*a1 + 16) & 0x20000) == 0;
  return result;
}
