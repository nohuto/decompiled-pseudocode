/*
 * XREFs of wistd::__function::__func__lambda_8cfddf842dd701e76edd4d414fa3e64b__void___cdecl(int_const_&)_::_scalar_deleting_destructor_ @ 0x180057530
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTableData@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800427C0 (-FreeTableData@-$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_G.c)
 */

struct _RTL_GENERIC_TABLE *__fastcall wistd::__function::__func__lambda_8cfddf842dd701e76edd4d414fa3e64b__void___cdecl_int_const____::_scalar_deleting_destructor_(
        struct _RTL_GENERIC_TABLE *Buffer,
        char a2)
{
  Buffer->TableRoot = (PRTL_SPLAY_LINKS)&WPF::HeapBase::`vftable';
  if ( (a2 & 1) != 0 )
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData(Buffer, Buffer);
  return Buffer;
}
