/*
 * XREFs of ?WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18003F510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawVisualTreeInstruction::WriteInstruction(
        CDrawVisualTreeInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 v5; // rax

  v3 = *((_QWORD *)this + 2);
  v4 = 0;
  v5 = *(_QWORD *)(v3 + 16);
  if ( v5 )
    v4 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 24LL);
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, v4);
}
