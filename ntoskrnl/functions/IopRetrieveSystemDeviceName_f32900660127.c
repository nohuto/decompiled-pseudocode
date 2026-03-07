__int64 __fastcall IopRetrieveSystemDeviceName(
        __int64 (__fastcall *a1)(unsigned __int64, _QWORD, _DWORD *),
        unsigned __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  _DWORD v15[14]; // [rsp+20h] [rbp-38h] BYREF

  v7 = 0;
  v15[0] = 0;
  if ( a2 && a3 > 0x10 )
  {
    if ( KeGetCurrentThread()->PreviousMode )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v8 = a2;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      *(_BYTE *)(v8 + 15) = *(_BYTE *)(v8 + 15);
    }
    v9 = a3 - 16;
    v10 = a2 + 16;
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
  }
  if ( v9 > 0xFFFF )
    v9 = 0xFFFF;
  v11 = a1(v10, v9, v15);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( v11 == -1073741789 )
    {
      *a4 = v15[0] + 16;
      return v12;
    }
  }
  else
  {
    v13 = v15[0];
    *(_WORD *)a2 = LOWORD(v15[0]) - 2;
    *(_WORD *)(a2 + 2) = v9;
    *(_QWORD *)(a2 + 8) = v10;
    v7 = v13 + 16;
  }
  *a4 = v7;
  return v12;
}
