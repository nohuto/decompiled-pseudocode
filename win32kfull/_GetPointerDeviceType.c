__int64 __fastcall GetPointerDeviceType(int a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // edx

  v1 = HMValidateHandleNoSecure(a1, 19);
  v4 = -1;
  if ( v1 && (*(_DWORD *)(v1 + 200) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v1 + 472), 0xFFFFFFFFLL, v2, v3);
  return v4;
}
