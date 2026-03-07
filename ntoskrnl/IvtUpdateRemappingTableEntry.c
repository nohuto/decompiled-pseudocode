char __fastcall IvtUpdateRemappingTableEntry(__int64 a1, char a2, unsigned int a3, _DWORD *a4)
{
  __int64 v5; // rbx
  int *v6; // r8
  ULONG_PTR *v7; // rbx
  int v8; // edx
  char v9; // di
  ULONG_PTR v10; // rax
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR v15; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR v17; // [rsp+48h] [rbp-18h]

  v5 = 16LL * a3;
  v6 = a4 + 3;
  v7 = (ULONG_PTR *)(*(_QWORD *)(a1 + 288) + v5);
  if ( (*v7 & 1) == 0 && (*v6 & 0x10) == 0 )
    return 0;
  v8 = *v6;
  v9 = 0;
  BugCheckParameter3 = 0LL;
  v15 = 0LL;
  if ( (v8 & 0x10) != 0 )
  {
    switch ( a4[5] )
    {
      case 1:
        v10 = BugCheckParameter3;
        if ( (v8 & 2) != 0 )
        {
          BugCheckParameter3 = BugCheckParameter3 & 0xFFFFFFFFFFFFFF1FuLL | 0x20;
          v11 = v10 & 0xFFFFFFFFFFFFFF17uLL | 0x28;
        }
        else
        {
          v11 = BugCheckParameter3;
        }
        break;
      case 2:
        v11 = BugCheckParameter3 & 0xFFFFFFFFFFFFFF1FuLL | 0x80;
        break;
      case 3:
        v11 = BugCheckParameter3 & 0xFFFFFFFFFFFFFF1FuLL | 0x40;
        break;
      default:
        return 0;
    }
    BugCheckParameter3 = v11;
    if ( (*v6 & 0x10) != 0 )
      BugCheckParameter3 |= 1uLL;
    if ( a4[2] == 1 )
      v12 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v12 = BugCheckParameter3 | 0x10;
    BugCheckParameter3 = v12;
    BugCheckParameter3 = ((unsigned __int64)(unsigned __int8)a4[12] << 16) | v12 & 0xFFFFFFFFFF00FFFFuLL;
    if ( a2 )
      BugCheckParameter3 |= 0x100uLL;
    IvtUpdateInterruptDestination((ULONG_PTR)&BugCheckParameter3, (ULONG_PTR)(a4 + 6));
  }
  if ( (*v7 & 1) != 0 && (BugCheckParameter3 & 1) != 0 )
  {
    BugCheckParameter4 = BugCheckParameter3 ^ *v7;
    v17 = v15 ^ v7[1];
    BugCheckParameter4 = (unsigned int)BugCheckParameter4;
    if ( (_DWORD)BugCheckParameter4 || v17 )
      KeBugCheckEx(0x5Cu, 0x7000uLL, 0x20uLL, (ULONG_PTR)v7, (ULONG_PTR)&BugCheckParameter4);
  }
  if ( *v7 != BugCheckParameter3 || v7[1] != v15 )
  {
    v9 = 1;
    v7[1] = v15;
    *v7 = BugCheckParameter3;
  }
  return v9;
}
