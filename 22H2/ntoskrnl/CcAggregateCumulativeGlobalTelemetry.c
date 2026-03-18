/*
 * XREFs of CcAggregateCumulativeGlobalTelemetry @ 0x14088115C
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1403D0A70 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 CcAggregateCumulativeGlobalTelemetry()
{
  __int64 result; // rax

  qword_140C5F9F0 += qword_140C5F970;
  qword_140C5F9F8 += qword_140C5F978;
  qword_140C5FA00 += qword_140C5F980;
  qword_140C5FA08 += qword_140C5F988;
  qword_140C5FA10 += qword_140C5F990;
  qword_140C5FA18 += qword_140C5F998;
  qword_140C5FA20 += qword_140C5F9A0;
  qword_140C5FA28 += qword_140C5F9A8;
  qword_140C5FA30 += qword_140C5F9B0;
  qword_140C5FA38 += qword_140C5F9B8;
  qword_140C5FA40 += qword_140C5F9C0;
  qword_140C5FA48 += qword_140C5F9C8;
  qword_140C5FA50 += qword_140C5F9D0;
  qword_140C5FA58 += qword_140C5F9D8;
  qword_140C5FA60 += qword_140C5F9E0;
  result = qword_140C5F9E8;
  qword_140C5FA68 += qword_140C5F9E8;
  return result;
}
