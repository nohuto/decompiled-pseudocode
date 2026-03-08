/*
 * XREFs of AslpFileGetNtHeaderAttributes @ 0x140A55F28
 * Callers:
 *     AslpFileGetHeaderAttributesPE @ 0x140A55BD4 (AslpFileGetHeaderAttributesPE.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x140A55E4C (AslpFileGetImageNtHeader.c)
 */

__int64 __fastcall AslpFileGetNtHeaderAttributes(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7,
        _WORD *a8,
        __int64 a9)
{
  int ImageNtHeader; // ebx
  __int64 v14; // r8
  __int16 v15; // dx
  _QWORD v17[3]; // [rsp+38h] [rbp-30h] BYREF

  v17[0] = 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(v17, a9);
  if ( ImageNtHeader >= 0 )
  {
    v14 = v17[0];
    *a2 = (unsigned __int8)*(_WORD *)(v17[0] + 70LL) + ((unsigned __int8)*(_WORD *)(v17[0] + 68LL) << 16);
    *a3 = *(_DWORD *)(v14 + 8);
    v15 = *(_WORD *)(v14 + 24);
    *a7 = v15;
    *a5 = *(_WORD *)(v14 + 4);
    *a8 = *(_WORD *)(v14 + 22);
    if ( v15 == 267 || v15 == 523 )
    {
      *a1 = *(_DWORD *)(v14 + 88);
      *a4 = *(_DWORD *)(v14 + 80);
      *a6 = *(_WORD *)(v14 + 92);
      return 0;
    }
    else
    {
      *a1 = 0;
      *a4 = 0;
      *a6 = 0;
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ImageNtHeader;
}
