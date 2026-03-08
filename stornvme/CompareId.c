/*
 * XREFs of CompareId @ 0x1C0025AD8
 * Callers:
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0027934 (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     GetStringLength @ 0x1C0007B60 (GetStringLength.c)
 *     StringToULONG @ 0x1C0027A9C (StringToULONG.c)
 */

bool __fastcall CompareId(__int64 a1, unsigned int a2, char *a3, unsigned int a4, __int64 a5)
{
  char *v8; // r10
  char v9; // bl
  unsigned int v10; // edx
  _BYTE *v11; // r8
  unsigned int StringLength; // ecx
  int v13; // edx
  __int64 v14; // r11
  char v15; // al
  char v16; // r9
  int v17; // eax
  __int64 v18; // r8

  v8 = a3;
  if ( !a1 || !a3 )
    return 1;
LABEL_3:
  if ( *a3 || (v9 = 0, a3[1]) )
  {
    if ( a2 >= (unsigned int)GetStringLength(a3, a4) )
      StringLength = GetStringLength(v11, v10);
    else
      StringLength = a2;
    if ( !StringLength )
      return 0;
    v13 = 0;
    v9 = 1;
    v14 = a1 - (_QWORD)v8;
    while ( 1 )
    {
      v15 = *v8;
      if ( *v8 == 42 )
        break;
      v16 = v8[v14];
      if ( !v16 || !v15 || v16 != v15 && v15 != 63 )
      {
        v17 = GetStringLength(v11, a4);
        a3 = (char *)((unsigned int)(v17 + 1) + v18);
        v8 = a3;
        goto LABEL_3;
      }
      ++v8;
      if ( ++v13 >= StringLength )
        goto LABEL_19;
    }
    ++v8;
  }
LABEL_19:
  if ( a5 && v9 == 1 && *v8 == 32 )
    return (unsigned __int8)StringToULONG(v8 + 1) != 0;
  return v9;
}
