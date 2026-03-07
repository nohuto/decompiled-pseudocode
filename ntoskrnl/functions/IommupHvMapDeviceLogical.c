__int64 __fastcall IommupHvMapDeviceLogical(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        ULONG_PTR a5)
{
  ULONG_PTR BugCheckParameter4; // rsi
  int v9; // ebp
  int v10; // eax
  char v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter3 + 52) )
    return 3221225485LL;
  BugCheckParameter4 = a5;
  LODWORD(v12) = *(_DWORD *)(BugCheckParameter3 + 48);
  v11 = 0;
  BYTE4(v12) = 0;
  v9 = ((__int64 (__fastcall *)(__int64 *, __int64, ULONG_PTR, __int64, _QWORD *, char))qword_140C622C8)(
         &v12,
         a2,
         a5,
         a3,
         a4,
         v11);
  if ( v9 < 0 )
  {
    v10 = ((__int64 (__fastcall *)(__int64 *, ULONG_PTR, _QWORD *))qword_140C622D0)(&v12, BugCheckParameter4, a4);
    if ( v10 < 0 )
      KeBugCheckEx(0x1D9u, 1uLL, v10, BugCheckParameter3, BugCheckParameter4);
    *a4 = 0LL;
  }
  return (unsigned int)v9;
}
