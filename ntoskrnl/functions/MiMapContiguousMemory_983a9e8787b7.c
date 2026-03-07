__int64 __fastcall MiMapContiguousMemory(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // esi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r13
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // r14
  int v14; // r15d
  __int64 *v15; // rdi
  __int64 v16; // rdi
  char v17; // cl
  unsigned int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // [rsp+30h] [rbp-61h] BYREF
  ULONG_PTR v23; // [rsp+38h] [rbp-59h]
  unsigned __int64 v24; // [rsp+40h] [rbp-51h]
  __int64 v25; // [rsp+48h] [rbp-49h]
  unsigned __int64 v26; // [rsp+50h] [rbp-41h]
  __int64 v27; // [rsp+58h] [rbp-39h]
  _QWORD v28[5]; // [rsp+60h] [rbp-31h] BYREF
  int v29; // [rsp+88h] [rbp-9h]
  int v30; // [rsp+8Ch] [rbp-5h]
  unsigned __int64 v31; // [rsp+90h] [rbp-1h]

  v5 = a4;
  v27 = a3;
  if ( a4 == -1 || a4 == 24 || (a4 & 5) == 5 || (a4 & 0xFFFFFFF8) == 0x10 || a1 + a2 <= a1 && a1 + a2 )
    return 0LL;
  v7 = a1 & 0xFFF;
  v25 = v7;
  v24 = (unsigned __int64)(v7 + a2 + 4095) >> 12;
  v8 = a1 >> 12;
  v9 = (unsigned __int64)(v7 + a3 + 4095) >> 12;
  v26 = a1 >> 12;
  v10 = MiSanitizePage(a1 >> 12, a2, a3, a2);
  v23 = v10;
  if ( (v5 & 2) != 0 && (MiFlags & 0x8000) != 0 )
    v5 &= ~2u;
  LODWORD(v22) = 0;
  if ( (a1 & 0x1FFFFF) != 0
    || v11 < 0x200000
    || (v14 = a5 & 1, (a5 & 1) != 0)
    || v9 != v12
    || (v16 = MiMapContiguousMemoryLarge(v10, (__int64)&v22)) == 0 )
  {
    v13 = v9 + 1;
    v14 = a5 & 1;
    if ( (a5 & 1) == 0 )
      v13 = v9;
    if ( v13 > 0xFFFFFFFF )
      return 0LL;
    v15 = (__int64 *)MiReservePtes(&qword_140C695C0, (unsigned int)v13);
    if ( !v15 )
      return 0LL;
    if ( (int)MiFillSystemPtes((_DWORD)v15, v24, v23, v5, (a5 >> 1) & 1, (__int64)&v22) < 0 )
    {
      MiReleasePtes((__int64)&qword_140C695C0, v15, v13);
      return 0LL;
    }
    v8 = v26;
    v16 = v25 + ((__int64)((_QWORD)v15 << 25) >> 16);
  }
  v17 = v22;
  if ( (v22 & 1) != 0 )
  {
    MiMappingHasIoReferences(v16);
    v17 = v22;
  }
  if ( (dword_140D1D1CC & 1) != 0 )
  {
    v28[0] = 0LL;
    v19 = v17 & 1;
    v28[1] = 0LL;
    v29 = 0;
    v28[4] = a1 & 0xFFFFFFFFFFFFF000uLL;
    v28[2] = v27;
    v20 = v19 | 2;
    v28[3] = v16;
    v31 = v8;
    v30 = a1 & 0xFFF;
    if ( !v14 )
      v20 = v19;
    v21 = 1LL;
    if ( v5 >> 3 == 1 )
    {
      v21 = 0LL;
    }
    else if ( v5 >> 3 == 3 && (v5 & 7) != 0 )
    {
      v21 = 2LL;
    }
    MiInsertPteTracker(v28, 1LL, v20, v21);
  }
  return v16;
}
