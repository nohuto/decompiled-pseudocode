__int64 __fastcall RtlEnumRvaListFirst(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  *a2 = **(_DWORD **)(a1 + 16);
  a2[2] = 4;
  if ( a3 )
    *a3 = RtlGetRvaListIteratorState();
  return *a2;
}
