/*
 * XREFs of ??1MOCKDRIVERSTATE@@QEAA@XZ @ 0x1C003E6F8
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C02B0AE4 (--1DXGADAPTER@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MOCKDRIVERSTATE::~MOCKDRIVERSTATE(MOCKDRIVERSTATE *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(void **)this;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
