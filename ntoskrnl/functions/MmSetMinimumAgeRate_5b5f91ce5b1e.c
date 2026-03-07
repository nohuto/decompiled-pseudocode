void *__fastcall MmSetMinimumAgeRate(unsigned int a1)
{
  void *result; // rax
  void *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax

  for ( result = PsGetNextPartition(0LL); ; result = PsGetNextPartition(v3) )
  {
    v3 = result;
    if ( !result )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)result + 16920LL);
    if ( a1 )
    {
      if ( a1 < 0xC )
      {
        LOWORD(v5) = 1000;
      }
      else
      {
        v5 = 0x3E8 / (a1 / 6);
        if ( v5 <= 1 )
          LOWORD(v5) = 1;
      }
    }
    else
    {
      LOWORD(v5) = 0;
    }
    *(_WORD *)(v4 + 2348) = v5;
  }
  return result;
}
