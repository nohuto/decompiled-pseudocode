unsigned __int64 __fastcall SmEtwEnabled(int a1)
{
  _DWORD v2[4]; // [rsp+0h] [rbp-28h]

  v2[1] = 0;
  v2[0] = 16;
  v2[2] = 64;
  v2[3] = 128;
  return (unsigned __int64)&qword_140C6AFA0 & -(__int64)((dword_140C6AFAC & v2[a1]) != 0);
}
