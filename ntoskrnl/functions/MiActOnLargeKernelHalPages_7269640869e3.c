__int64 __fastcall MiActOnLargeKernelHalPages(__int64 a1, __int64 (__fastcall *a2)(unsigned __int64, __int64))
{
  __int64 v4; // rbp
  __int64 *v5; // rbx
  int v6; // r8d
  unsigned __int64 v7; // r9
  int v8; // ecx
  int v9; // esi
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdi
  unsigned int v12; // r15d
  unsigned __int64 v13; // r14
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  __int64 v16; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+34h] [rbp-54h]
  int v19; // [rsp+44h] [rbp-44h]

  v4 = RtlImageNtHeader(a1);
  v5 = &v15;
  v6 = 0x40000000;
  v16 = 0LL;
  v7 = a1;
  v15 = 0LL;
  v8 = *(_DWORD *)(v4 + 84);
  v9 = *(unsigned __int16 *)(v4 + 6) + 1;
  v19 = 0x40000000;
  v18 = 0LL;
  LODWORD(v16) = v8;
  v17 = v8;
  do
  {
    v10 = *((_DWORD *)v5 + 4);
    v11 = a1 + *((unsigned int *)v5 + 3);
    if ( v10 < *((_DWORD *)v5 + 2) )
      v10 = *((_DWORD *)v5 + 2);
    v12 = *((_DWORD *)v5 + 9) & 0xE0000000;
    v13 = ((v10 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) + 0x1FFFFF;
    if ( v12 != v6 )
    {
      if ( v7 < v11 )
      {
        result = a2(v7, a1 + *((unsigned int *)v5 + 3));
        if ( (int)result < 0 )
          return result;
      }
      v6 = v12;
      v7 = v11;
    }
    if ( v5 == &v15 )
      v5 = (__int64 *)(*(unsigned __int16 *)(v4 + 20) + v4 + 24);
    else
      v5 += 5;
    --v9;
  }
  while ( v9 );
  return a2(v7, (v13 + v11) & 0xFFFFFFFFFFE00000uLL);
}
