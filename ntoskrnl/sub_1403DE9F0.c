__int64 __fastcall sub_1403DE9F0(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64); // rdi

  v1 = a1[2];
  v2 = a1[1] ^ v1;
  v3 = (__int64 (__fastcall *)(__int64))(a1[3] ^ v1);
  if ( (*(_DWORD *)(v2 + 2452) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  return v3(v2);
}
