/*
 * XREFs of MiInitializeWowPeb @ 0x140670754
 * Callers:
 *     MmCreatePeb @ 0x1406121F8 (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     MmCheckImageMapping @ 0x140670B98 (MmCheckImageMapping.c)
 *     MiCreatePebOrTeb @ 0x1406C4EC4 (MiCreatePebOrTeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 result; // rax
  _WORD *v11; // rax
  _WORD *v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int16 v15; // ax
  char v16; // si
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int16 v20; // cx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int16 v23; // cx
  int v24; // eax
  ULONG Size; // [rsp+24h] [rbp-44h] BYREF
  unsigned int *v26; // [rsp+28h] [rbp-40h]
  __int64 v27[7]; // [rsp+30h] [rbp-38h] BYREF
  BOOLEAN MappedAsImage; // [rsp+80h] [rbp+18h] BYREF

  v27[0] = 0LL;
  MappedAsImage = 0;
  v26 = 0LL;
  v8 = *(_QWORD *)(a3 + 1408);
  if ( v8 && ((v9 = *(_WORD *)(v8 + 8), v9 == 332) || v9 == 452) )
  {
    result = MmCheckImageMapping(a3, &MappedAsImage);
    if ( (int)result < 0 )
      return result;
    v11 = RtlImageDirectoryEntryToData(*(PVOID *)(a3 + 1312), MappedAsImage, 0xAu, &Size);
    v12 = v11;
    v26 = (unsigned int *)v11;
    if ( v11 )
    {
      if ( ((unsigned __int8)v11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v26[12];
      if ( ((unsigned int)v13 & (unsigned __int64)qword_140CFC848[*(unsigned __int16 *)(a4 + 8)]) != v13 )
        v13 = 0LL;
      *(_QWORD *)a4 = v13;
      v12 = v26;
    }
    *(_DWORD *)a1 = *(unsigned __int16 *)(a2 + 92);
    *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(a2 + 72);
    *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(a2 + 74);
    v14 = *(_DWORD *)(a2 + 76);
    if ( v14 )
    {
      if ( v12 )
      {
        v15 = v12[26];
        if ( v15 )
        {
          *(_WORD *)(a1 + 26) = v15;
          v14 = *(_DWORD *)(a2 + 76);
        }
      }
      *(_DWORD *)(a1 + 12) = (unsigned __int8)v14;
      *(_DWORD *)(a1 + 16) = BYTE1(v14);
      *(_WORD *)(a1 + 24) = HIWORD(v14);
      *(_DWORD *)(a1 + 20) = (v14 ^ 0xBFFFFFFF) >> 30;
    }
    v16 = 1;
    v17 = 1LL;
  }
  else
  {
    v17 = 2LL;
    v16 = 1;
  }
  result = MiCreatePebOrTeb(v17, 0LL, v27);
  if ( (int)result >= 0 )
  {
    v18 = v27[0];
    **(_QWORD **)(a3 + 1408) = v27[0];
    v19 = *(_QWORD *)(a3 + 1408);
    if ( v19 )
    {
      v20 = *(_WORD *)(v19 + 8);
      if ( v20 == 332 || v20 == 452 )
      {
        v21 = *(_QWORD *)(a1 + 32);
        if ( v21 > 0x40000000 )
        {
          v21 = 0x100000LL;
          *(_QWORD *)(a1 + 32) = 0x100000LL;
        }
        if ( *(_QWORD *)(a1 + 40) > v21 )
          *(_QWORD *)(a1 + 40) = 0x2000LL;
      }
    }
    v22 = *(_QWORD *)(a3 + 1408);
    if ( !v22 || (v23 = *(_WORD *)(v22 + 8), v23 != 332) && v23 != 452 )
      v16 = 0;
    v24 = *(_DWORD *)(a1 + 12);
    if ( v16 )
    {
      *(_DWORD *)(v18 + 164) = v24;
      *(_DWORD *)(v18 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v18 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v18 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v18 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v18 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v18 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v18 + 100) = KeNumberProcessors_0;
      *(_DWORD *)(v18 + 104) = NtGlobalFlag;
      *(_DWORD *)(v18 + 1144) = NtGlobalFlag2;
      *(_QWORD *)(v18 + 112) = qword_140C4DE20;
      *(_DWORD *)(v18 + 520) = dword_140CFB198;
      *(_DWORD *)(v18 + 128) = qword_140CFB1A8;
      *(_DWORD *)(v18 + 132) = qword_140CFB1A0;
      *(_DWORD *)(v18 + 468) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v18 + 180) = *(_DWORD *)a1;
      *(_DWORD *)(v18 + 184) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v18 + 188) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v18 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v18 + 3) = *(_BYTE *)(a1 + 97);
      *(_DWORD *)(v18 + 4) = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(v18 + 8) = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(v18 + 88) = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(v18 + 92) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v18 + 96) = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v18 + 1136) = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(v18 + 1140) = *(_DWORD *)(a1 + 152);
    }
    else
    {
      *(_DWORD *)(v18 + 280) = v24;
      *(_DWORD *)(v18 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v18 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v18 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v18 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v18 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v18 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v18 + 184) = KeNumberProcessors_0;
      *(_DWORD *)(v18 + 188) = NtGlobalFlag;
      *(_DWORD *)(v18 + 1988) = NtGlobalFlag2;
      *(_QWORD *)(v18 + 192) = qword_140C4DE20;
      *(_QWORD *)(v18 + 792) = (unsigned int)dword_140CFB198;
      *(_QWORD *)(v18 + 216) = qword_140CFB1A8;
      *(_QWORD *)(v18 + 224) = qword_140CFB1A0;
      *(_DWORD *)(v18 + 704) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v18 + 296) = *(_DWORD *)a1;
      *(_DWORD *)(v18 + 300) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v18 + 304) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v18 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v18 + 3) = *(_BYTE *)(a1 + 97);
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v18 + 16) = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(v18 + 160) = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(v18 + 168) = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(v18 + 176) = *(_QWORD *)(a1 + 136);
      *(_QWORD *)(v18 + 1976) = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(v18 + 1984) = *(_DWORD *)(a1 + 152);
    }
    return 0LL;
  }
  return result;
}
