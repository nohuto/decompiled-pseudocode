/*
 * XREFs of ?DenseOnesBitCount@MonDescParser@@YAEE@Z @ 0x1C001EBF0
 * Callers:
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C001E650 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MonDescParser::DenseOnesBitCount(MonDescParser *this)
{
  unsigned __int8 result; // al

  result = 8;
  while ( (_BYTE)this != 0xFF )
  {
    --result;
    LOBYTE(this) = ((_BYTE)this + 1) | (unsigned __int8)this;
  }
  return result;
}
