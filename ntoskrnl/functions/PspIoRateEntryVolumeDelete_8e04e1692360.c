_QWORD *__fastcall PspIoRateEntryVolumeDelete(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a2 + 8);
  if ( *result != a2 )
    __fastfail(3u);
  *a1 = a2;
  a1[1] = result;
  *result = a1;
  *(_QWORD *)(a2 + 8) = a1;
  a1[2] = -1LL;
  return result;
}
