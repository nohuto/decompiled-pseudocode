char __fastcall WheaIsAltContextAllocPossible(__int64 a1, char a2, _DWORD *a3)
{
  char v5; // bl
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  int v9; // [rsp+48h] [rbp+10h] BYREF
  struct _KPRCB *v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v9 = 0;
  v5 = 1;
  *a3 = 0;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 384);
    v7 = (v6 & 0xFFFFFFFFFFFFFFF0uLL) - 416;
    KeQueryCurrentStackInformationEx(v6, (char *)&v9, &v10, &v11);
    if ( (*(_DWORD *)(a1 + 376) & 0x200) == 0 )
    {
      *a3 = 12;
      return 0;
    }
    if ( *(_BYTE *)(a1 + 41) == 15 )
    {
      *a3 = 10;
      return 0;
    }
    if ( v9 == 5 )
    {
      *a3 = 13;
      return 0;
    }
    if ( v7 < (unsigned __int64)v10 || v7 >= v11 )
    {
      *a3 = 14;
      return 0;
    }
  }
  return v5;
}
