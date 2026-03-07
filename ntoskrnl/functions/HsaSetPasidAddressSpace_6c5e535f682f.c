__int64 __fastcall HsaSetPasidAddressSpace(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, char *a5)
{
  char v5; // bl
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // rdx
  ULONG_PTR *v9; // rax

  v5 = 1;
  v6 = a3 & 0x1FF;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * ((unsigned __int64)a3 >> 9) + 4096);
  v8 = a4 & 0xFFFFFFFFFF000LL;
  if ( a4 )
    v8 = a4 & 0xFFFFFFFFFF000LL | 1;
  if ( *(_QWORD *)(v7 + 8 * v6) == v8 )
    v5 = 0;
  else
    *(_QWORD *)(v7 + 8 * v6) = v8;
  if ( !a4 )
  {
    v9 = (ULONG_PTR *)HsaEnsureNoPendingFaults(a1, a3);
    if ( v9 )
      KeBugCheckEx(0x159u, 0x2000uLL, (ULONG_PTR)v9, *v9, v9[1]);
  }
  if ( a5 )
    *a5 = v5;
  return 0LL;
}
