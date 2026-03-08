/*
 * XREFs of ??_GCChannelTable@@UEAAPEAXI@Z @ 0x1801CB150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CChannelTable@@UEAA@XZ @ 0x1801CB10C (--1CChannelTable@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CChannelTable::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CChannelTable::~CChannelTable(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
