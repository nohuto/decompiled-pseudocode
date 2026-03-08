/*
 * XREFs of AslpFileGetExeWrapper @ 0x140A55740
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x140A5609C (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x140A55E4C (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x140A561C4 (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x140A5630C (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x140A56788 (AslpHasStarForceWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  __int64 v6; // rdi
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0;
  *a1 = 0;
  v9 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v9, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_4;
  v6 = v9;
  if ( (unsigned int)AslpFileHasSecuromWrapper(v9) )
  {
    *a1 = 1;
    return 0;
  }
  ImageNtHeader = AslpFileHasActiveMarkWrapper(&v8, v6, a2);
  if ( ImageNtHeader >= 0 )
  {
    if ( v8 )
    {
      *a1 = 2;
    }
    else if ( *(_DWORD *)v6 == 17744 && *(_BYTE *)(v6 + 26) == 83 && *(_BYTE *)(v6 + 27) == 82 )
    {
      *a1 = 3;
    }
    else if ( (unsigned int)AslpHasStarForceWrapper(v6) )
    {
      *a1 = 4;
    }
    return 0;
  }
  if ( ImageNtHeader == -1073741275 )
  {
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
LABEL_4:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
