/*
 * XREFs of RaUnitAtaPassThroughMarshalResults @ 0x1C000161C
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D01C (GetSrbScsiData.c)
 */

__int64 __fastcall RaUnitAtaPassThroughMarshalResults(__int64 a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  bool v5; // zf
  _BYTE *v9; // rdx
  unsigned __int8 v10; // r10
  int v11; // r9d
  char v12; // r9
  _BYTE *v13; // rcx
  unsigned __int8 v14; // r8
  char v15; // r11
  unsigned __int8 v16; // al
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // al
  char *v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  __int64 result; // rax
  unsigned __int8 v23; // dl
  _BYTE *v24; // [rsp+50h] [rbp+8h] BYREF
  char v25; // [rsp+60h] [rbp+18h] BYREF

  v24 = 0LL;
  v5 = *(_BYTE *)(a1 + 2) == 40;
  v25 = 0;
  if ( v5 )
  {
    GetSrbScsiData(a1, 0, 0, 0, (__int64)&v24, (__int64)&v25);
    v9 = v24;
    v10 = v25;
    v11 = *(_DWORD *)(a1 + 60);
  }
  else
  {
    v9 = *(_BYTE **)(a1 + 32);
    v10 = *(_BYTE *)(a1 + 11);
    v11 = *(_DWORD *)(a1 + 16);
  }
  *((_DWORD *)a2 + 2) = v11;
  if ( *(char *)(a1 + 3) >= 0 || !v9 )
    goto LABEL_26;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v12 = *v9 & 0x7F;
  if ( (unsigned __int8)(v12 - 114) > 1u )
  {
    if ( (unsigned __int8)(v12 - 112) > 1u || v10 < 0xCu )
      goto LABEL_26;
    *((_BYTE *)a2 + 40) = v9[3];
    *((_BYTE *)a2 + 41) = v9[6];
    *((_BYTE *)a2 + 42) = v9[11];
    *((_BYTE *)a2 + 43) = v9[10];
    *((_BYTE *)a2 + 44) = v9[9];
    *((_BYTE *)a2 + 45) = v9[5];
    *((_BYTE *)a2 + 46) = v9[4];
    goto LABEL_24;
  }
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( v10 )
  {
    if ( (unsigned __int8)(v12 - 114) > 1u )
      goto LABEL_26;
    if ( v9 + 8 <= &v9[v10] )
    {
      v16 = v9[7];
      if ( v16 <= 0xF7u )
      {
        v17 = v10;
        v18 = v16 + 8;
        if ( v18 <= v10 )
          v17 = v18;
        v14 = v17 - 8;
        if ( v14 )
        {
          v13 = v9 + 8;
          v15 = 1;
        }
      }
    }
  }
  if ( v15 )
  {
    v25 = 9;
    if ( v13 )
    {
      if ( v14 )
      {
LABEL_17:
        if ( v14 < 2u )
          goto LABEL_26;
        v19 = &v25;
        v20 = 0;
        while ( *v13 != *v19 )
        {
          ++v20;
          ++v19;
          if ( v20 )
          {
            v23 = v13[1] + 2;
            if ( v14 <= v23 )
              goto LABEL_26;
            v13 += v23;
            v14 -= v23;
            goto LABEL_17;
          }
        }
        if ( v14 < 0xEu || !v13 )
          goto LABEL_26;
        *((_BYTE *)a2 + 40) = v13[3];
        *((_BYTE *)a2 + 41) = v13[5];
        *((_BYTE *)a2 + 42) = v13[7];
        *((_BYTE *)a2 + 43) = v13[9];
        *((_BYTE *)a2 + 44) = v13[11];
        *((_BYTE *)a2 + 45) = v13[12];
        *((_BYTE *)a2 + 46) = v13[13];
        if ( (v13[2] & 1) != 0 )
        {
          *((_BYTE *)a2 + 33) = v13[4];
          *((_BYTE *)a2 + 34) = v13[6];
          *((_BYTE *)a2 + 35) = v13[8];
          *((_BYTE *)a2 + 36) = v13[10];
        }
LABEL_24:
        if ( (*(_BYTE *)(a1 + 3) & 0x3F) == 0xE )
        {
          *((_BYTE *)a2 + 46) = 65;
          *((_BYTE *)a2 + 40) = 1;
        }
      }
    }
  }
LABEL_26:
  if ( a3 != 1 && (a2[1] & 2) != 0 && (v21 = *((_QWORD *)a2 + 3)) != 0 )
    result = v21 + *((unsigned int *)a2 + 2);
  else
    result = *a2;
  *(_QWORD *)(a4 + 8) = result;
  *(_DWORD *)a4 = 0;
  return result;
}
