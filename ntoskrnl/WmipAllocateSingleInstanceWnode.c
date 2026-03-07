__int64 __fastcall WmipAllocateSingleInstanceWnode(
        int a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        int *a5,
        _DWORD *a6,
        __int64 *a7)
{
  unsigned int v8; // esi
  unsigned __int16 *v9; // r11
  int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  int v13; // ebx
  int v14; // ebp
  __int64 Pool2; // rcx
  int *v16; // rax
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v18 = a1;
  v8 = -1073741670;
  if ( WmipAlign(2, &v18) )
  {
    v10 = v18;
    v11 = *v9 + 2;
    if ( v11 <= ~v18 )
    {
      v18 += v11;
      if ( WmipAlign(8, &v18) )
      {
        v13 = v18;
        if ( v12 <= ~v18 )
        {
          v14 = v12 + v18;
          Pool2 = ExAllocatePool2(64LL, v12 + v18, 1885957463LL);
          if ( Pool2 )
          {
            v16 = a5;
            v8 = 0;
            *a4 = v10;
            *v16 = v13;
            *a6 = v14;
            *a7 = Pool2;
          }
        }
      }
    }
  }
  return v8;
}
