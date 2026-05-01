/*
 * XREFs of ?v_OnClick@SwitchItemThumbnailElement@@MEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180426690
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804255FC (-Close@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

char __fastcall SwitchItemThumbnailElement::v_OnClick(SwitchItemThumbnailElement *a1, int a2)
{
  if ( a2 == 1 )
    return (*(__int64 (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)a1 + 312LL))(a1);
  if ( a2 != 3 )
    return 0;
  SwitchItemThumbnailElement::Close(a1);
  return 1;
}
