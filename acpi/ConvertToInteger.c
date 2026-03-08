/*
 * XREFs of ConvertToInteger @ 0x1C0059A54
 * Callers:
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     Concat @ 0x1C0055F60 (Concat.c)
 *     ToInteger @ 0x1C00593D0 (ToInteger.c)
 * Callees:
 *     _strtoui64_0 @ 0x1C0001A79 (_strtoui64_0.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall ConvertToInteger(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int128 v15; // [rsp+20h] [rbp-38h]
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v2 = *(unsigned __int16 *)(a1 + 2);
  v3 = 0;
  v15 = 0LL;
  v17 = 0LL;
  WORD1(v15) = 1;
  v16 = 0LL;
  v6 = v2 - 1;
  if ( !v6 )
    goto LABEL_10;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = strtoui64_0(*(const char **)(a1 + 32), 0LL, 0);
LABEL_11:
    *(_QWORD *)&v16 = v11;
LABEL_12:
    FreeDataBuffs(a2, 1u);
    v12 = v16;
    *(_OWORD *)a2 = v15;
    v13 = v17;
    *(_OWORD *)(a2 + 16) = v12;
    *(_QWORD *)(a2 + 32) = v13;
    return v3;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    v10 = 8;
    if ( v9 <= 8 )
      v10 = v9;
    memmove(&v16, *(const void **)(a1 + 32), v10);
    goto LABEL_12;
  }
  if ( v8 == 12 )
  {
LABEL_10:
    v11 = *(_QWORD *)(a1 + 16);
    goto LABEL_11;
  }
  return (unsigned int)-1072431095;
}
