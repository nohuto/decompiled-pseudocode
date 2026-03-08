/*
 * XREFs of MiInitializeWowPeb @ 0x140795138
 * Callers:
 *     MmCreatePeb @ 0x140706A60 (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     MiCreatePebOrTeb @ 0x1406A35BC (MiCreatePebOrTeb.c)
 *     MmCheckImageMapping @ 0x1407955BC (MmCheckImageMapping.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  _WORD *v7; // rsi
  char v8; // di
  char v9; // al
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int16 v15; // ax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  char v22; // al
  int v23; // eax
  char v24; // [rsp+24h] [rbp-44h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h]
  _QWORD v26[7]; // [rsp+30h] [rbp-38h] BYREF
  char v27; // [rsp+80h] [rbp+18h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h]

  v28 = a4;
  v5 = a2;
  v26[0] = 0LL;
  v27 = 0;
  v25 = 0LL;
  v7 = (_WORD *)(a3 + 2412);
  if ( !*(_QWORD *)(a3 + 1408) )
  {
    v8 = 1;
LABEL_43:
    v17 = 2LL;
    goto LABEL_18;
  }
  if ( *v7 == 332 || *v7 == 452 )
  {
    v8 = 1;
    v9 = 1;
  }
  else
  {
    v9 = 0;
    v8 = 1;
  }
  if ( !v9 )
    goto LABEL_43;
  result = MmCheckImageMapping(a3, &v27);
  if ( (int)result < 0 )
    return result;
  LOBYTE(v11) = v27;
  v12 = RtlImageDirectoryEntryToData(*(_QWORD *)(a3 + 1312), v11, 10, (int)&v24);
  v13 = v12;
  v25 = v12;
  if ( v12 )
  {
    if ( (v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    a2 = *(unsigned int *)(v25 + 48);
    v14 = a2;
    if ( (a2 & qword_140D1EFE8[*(unsigned __int16 *)(v28 + 8)]) != a2 )
      v14 = 0LL;
    *(_QWORD *)v28 = v14;
    v13 = v25;
  }
  *(_DWORD *)a1 = *(unsigned __int16 *)(v5 + 92);
  *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(v5 + 72);
  *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(v5 + 74);
  if ( *(_DWORD *)(v5 + 76) )
  {
    if ( v13 )
    {
      v15 = *(_WORD *)(v13 + 52);
      if ( v15 )
        *(_WORD *)(a1 + 26) = v15;
    }
    v16 = *(_DWORD *)(v5 + 76);
    *(_DWORD *)(a1 + 12) = (unsigned __int8)v16;
    *(_DWORD *)(a1 + 16) = BYTE1(v16);
    *(_WORD *)(a1 + 24) = HIWORD(v16);
    *(_DWORD *)(a1 + 20) = (v16 ^ 0xBFFFFFFF) >> 30;
  }
  v17 = 1LL;
LABEL_18:
  result = MiCreatePebOrTeb(v17, a2, v26);
  if ( (int)result >= 0 )
  {
    v18 = v26[0];
    **(_QWORD **)(a3 + 1408) = v26[0];
    if ( *(_QWORD *)(a3 + 1408) )
    {
      if ( *v7 == 332 || (v19 = 0, *v7 == 452) )
        v19 = 1;
      if ( v19 )
      {
        v20 = *(_QWORD *)(a1 + 32);
        if ( v20 > 0x40000000 )
        {
          v20 = 0x100000LL;
          *(_QWORD *)(a1 + 32) = 0x100000LL;
        }
        v21 = *(_QWORD *)(a1 + 40);
        if ( v21 > v20 )
          v21 = 0x2000LL;
        *(_QWORD *)(a1 + 40) = v21;
      }
    }
    if ( !*(_QWORD *)(a3 + 1408) )
      goto LABEL_36;
    if ( *v7 == 332 || (v22 = 0, *v7 == 452) )
      v22 = 1;
    if ( !v22 )
LABEL_36:
      v8 = 0;
    v23 = *(_DWORD *)(a1 + 12);
    if ( v8 )
    {
      *(_DWORD *)(v18 + 164) = v23;
      *(_DWORD *)(v18 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v18 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v18 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v18 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v18 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v18 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v18 + 100) = KeNumberProcessors_0;
      *(_DWORD *)(v18 + 104) = NtGlobalFlag;
      *(_DWORD *)(v18 + 1144) = NtGlobalFlag2;
      *(_QWORD *)(v18 + 112) = qword_140C65690;
      *(_DWORD *)(v18 + 520) = dword_140D1D1E8;
      *(_DWORD *)(v18 + 128) = qword_140D1D1F8;
      *(_DWORD *)(v18 + 132) = qword_140D1D1F0;
      *(_DWORD *)(v18 + 468) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v18 + 180) = *(_DWORD *)a1;
      *(_DWORD *)(v18 + 184) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v18 + 188) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v18 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v18 + 3) = *(_BYTE *)(a1 + 97);
      *(_DWORD *)(v18 + 4) = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(v18 + 8) = *(_DWORD *)(a1 + 112);
      *(_WORD *)(v18 + 552) = *(_WORD *)(a1 + 120);
      *(_WORD *)(v18 + 554) = *(_WORD *)(a1 + 122);
      *(_WORD *)(v18 + 556) = *(_WORD *)(a1 + 124);
      *(_DWORD *)(v18 + 1136) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v18 + 1140) = *(_DWORD *)(a1 + 136);
    }
    else
    {
      *(_DWORD *)(v18 + 280) = v23;
      *(_DWORD *)(v18 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v18 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v18 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v18 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v18 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v18 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v18 + 184) = KeNumberProcessors_0;
      *(_DWORD *)(v18 + 188) = NtGlobalFlag;
      *(_DWORD *)(v18 + 1988) = NtGlobalFlag2;
      *(_QWORD *)(v18 + 192) = qword_140C65690;
      *(_QWORD *)(v18 + 792) = (unsigned int)dword_140D1D1E8;
      *(_QWORD *)(v18 + 216) = qword_140D1D1F8;
      *(_QWORD *)(v18 + 224) = qword_140D1D1F0;
      *(_DWORD *)(v18 + 704) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v18 + 296) = *(_DWORD *)a1;
      *(_DWORD *)(v18 + 300) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v18 + 304) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v18 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v18 + 3) = *(_BYTE *)(a1 + 97);
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v18 + 16) = *(_QWORD *)(a1 + 112);
      *(_WORD *)(v18 + 844) = *(_WORD *)(a1 + 120);
      *(_WORD *)(v18 + 846) = *(_WORD *)(a1 + 122);
      *(_WORD *)(v18 + 848) = *(_WORD *)(a1 + 124);
      *(_QWORD *)(v18 + 1976) = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(v18 + 1984) = *(_DWORD *)(a1 + 136);
    }
    return 0LL;
  }
  return result;
}
