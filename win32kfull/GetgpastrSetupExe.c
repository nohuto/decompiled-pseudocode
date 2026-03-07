struct _UNICODE_STRING **__fastcall GetgpastrSetupExe(_QWORD *a1)
{
  struct _UNICODE_STRING **result; // rax

  result = &gpastrSetupExe;
  *a1 = &gpastrSetupExe;
  return result;
}
