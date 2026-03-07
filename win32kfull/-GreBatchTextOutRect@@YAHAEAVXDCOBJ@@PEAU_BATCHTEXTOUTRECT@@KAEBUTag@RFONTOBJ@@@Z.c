__int64 __fastcall GreBatchTextOutRect(
        struct XDCOBJ *a1,
        struct tagRECT *a2,
        unsigned int a3,
        const struct RFONTOBJ::Tag *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // esi
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct tagRECT v13; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-40h] BYREF

  result = 0LL;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( a3 >= 0x28 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = *a2;
    *(struct tagRECT *)v14 = a2[1];
    *(_QWORD *)&v14[16] = *(_QWORD *)&a2[2].left;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    v7 = *(_DWORD *)(v6 + 176);
    v8 = *(_DWORD *)(v6 + 180);
    if ( v7 != v13.top )
    {
      *(_DWORD *)(v6 + 176) = v13.top;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = *(_DWORD *)&v14[20];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
    }
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    v10 = *(_QWORD *)(v9 + 324);
    if ( v10 != *(_QWORD *)&v14[12] )
    {
      *(_DWORD *)(v9 + 324) = *(_DWORD *)&v14[12];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = *(_DWORD *)&v14[16];
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
    }
    ExtTextOutRect(a1, (struct tagRECT *)&v13.bottom, a4);
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    if ( *(_DWORD *)(v11 + 176) != v7 )
    {
      *(_DWORD *)(v11 + 176) = v7;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
    }
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    if ( v10 != *(_QWORD *)(v12 + 324) )
    {
      *(_DWORD *)(v12 + 324) = v10;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = HIDWORD(v10);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
    }
    return 1LL;
  }
  return result;
}
