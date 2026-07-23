/*
 * XREFs of sub_1405D7380 @ 0x1405D7380
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     sub_1403F9834 @ 0x1403F9834 (sub_1403F9834.c)
 *     WbAlloc @ 0x140642A24 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405D7380(__int64 a1, unsigned int a2, _OWORD *a3, __int64 a4)
{
  int v7; // ebx
  _OWORD *v8; // rax
  _OWORD *v9; // rax
  int v10; // esi
  _OWORD *v11; // rax
  _OWORD *v12; // rax
  PVOID P[2]; // [rsp+38h] [rbp-30h]

  *(_OWORD *)P = 0LL;
  if ( a2 < 0x10 )
    goto LABEL_2;
  v7 = WbAlloc(0xF4uLL);
  if ( v7 >= 0 )
  {
    v8 = *(_OWORD **)(a1 + 8);
    if ( (unsigned __int64)v8 + 244 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v8 + 244) < v8 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v8 = *(_OWORD **)(a1 + 8);
    }
    MEMORY[0] = *v8;
    MEMORY[0x10] = v8[1];
    MEMORY[0x20] = v8[2];
    MEMORY[0x30] = v8[3];
    MEMORY[0x40] = v8[4];
    MEMORY[0x50] = v8[5];
    MEMORY[0x60] = v8[6];
    MEMORY[0x70] = v8[7];
    v9 = v8 + 8;
    MEMORY[0x80] = *v9;
    MEMORY[0x90] = v9[1];
    MEMORY[0xA0] = v9[2];
    MEMORY[0xB0] = v9[3];
    MEMORY[0xC0] = v9[4];
    MEMORY[0xD0] = v9[5];
    MEMORY[0xE0] = v9[6];
    MEMORY[0xF0] = *((_DWORD *)v9 + 28);
    v10 = MEMORY[0x24] & 0xF;
    LODWORD(P[0]) = v10;
    HIDWORD(P[0]) = MEMORY[0x24] >> 4;
    if ( v10 == 1 )
    {
      ExFreePoolWithTag(0LL, 0x42524157u);
      P[1] = 0LL;
      v7 = WbAlloc(0xF8uLL);
      if ( v7 < 0 )
        goto LABEL_16;
      v11 = *(_OWORD **)(a1 + 8);
      if ( (unsigned __int64)v11 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v11 + 248) < v11 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v11 = *(_OWORD **)(a1 + 8);
      }
      MEMORY[0] = *v11;
      MEMORY[0x10] = v11[1];
      MEMORY[0x20] = v11[2];
      MEMORY[0x30] = v11[3];
      MEMORY[0x40] = v11[4];
      MEMORY[0x50] = v11[5];
      MEMORY[0x60] = v11[6];
      MEMORY[0x70] = v11[7];
      v12 = v11 + 8;
      MEMORY[0x80] = *v12;
      MEMORY[0x90] = v12[1];
      MEMORY[0xA0] = v12[2];
      MEMORY[0xB0] = v12[3];
      MEMORY[0xC0] = v12[4];
      MEMORY[0xD0] = v12[5];
      MEMORY[0xE0] = v12[6];
      MEMORY[0xF0] = *((_QWORD *)v12 + 14);
    }
    else
    {
      sub_1403F9834();
      if ( v10 )
      {
LABEL_2:
        v7 = -1073741811;
        goto LABEL_16;
      }
    }
    *(_DWORD *)(a4 + 8) = *((_DWORD *)P[1] + 16);
    *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (*((_DWORD *)P[1] + 10) & 0xFFFFFFF);
    if ( a3 )
    {
      *a3 = *(_OWORD *)P;
      P[1] = 0LL;
    }
  }
LABEL_16:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x42524157u);
  return (unsigned int)v7;
}
