/*
 * XREFs of CompareId @ 0x1C0005BD0
 * Callers:
 *     IoctlToNVMe @ 0x1C0002660 (IoctlToNVMe.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001E16C (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     GetStringLength @ 0x1C0005CBC (GetStringLength.c)
 *     StringToULONG @ 0x1C001E2D4 (StringToULONG.c)
 */

bool __fastcall CompareId(__int64 a1, unsigned int a2, char *a3, unsigned int a4, __int64 a5)
{
  char *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int StringLength; // ecx
  int v12; // edx
  char v13; // bl
  __int64 v14; // r11
  char v15; // al
  char v16; // r9
  int v18; // eax
  __int64 v19; // r8

  v8 = a3;
  if ( !a1 || !a3 )
    return 1;
LABEL_3:
  if ( *a3 || (v13 = 0, a3[1]) )
  {
    if ( a2 < (unsigned int)GetStringLength(a3, a4) )
      StringLength = a2;
    else
      StringLength = GetStringLength(v10, v9);
    if ( !StringLength )
      return 0;
    v12 = 0;
    v13 = 1;
    v14 = a1 - (_QWORD)v8;
    while ( 1 )
    {
      v15 = *v8;
      if ( *v8 == 42 )
        break;
      v16 = v8[v14];
      if ( !v16 || !v15 || v16 != v15 && v15 != 63 )
      {
        v18 = GetStringLength(v10, a4);
        a3 = (char *)((unsigned int)(v18 + 1) + v19);
        v8 = a3;
        goto LABEL_3;
      }
      ++v8;
      if ( ++v12 >= StringLength )
        goto LABEL_15;
    }
    ++v8;
  }
LABEL_15:
  if ( a5 && v13 == 1 && *v8 == 32 )
    return (unsigned __int8)StringToULONG(v8 + 1) != 0;
  return v13;
}
