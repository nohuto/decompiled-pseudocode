/*
 * XREFs of ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x180295238
 * Callers:
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18029629C (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1802963F8 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?_Buy_raw@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K@Z @ 0x18020F93C (-_Buy_raw@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
        _QWORD *a1,
        __int64 a2)
{
  _OWORD *v2; // rsi
  _OWORD *v3; // rdi
  unsigned __int64 v5; // rdx
  _OWORD *v6; // rax

  v2 = *(_OWORD **)(a2 + 8);
  v3 = *(_OWORD **)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = v2 - v3;
  a1[2] = 0LL;
  if ( v5 )
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy_raw(a1, v5);
    v6 = (_OWORD *)*a1;
    while ( v3 != v2 )
      *v6++ = *v3++;
    a1[1] = v6;
  }
  return a1;
}
