__int64 __fastcall KeAddProcessorGroupAffinity(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = *a1;
  _bittestandset64(&result, KiProcessorIndexToNumberMappingTable[a2] & 0x3F);
  *a1 = result;
  return result;
}
