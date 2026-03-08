/*
 * XREFs of WbValidateEncryptionSegmentArguments @ 0x140755A20
 * Callers:
 *     WbGetInitializedEncryptionSegment @ 0x140755694 (WbGetInitializedEncryptionSegment.c)
 * Callees:
 *     WbAlloc @ 0x1406AF510 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbValidateEncryptionSegmentArguments(__int64 a1, unsigned int a2, _OWORD *a3, __int64 a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // r8
  int v11; // ecx
  unsigned __int64 v13; // rax
  _OWORD *v14; // rax
  PVOID P[2]; // [rsp+38h] [rbp-30h] BYREF

  *(_OWORD *)P = 0LL;
  if ( a2 < 0x10 )
  {
    v7 = -1073741811;
    goto LABEL_15;
  }
  v7 = WbAlloc(0xF4u, &P[1]);
  if ( v7 < 0 )
    goto LABEL_15;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 + 244 > 0x7FFFFFFF0000LL || v8 + 244 < v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v9 = *(_OWORD **)(a1 + 8);
  v10 = P[1];
  *(_OWORD *)P[1] = *v9;
  v10[1] = v9[1];
  v10[2] = v9[2];
  v10[3] = v9[3];
  v10[4] = v9[4];
  v10[5] = v9[5];
  v10[6] = v9[6];
  v10[7] = v9[7];
  v9 += 8;
  v10[8] = *v9;
  v10[9] = v9[1];
  v10[10] = v9[2];
  v10[11] = v9[3];
  v10[12] = v9[4];
  v10[13] = v9[5];
  v10[14] = v9[6];
  *((_DWORD *)v10 + 60) = *((_DWORD *)v9 + 28);
  v11 = *((_DWORD *)v10 + 9) & 0xF;
  LODWORD(P[0]) = v11;
  HIDWORD(P[0]) = (unsigned __int8)*((_DWORD *)v10 + 9) >> 4;
  if ( v11 != 1 )
  {
    if ( v11 )
    {
      v7 = -1073741811;
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  ExFreePoolWithTag(v10, 0);
  P[1] = 0LL;
  v7 = WbAlloc(0xF8u, &P[1]);
  if ( v7 < 0 )
  {
LABEL_15:
    v10 = P[1];
    goto LABEL_10;
  }
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 + 248 > 0x7FFFFFFF0000LL || v13 + 248 < v13 )
    MEMORY[0x7FFFFFFF0000] = 0;
  v14 = *(_OWORD **)(a1 + 8);
  v10 = P[1];
  *(_OWORD *)P[1] = *v14;
  v10[1] = v14[1];
  v10[2] = v14[2];
  v10[3] = v14[3];
  v10[4] = v14[4];
  v10[5] = v14[5];
  v10[6] = v14[6];
  v10[7] = v14[7];
  v14 += 8;
  v10[8] = *v14;
  v10[9] = v14[1];
  v10[10] = v14[2];
  v10[11] = v14[3];
  v10[12] = v14[4];
  v10[13] = v14[5];
  v10[14] = v14[6];
  *((_QWORD *)v10 + 30) = *((_QWORD *)v14 + 14);
LABEL_8:
  *(_DWORD *)(a4 + 8) = *((_DWORD *)v10 + 16);
  *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (*((_DWORD *)v10 + 10) & 0xFFFFFFF);
  if ( a3 )
  {
    *a3 = *(_OWORD *)P;
    v10 = 0LL;
  }
LABEL_10:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)v7;
}
