__int64 WheapResetPolicyDefaults()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v1 = &qword_140A77428;
  do
  {
    v3 = *(_DWORD *)v1;
    WheapSetPolicyValue(v0++, &v3);
    v1 += 4;
  }
  while ( v0 < 0x14 );
  return WheapCommitPolicy();
}
