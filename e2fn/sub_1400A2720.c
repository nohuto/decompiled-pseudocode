_DWORD *__fastcall sub_1400A2720(_DWORD *a1, char a2)
{
  a1[2] = 0;
  a1[3] = 0;
  *(_QWORD *)a1 = &off_1400D44A0;
  if ( (a2 & 1) != 0 )
    ExFreePool(a1);
  return a1;
}
