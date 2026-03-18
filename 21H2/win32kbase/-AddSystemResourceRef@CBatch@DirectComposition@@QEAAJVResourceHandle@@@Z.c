/*
 * XREFs of ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0013D2C
 * Callers:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C000FCA4 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0014810 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 * Callees:
 *     ?Create@CSystemResourceReference@CBatch@DirectComposition@@SAJVResourceHandle@@PEAVCApplicationChannel@3@PEAPEAV123@@Z @ 0x1C0013D70 (-Create@CSystemResourceReference@CBatch@DirectComposition@@SAJVResourceHandle@@PEAVCApplicationC.c)
 */

__int64 __fastcall DirectComposition::CBatch::AddSystemResourceRef(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v4; // r8
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  result = DirectComposition::CBatch::CSystemResourceReference::Create(a2, *(_QWORD *)(a1 + 8), &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *v5 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v4;
  }
  return result;
}
