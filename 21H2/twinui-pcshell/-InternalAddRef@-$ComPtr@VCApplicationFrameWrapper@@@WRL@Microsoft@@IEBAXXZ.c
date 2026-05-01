/*
 * XREFs of ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E5364
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18000E0C0 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

void __fastcall Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rdx
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(_QWORD *)(v1 + 64);
    while ( v2 >= 0 )
    {
      if ( (_DWORD)v2 != 0x7FFFFFFF )
      {
        v3 = v2;
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 64), v2 + 1, v2);
        if ( v3 != v2 )
          continue;
      }
      return;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
      (Microsoft::WRL::Details *)(2 * v2 + 16),
      (volatile int *)v1);
  }
}
