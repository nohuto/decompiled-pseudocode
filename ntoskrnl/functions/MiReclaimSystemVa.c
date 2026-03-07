LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 || (unsigned __int64)qword_140C66988 <= 0x8000000 )
    return KeSetEvent(&stru_140C66D10, 0, 0);
  return result;
}
