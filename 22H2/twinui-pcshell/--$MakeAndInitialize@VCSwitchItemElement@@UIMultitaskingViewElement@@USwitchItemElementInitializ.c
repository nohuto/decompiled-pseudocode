/*
 * XREFs of ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x180404830
 * Callers:
 *     ?CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804050E0 (-CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactor.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0CSwitchItemElement@@QEAA@XZ @ 0x180404B20 (--0CSwitchItemElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1804107C4 (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemElement,IMultitaskingViewElement,CSwitchItemElement::SwitchItemElementInitializeArgs>(
        _QWORD *a1,
        const struct CSwitchItemElement::SwitchItemElementInitializeArgs *a2)
{
  CSwitchItemElement *v4; // rax
  int v5; // edi
  CSwitchItemElement *v6; // rbx

  *a1 = 0LL;
  v4 = (CSwitchItemElement *)operator new(0x2A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CSwitchItemElement::CSwitchItemElement(v4);
    v5 = CSwitchItemElement::RuntimeClassInitialize(v6, a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CSwitchItemElement *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
