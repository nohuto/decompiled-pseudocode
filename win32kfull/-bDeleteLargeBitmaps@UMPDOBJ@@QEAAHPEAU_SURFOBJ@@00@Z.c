_BOOL8 __fastcall UMPDOBJ::bDeleteLargeBitmaps(
        UMPDOBJ *this,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4)
{
  _BOOL8 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  size_t Size; // [rsp+20h] [rbp-58h]
  int v9; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v10[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  PVOID pvBits; // [rsp+50h] [rbp-28h]
  PVOID v14; // [rsp+58h] [rbp-20h]
  PVOID v15; // [rsp+60h] [rbp-18h]

  v9 = 0;
  v11 = 0LL;
  if ( !a2 && !a3 && !a4 )
    return 1LL;
  v6 = *(_QWORD *)this;
  v10[0] = 48;
  v12 = v6;
  v10[1] = 119;
  if ( a2 )
    pvBits = a2->pvBits;
  else
    pvBits = 0LL;
  if ( a3 )
    v14 = a3->pvBits;
  else
    v14 = 0LL;
  if ( a4 )
    v15 = a4->pvBits;
  else
    v15 = 0LL;
  LODWORD(Size) = 4;
  result = (unsigned int)UMPDOBJ::Thunk(this, v10, 0x30u, &v9, Size) != -1 && v9;
  v7 = *((_QWORD *)this + 49);
  if ( v7 )
    *(_DWORD *)(v7 + 48) = 0;
  return result;
}
