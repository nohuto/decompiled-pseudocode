/*
 * XREFs of XmGetStringAddressRange @ 0x140395614
 * Callers:
 *     XmStosOp @ 0x1403954B0 (XmStosOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x1403B9030 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 */

__int64 __fastcall XmGetStringAddressRange(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v6; // esi
  unsigned __int16 v7; // r10
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  __int64 v12; // r15
  int v13; // eax
  int v14; // edx
  int v15; // edi
  int v16; // r8d
  int v17; // edx
  int v18; // r9d
  unsigned int v19; // eax

  if ( *(_BYTE *)(a1 + 137) )
    v6 = *(_DWORD *)(a1 + 52);
  else
    v6 = *(unsigned __int16 *)(a1 + 52);
  v7 = *(_WORD *)(a1 + 56);
  v8 = *(_DWORD *)(a1 + 120);
  v9 = ((_WORD)v6 + 16 * v7) & 0xFFF;
  v10 = v8 + 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    v11 = v9 / v10 + 1;
  else
    v11 = (v8 - v9 + 4096) / v10;
  if ( *a4 > v11 )
    *a4 = v11;
  v12 = x86BiosTranslateAddress(v7, (unsigned __int16)v6);
  v13 = *(_DWORD *)(a1 + 120);
  v14 = *a4 - 1;
  v15 = v14 * (v13 + 1);
  if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    v15 = v14 * ~v13;
  if ( (unsigned int)x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 56), v15 + (unsigned int)(unsigned __int16)v6)
     - (_DWORD)v12 != v15 )
    *a4 = 1;
  v16 = *(_DWORD *)(a1 + 120);
  v17 = *a4 * (v16 + 1);
  v18 = *(_DWORD *)(a1 + 16) & 0x400;
  if ( v18 )
    v17 = *a4 * ~v16;
  if ( *(_BYTE *)(a1 + 137) )
    *(_DWORD *)(a1 + 52) += v17;
  else
    *(_WORD *)(a1 + 52) += v17;
  if ( v18 )
    v19 = v16 + v6;
  else
    v19 = v6 + v17 - 1;
  if ( v19 > *(unsigned __int16 *)(a1 + 68) )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return v12;
}
