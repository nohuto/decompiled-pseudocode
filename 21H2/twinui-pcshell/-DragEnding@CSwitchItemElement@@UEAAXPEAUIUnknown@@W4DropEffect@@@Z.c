/*
 * XREFs of ?DragEnding@CSwitchItemElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804105E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1804121F0 (-DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z.c)
 */

__int64 __fastcall CSwitchItemElement::DragEnding(__int64 a1, struct IUnknown *a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = CMultitaskingViewElementBase::DragEnding();
  if ( *(_BYTE *)(a1 + 672) && !a3 )
  {
    result = SHIsSameObject(*(struct IUnknown **)(a1 + 584), a2);
    if ( (_DWORD)result )
    {
      v8 = *(_QWORD *)(a1 + 88);
      *(_BYTE *)(a1 + 672) = 0;
      return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, v7, 3LL, 0LL);
    }
  }
  return result;
}
