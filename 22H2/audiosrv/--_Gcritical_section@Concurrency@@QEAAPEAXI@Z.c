/*
 * XREFs of ??_Gcritical_section@Concurrency@@QEAAPEAXI@Z @ 0x1800D5360
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000455C @ 0x18000455C (sub_18000455C.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

Concurrency::critical_section *__fastcall Concurrency::critical_section::`scalar deleting destructor'(
        Concurrency::critical_section *this,
        char a2)
{
  sub_18000455C(this);
  if ( (a2 & 1) != 0 )
    sub_18006A148(this);
  return this;
}
