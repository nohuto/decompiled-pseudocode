__int64 __fastcall DrvGetWDDMAdapterInfo(__int64 a1, int a2, struct _LUID *a3, _DWORD *a4)
{
  __int64 v4; // r10
  struct _LUID *v8; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  v10 = a1;
  if ( a1
    && (a2 || (*(_DWORD *)(a1 + 40) & 0x400) == 0)
    && (*(_DWORD *)(a1 + 40) & 0x20000) == 0
    && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10)
    && *(_QWORD *)(a1 + 2552) != v4 )
  {
    v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v10);
    LODWORD(v4) = 1;
    *a3 = *v8;
    *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 2552) + 248LL);
  }
  return (unsigned int)v4;
}
