__int64 __fastcall MiSnapDriverRange(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r11
  unsigned int v14; // r9d
  unsigned __int64 v15; // r14
  __int64 v16; // r8
  unsigned __int64 PteAddress; // rbp
  unsigned __int64 v18; // r13
  __int64 *v19; // rdi
  unsigned int v20; // r8d
  unsigned int v21; // ebx
  int v22; // eax
  bool v23; // cf
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // r11
  __int16 v27; // dx
  __int64 v28; // rax
  bool v29; // zf
  unsigned __int64 v30; // rax
  unsigned __int64 v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-B8h]
  unsigned int v34; // [rsp+24h] [rbp-B4h]
  unsigned __int64 v35; // [rsp+28h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-80h]
  __int64 v39; // [rsp+60h] [rbp-78h]
  __int64 v40; // [rsp+68h] [rbp-70h]
  __int64 v41; // [rsp+70h] [rbp-68h] BYREF
  int v42; // [rsp+78h] [rbp-60h]
  __int128 v43; // [rsp+7Ch] [rbp-5Ch]
  __int64 v44; // [rsp+8Ch] [rbp-4Ch]
  int v45; // [rsp+94h] [rbp-44h]

  v6 = 0;
  v41 = 0LL;
  *a5 = 0LL;
  v43 = 0LL;
  *a6 = 0LL;
  v10 = *(_QWORD *)(a1 + 48);
  v44 = 0LL;
  v38 = v10;
  v11 = RtlImageNtHeader(v10);
  v39 = v11;
  v12 = a4 - v10;
  v13 = *(unsigned int *)(v11 + 56);
  v14 = *(unsigned __int16 *)(v11 + 6);
  v15 = (unsigned int)v13;
  v35 = a4 - v10;
  if ( v13 > 0x1000 )
    v15 = 4096LL;
  v34 = *(unsigned __int16 *)(v11 + 6);
  if ( a2 > v14 )
    return 0LL;
  v16 = *(unsigned __int16 *)(v11 + 20);
  v40 = v16;
  PteAddress = 0LL;
  v45 = 0x40000000;
  v18 = 0LL;
  DWORD1(v43) = v16 + 40 * v14 + v11 + 24 - v10;
  v42 = DWORD1(v43);
  while ( 1 )
  {
    if ( a2 )
      v19 = (__int64 *)(v16 + 40LL * (a2 - 1) + v11 + 24);
    else
      v19 = &v41;
    v20 = *((_DWORD *)v19 + 4);
    if ( v20 < *((_DWORD *)v19 + 2) )
      v20 = *((_DWORD *)v19 + 2);
    v33 = v20;
    if ( !a4 )
      break;
    v32 = *((unsigned int *)v19 + 3);
    if ( v12 < v32 || v12 >= v20 + (unsigned int)v32 )
      goto LABEL_19;
    if ( (a3 & 0x40) != 0 && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
      return 0LL;
LABEL_25:
    if ( !PteAddress )
      PteAddress = MiGetPteAddress((v10 + *((unsigned int *)v19 + 3) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
    v25 = MiGetPteAddress(-(__int64)v15 & (v10 + v15 + v20 + *((_DWORD *)v19 + 3) - 1LL));
    v18 = v25;
    if ( (v27 & 0xFFF) == 0 || (a3 & 0xC) == 0 || v15 >= 0x1000 )
      v18 = v25 - 8;
    if ( v26 > 0x1000 )
      goto LABEL_19;
LABEL_20:
    if ( ++a2 > v14 )
    {
      if ( PteAddress )
      {
        v30 = MiGetPteAddress(((-(__int64)v15 & (v10 + v15 + v20 + *((_DWORD *)v19 + 3) - 1LL)) + 4095) & 0xFFFFFFFFFFFFF000uLL)
            - 8;
        if ( PteAddress <= v30 )
        {
          *a5 = PteAddress;
          *a6 = v30;
        }
      }
      return 0LL;
    }
    v11 = v39;
    v16 = v40;
  }
  if ( (a3 & 8) != 0 )
  {
    v24 = (*((_DWORD *)v19 + 9) & 0xE0000000) != 0;
    goto LABEL_24;
  }
  if ( (a3 & 1) != 0 )
  {
    v24 = MmImageSectionPagable(v19);
    goto LABEL_23;
  }
  if ( (a3 & 4) != 0 )
  {
    v21 = *((_DWORD *)v19 + 9) & 0xE0000000;
    v22 = MmImageSectionPagable(v19);
    v23 = v21 != 0;
    v10 = v38;
    v24 = v23 && v22 == 0;
LABEL_23:
    v20 = v33;
    v14 = v34;
    v12 = v35;
    goto LABEL_24;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v24 = *((_DWORD *)v19 + 9) & 0x20000000;
LABEL_24:
    if ( !v24 )
      goto LABEL_19;
    goto LABEL_25;
  }
  if ( (a3 & 0x20) != 0 )
  {
    if ( *(_BYTE *)v19 != 80
      || *((_BYTE *)v19 + 1) != 65
      || *((_BYTE *)v19 + 2) != 71
      || *((_BYTE *)v19 + 3) != 69
      || *((_BYTE *)v19 + 4) != 75 )
    {
      goto LABEL_19;
    }
    v29 = *((_BYTE *)v19 + 5) == 68;
    goto LABEL_35;
  }
  if ( a3 < 0 )
  {
    if ( *(_BYTE *)v19 != 80
      || *((_BYTE *)v19 + 1) != 65
      || *((_BYTE *)v19 + 2) != 71
      || *((_BYTE *)v19 + 3) != 69
      || *((_BYTE *)v19 + 4) != 67
      || *((_BYTE *)v19 + 5) != 77
      || *((_BYTE *)v19 + 6) != 82 )
    {
      goto LABEL_19;
    }
    v29 = *((_BYTE *)v19 + 7) == 67;
LABEL_35:
    if ( !v29 )
      goto LABEL_19;
    goto LABEL_25;
  }
  if ( !*(_DWORD *)v19 && v19 != &v41 )
    return 0LL;
  if ( ((*(_DWORD *)(a1 + 104) & 0x4000000) == 0 || *(_DWORD *)v19 != 1414090313)
    && (*((_DWORD *)v19 + 9) & 0x2000000) != 0 )
  {
    v28 = *(_QWORD *)(a1 + 48);
    if ( v28 != PsNtosImageBase && v28 != PsHalImageBase )
      goto LABEL_25;
    v29 = !MiIsKernelHalPadSection((__int64)v19);
    goto LABEL_35;
  }
LABEL_19:
  if ( !PteAddress )
    goto LABEL_20;
  if ( PteAddress > v18 )
  {
    PteAddress = 0LL;
    goto LABEL_20;
  }
  *a5 = PteAddress;
  *a6 = v18;
  if ( a2 + 1 <= v14 )
    return a2 + 1;
  return v6;
}
