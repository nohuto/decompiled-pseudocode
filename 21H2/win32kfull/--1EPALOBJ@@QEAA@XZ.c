/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C016CBE0
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C02B7D9C (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02B86F0 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    DEC_SHARE_REF_CNT(v2, a2);
}
