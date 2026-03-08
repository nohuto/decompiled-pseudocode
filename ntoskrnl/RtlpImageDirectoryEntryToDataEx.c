/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14035E748
 * Callers:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x14035D844 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x14035E850 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x14035E900 (RtlpImageDirectoryEntryToData64.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rsi
  char v8; // di
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  __int16 v11; // ax
  int v12; // edx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v13 = 0LL;
  v8 = a2;
  v9 = a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v8 = 0;
    v9 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1 & 1) == 0 )
      v8 = a2;
  }
  result = RtlImageNtHeaderEx(1LL, v9, 0LL, &v13);
  if ( v13 )
  {
    v11 = *(_WORD *)(v13 + 24);
    if ( v11 == 267 )
    {
      return RtlpImageDirectoryEntryToData32(v9, v8, a3, a4, v13, v5);
    }
    else
    {
      v12 = 523;
      if ( v11 == 523 )
      {
        LOBYTE(v12) = v8;
        return RtlpImageDirectoryEntryToData64(v9, v12, a3, (_DWORD)a4, v13, (__int64)v5);
      }
      else
      {
        return 3221225485LL;
      }
    }
  }
  return result;
}
