bool __fastcall DXGADAPTER::IsAdapterSessionized(
        DXGADAPTER *this,
        struct _LUID *a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  int v4; // edx
  bool v5; // r10
  unsigned __int64 v6; // rax

  v4 = *((_DWORD *)this + 1159) | *((_DWORD *)this + 1160);
  v5 = *(_QWORD *)((char *)this + 4636) != 0LL;
  if ( a3 )
    *a3 = *((_DWORD *)this + 1161);
  if ( a4 )
  {
    if ( v4 )
      v6 = *((unsigned int *)this + 1161);
    else
      v6 = 0x200000000LL;
    *a4 = v6;
  }
  return v5;
}
