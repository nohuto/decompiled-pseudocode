unsigned __int16 **__fastcall GetglpSetupPrograms(_QWORD *a1)
{
  unsigned __int16 **result; // rax

  result = &glpSetupPrograms;
  *a1 = &glpSetupPrograms;
  return result;
}
