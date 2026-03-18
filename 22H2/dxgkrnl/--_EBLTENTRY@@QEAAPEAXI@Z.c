/*
 * XREFs of ??_EBLTENTRY@@QEAAPEAXI@Z @ 0x1C006DE08
 * Callers:
 *     ??1?$CCachedData@VBLTENTRY@@$02@@QEAA@XZ @ 0x1C006DD80 (--1-$CCachedData@VBLTENTRY@@$02@@QEAA@XZ.c)
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C006DE4C (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F484 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall BLTENTRY::`vector deleting destructor'(BLTENTRY *this)
{
  char *v1; // rbx

  v1 = (char *)this - 8;
  `vector destructor iterator'(
    (char *)this,
    576LL,
    *((_QWORD *)this - 1),
    (void (__fastcall *)(char *))BLTENTRY::~BLTENTRY);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v1;
}
