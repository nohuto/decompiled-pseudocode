/*
 * XREFs of ?KeyDown@SwitchItemThumbnailElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804258D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?Close@SwitchItemThumbnailElement@@IEAAXXZ @ 0x18042526C (-Close@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

char __fastcall SwitchItemThumbnailElement::KeyDown(SwitchItemThumbnailElement *a1, int a2, int a3)
{
  char result; // al

  result = 0;
  if ( a2 == 13 || a2 == 32 )
    return (*(__int64 (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)a1 + 312LL))(a1);
  if ( a2 == 46 || (a2 == 87 || a2 == 115) && a3 == 2 )
  {
    SwitchItemThumbnailElement::Close(a1);
    return 1;
  }
  return result;
}
