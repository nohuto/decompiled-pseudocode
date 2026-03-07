__int64 __fastcall CWICBitmapWrapper::CopyPixels(__int64 a1, int *a2)
{
  __int64 *v2; // rcx
  int v3; // r10d
  int v4; // r11d
  int v5; // eax
  __int64 v6; // rax
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (__int64 *)(a1 - 136);
  v3 = *a2;
  v4 = a2[1];
  v8[2] = a2[2] - *a2;
  v5 = a2[3] - v4;
  v8[0] = v3;
  v8[3] = v5;
  v6 = *v2;
  v8[1] = v4;
  return (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v6 + 24))(v2, v8);
}
