__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C695A8;
  *((_QWORD *)&v2 + 1) = qword_140C65108;
  *(_QWORD *)&v3 = qword_140C69630;
  *((_QWORD *)&v3 + 1) = qword_140C6F568;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
