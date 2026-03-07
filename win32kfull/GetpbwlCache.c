struct tagBWL **__fastcall GetpbwlCache(_QWORD *a1)
{
  struct tagBWL **result; // rax

  result = &pbwlCache;
  *a1 = &pbwlCache;
  return result;
}
