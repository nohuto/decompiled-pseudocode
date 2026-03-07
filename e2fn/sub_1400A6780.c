char *__fastcall sub_1400A6780(char *a1, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-18h]

  *((_QWORD *)a1 + 2) = 0LL;
  *(_QWORD *)&v4 = 0LL;
  DWORD2(v4) = 0;
  *(_OWORD *)(a1 + 24) = v4;
  *((_QWORD *)a1 + 1) = &off_1400D46A0;
  *(_QWORD *)a1 = &off_1400D4FE0;
  if ( (a2 & 1) != 0 )
    ExFreePool(a1);
  return a1;
}
