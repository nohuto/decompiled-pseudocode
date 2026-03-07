__int64 __fastcall RtlLookupFunctionEntryEx(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax

  *a1 ^= a2;
  a1[1] ^= a2;
  v2 = ((__int64 (*)(void))((char *)a1 + *((unsigned int *)a1 - 518) - 4096))();
  return (*(__int64 (__fastcall **)(__int64, __int64))(v2 + 272))(v2 + 1944, 1LL);
}
