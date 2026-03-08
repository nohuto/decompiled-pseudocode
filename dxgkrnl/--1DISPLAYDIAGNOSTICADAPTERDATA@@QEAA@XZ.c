/*
 * XREFs of ??1DISPLAYDIAGNOSTICADAPTERDATA@@QEAA@XZ @ 0x1C0049740
 * Callers:
 *     <none>
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001F224 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall DISPLAYDIAGNOSTICADAPTERDATA::~DISPLAYDIAGNOSTICADAPTERDATA(DISPLAYDIAGNOSTICADAPTERDATA *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 435);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  `vector destructor iterator'(
    (char *)this + 64,
    224LL,
    4LL,
    (void (__fastcall *)(char *))VIDPNSOURCEINFO::~VIDPNSOURCEINFO);
}
