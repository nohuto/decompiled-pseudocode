__int64 __fastcall EtwpCovSampEnumerateDriver(__int64 a1)
{
  __int64 v1; // rax
  _QWORD v3[4]; // [rsp+28h] [rbp-40h] BYREF
  __int128 v4; // [rsp+48h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 48);
  v3[2] = 0LL;
  v4 = 0LL;
  v3[0] = 1280LL;
  v3[1] = v1;
  v3[3] = *(unsigned int *)(a1 + 64);
  EtwpCovSampImageNotify((PUNICODE_STRING)(a1 + 72), 0LL, (char *)v3);
  return 0LL;
}
