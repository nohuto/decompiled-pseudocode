/*
 * XREFs of ??1?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAA@XZ @ 0x140047D48
 * Callers:
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$0 @ 0x14002D060 (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::~unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>(
        PROPVARIANT *pvar)
{
  return PropVariantClear(pvar);
}
