/*
 * XREFs of XmGetStringAddressRange @ 0x1403C12A0
 * Callers:
 *     XmStosOp @ 0x1403C1140 (XmStosOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140397CA0 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D07E0 (longjmp.c)
 */

int *__fastcall XmGetStringAddressRange(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v6; // r14d
  unsigned __int16 v7; // r10
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned int v11; // eax
  int *v12; // r15
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // edx
  bool v18; // cc

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
  v12 = x86BiosTranslateAddress(v7, v6);
  v13 = (*(_DWORD *)(a1 + 120) + 1) * (*a4 - 1);
  if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    v13 = -v13;
  if ( (unsigned int)x86BiosTranslateAddress(*(_WORD *)(a1 + 56), (unsigned __int16)v13 + (unsigned __int16)v6)
     - (_DWORD)v12 == v13 )
  {
    v14 = *a4;
  }
  else
  {
    *a4 = 1;
    v14 = 1;
  }
  v15 = v14 * (*(_DWORD *)(a1 + 120) + 1);
  v16 = *(_DWORD *)(a1 + 16);
  if ( (v16 & 0x400) != 0 )
    v15 = -v15;
  if ( *(_BYTE *)(a1 + 137) )
    *(_DWORD *)(a1 + 52) += v15;
  else
    *(_WORD *)(a1 + 52) += v15;
  v17 = *(unsigned __int16 *)(a1 + 68);
  if ( (v16 & 0x400) != 0 )
    v18 = v6 + *(_DWORD *)(a1 + 120) <= v17;
  else
    v18 = v6 + v15 - 1 <= v17;
  if ( !v18 )
    longjmp((_JBTYPE *)(a1 + 160), 14);
  return v12;
}
