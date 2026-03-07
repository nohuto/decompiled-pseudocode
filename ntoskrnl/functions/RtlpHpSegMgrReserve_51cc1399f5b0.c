__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, unsigned int a2, unsigned __int64 *a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rbx
  unsigned __int64 v10; // rdi
  _DWORD *v11; // rax
  unsigned __int64 v12; // rax
  int v13; // ebx
  bool v15; // cf
  __int64 v16; // rcx
  unsigned __int64 v17[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v6 = -*(_DWORD *)a1;
  v7 = v6;
  v17[0] = v6;
  v19 = RtlpHpSegMgrVaCtxAlloc(a1, v6, a2);
  v10 = v19;
  if ( v19 )
  {
LABEL_2:
    v11 = a5;
    *a4 = v6;
    *a3 = v10;
    *v11 = v7;
    v12 = 0LL;
    v19 = 0LL;
    v13 = 0;
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v6 < 0x200000 )
      v7 = 0x200000LL;
    v17[0] = v7;
  }
  v15 = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 20LL) & 0x40000000) != 0;
  v18 = *(_OWORD *)(a1 + 40);
  v13 = RtlpHpAllocVA((unsigned int)&v19, (unsigned int)v17, v7, 0x2000, v15 ? 64 : 4, (__int64)&v18);
  if ( v13 >= 0 )
  {
    LODWORD(v7) = v17[0];
    v10 = v19;
    if ( v6 < v17[0] )
      RtlpHpSegMgrVaCtxInitialize(v16, v19, v6, LODWORD(v17[0]));
    goto LABEL_2;
  }
  v12 = v19;
LABEL_3:
  if ( v12 )
  {
    v18 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA((unsigned __int64 *)&v19, v17, 0x8000, &v18);
  }
  return (unsigned int)v13;
}
