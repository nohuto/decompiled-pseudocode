__int64 __fastcall IommupHvMapDeviceLogicalRange(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG_PTR a5)
{
  int v5; // eax
  ULONG_PTR BugCheckParameter4; // rbx
  int v8; // edi
  int v9; // eax
  char v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]
  unsigned __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v5 = *(_DWORD *)(BugCheckParameter3 + 48);
  v13 = 0;
  BugCheckParameter4 = a5;
  v12 = v5;
  v14 = (unsigned __int64)(a4 + 4095) >> 12;
  v15 = a3 >> 12;
  v11 = 1;
  v8 = ((__int64 (__fastcall *)(int *, __int64, ULONG_PTR, unsigned __int64 *, unsigned __int64 *, char))qword_140C622C8)(
         &v12,
         a2,
         a5,
         &v15,
         &v14,
         v11);
  if ( v8 < 0 )
  {
    v9 = ((__int64 (__fastcall *)(int *, ULONG_PTR, unsigned __int64 *))qword_140C622D0)(&v12, BugCheckParameter4, &v14);
    if ( v9 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v9, BugCheckParameter3, BugCheckParameter4);
  }
  return (unsigned int)v8;
}
