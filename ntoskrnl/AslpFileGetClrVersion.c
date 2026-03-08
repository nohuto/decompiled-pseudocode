/*
 * XREFs of AslpFileGetClrVersion @ 0x140A5533C
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x140A55514 (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x140A55E4C (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140A5680C (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileGetClrVersion(_BYTE *a1, __int64 a2)
{
  unsigned int *v4; // rdi
  int ImageNtHeader; // ebx
  __int64 v6; // rbx
  __int16 v7; // ax
  __int64 v8; // r8
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rbx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v13, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  v6 = v13;
  v7 = *(_WORD *)(v13 + 24);
  if ( v7 == 267 )
  {
    v4 = (unsigned int *)(v13 + 232);
  }
  else if ( v7 == 523 )
  {
    v4 = (unsigned int *)(v13 + 248);
  }
  if ( !v4 )
    return (unsigned int)-1073741701;
  v8 = *v4;
  if ( !(_DWORD)v8 || v4[1] < 0x48 )
    return (unsigned int)-1073741701;
  v9 = AslpImageRvaToVa(v13, a2 + 8, v8);
  if ( v9 )
  {
    if ( *(_WORD *)(v9 + 4) != 2 )
      return (unsigned int)-1073741637;
    v10 = (_DWORD *)AslpImageRvaToVa(v6, a2 + 8, *(unsigned int *)(v9 + 8));
    if ( v10 )
    {
      if ( *v10 != 1112167234 )
      {
        ImageNtHeader = -1073741637;
        goto LABEL_2;
      }
      v11 = (unsigned int)v10[3];
      if ( (unsigned __int64)(v11 - 1) <= 0xFE )
      {
        memmove(a1, v10 + 4, (unsigned int)v11);
        a1[v11] = 0;
        return 0;
      }
    }
  }
  ImageNtHeader = -1073741701;
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
