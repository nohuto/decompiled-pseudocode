__int64 __fastcall KseHookMmMapIoSpace(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = __readcr3();
  if ( ((a1 ^ v1) & 0xFFFFFFFFFFFFF000uLL) == 0 && (a1 & 3) != 0 )
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
  return ((__int64 (__fastcall *)(__int64))qword_140C07048)(a1);
}
