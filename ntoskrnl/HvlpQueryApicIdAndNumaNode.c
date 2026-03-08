/*
 * XREFs of HvlpQueryApicIdAndNumaNode @ 0x14053EF38
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     HvlpSelectLpSet @ 0x14053F128 (HvlpSelectLpSet.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvlpQueryApicIdAndNumaNode(__int64 a1, _DWORD *a2, _WORD *a3)
{
  __int64 (__fastcall *v3)(); // rax
  _WORD *v4; // rbx
  __int64 result; // rax

  *a2 = -1;
  v3 = (__int64 (__fastcall *)())HvlpQueryProcessorNode;
  *a3 = -1;
  v4 = a3;
  if ( !v3 )
  {
    v3 = off_140C01BD8[0];
    a3 = 0LL;
  }
  result = ((__int64 (__fastcall *)(__int64, _DWORD *, _WORD *))v3)(a1, a2, a3);
  if ( *v4 == 0xFFFF )
    *v4 = 0;
  return result;
}
