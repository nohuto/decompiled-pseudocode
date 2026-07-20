/*
 * XREFs of SmpGetTime @ 0x1400171B4
 * Callers:
 *     SmpProcessFileRenames @ 0x140009054 (SmpProcessFileRenames.c)
 *     SmpLogPFROError @ 0x140017440 (SmpLogPFROError.c)
 * Callees:
 *     GetSystemTimeAndBias @ 0x14000ECF4 (GetSystemTimeAndBias.c)
 */

void __fastcall SmpGetTime(PTIME_FIELDS TimeFields)
{
  __int64 SystemTimeAndBias; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  union _LARGE_INTEGER Time; // [rsp+40h] [rbp+18h] BYREF

  SystemTimeAndBias = GetSystemTimeAndBias(&v3);
  Time.QuadPart = SystemTimeAndBias - v3;
  RtlTimeToTimeFields(&Time, TimeFields);
}
