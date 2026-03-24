/*
 * XREFs of DxgkGetAdapterBrightnessInfo @ 0x1C0052774
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkGetAdapterBrightnessInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  void (__fastcall *v4)(_QWORD); // rax
  unsigned int v5; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_WORD *)(v2 + 4738) == 2 && (v4 = *(void (__fastcall **)(_QWORD))(v2 + 4792)) != 0LL )
    v4(*(_QWORD *)(v2 + 4744));
  else
    *a2 = 0;
  v5 = a2[1] & 0xFFFFFFFA | *(_BYTE *)(v2 + 4376) & 1 | (4 * (*(_BYTE *)(v2 + 4400) & 1));
  a2[1] = v5;
  a2[1] = v5 ^ (v5 ^ (2 * *(unsigned __int8 *)(v2 + 4360))) & 2;
  a2[2] = *(_DWORD *)(v2 + 4364);
  result = *(unsigned __int8 *)(v2 + 4368);
  a2[3] = result;
  return result;
}
