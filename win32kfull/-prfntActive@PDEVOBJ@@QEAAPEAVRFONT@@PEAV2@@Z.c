struct RFONT *__fastcall PDEVOBJ::prfntActive(PDEVOBJ *this, struct RFONT *a2)
{
  __int64 v2; // r8
  struct RFONT *result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x800000) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 3496);
    result = *(struct RFONT **)(v4 + 1512);
    *(_QWORD *)(v4 + 1512) = a2;
  }
  else
  {
    result = *(struct RFONT **)(v2 + 1512);
    *(_QWORD *)(v2 + 1512) = a2;
  }
  return result;
}
