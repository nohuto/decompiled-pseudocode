/*
 * XREFs of PopReadResumeContext @ 0x140985D88
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopReadPagesFromHiberFile @ 0x140985B2C (PopReadPagesFromHiberFile.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadResumeContext(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rdi
  int v5; // eax
  unsigned int *v6; // rsi
  int PagesFromHiberFile; // ebx
  int v8; // eax
  unsigned int v9; // edx
  ULONGLONG v10; // rcx
  unsigned __int64 v11; // rdx
  ULONGLONG pullResult[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  pullResult[0] = 0LL;
  v14 = 0LL;
  v5 = PopReadPagesFromHiberFile(0, 1u, &P);
  v6 = (unsigned int *)P;
  PagesFromHiberFile = v5;
  if ( v5 >= 0 )
  {
    v8 = *(_DWORD *)P;
    if ( *(_DWORD *)P
      && v8 != 1380075848
      && v8 != 1381258066
      && v8 != 1162559831
      && v8 != 1347113538
      && v8 != 1297239880 )
    {
      goto LABEL_8;
    }
    v9 = *((_DWORD *)P + 242);
    if ( !v9 )
      goto LABEL_8;
    PagesFromHiberFile = PopReadPagesFromHiberFile(2u, v9, (PVOID *)&v14);
    if ( PagesFromHiberFile < 0
      || (PagesFromHiberFile = RtlULongLongMult(v6[242], 0x1000uLL, pullResult), PagesFromHiberFile < 0) )
    {
      v2 = v14;
    }
    else
    {
      v2 = v14;
      if ( *v14 != 1 )
        goto LABEL_8;
      v10 = v14[1];
      if ( v10 > pullResult[0] )
        goto LABEL_8;
      v11 = 48LL * v14[2];
      if ( v11 <= 0xFFFFFFFF )
      {
        PagesFromHiberFile = 0;
        if ( (unsigned int)v11 <= (unsigned int)v10 )
        {
          memset((char *)v14 + v10, 0, pullResult[0] - v10);
          *a1 = v2[1];
          *a2 = v2;
          goto LABEL_19;
        }
LABEL_8:
        PagesFromHiberFile = -1073741271;
        goto LABEL_19;
      }
      PagesFromHiberFile = -1073741675;
    }
  }
LABEL_19:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x206D654Du);
  if ( PagesFromHiberFile < 0 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0x206D654Du);
    *a2 = 0LL;
    *a1 = 0;
  }
  return (unsigned int)PagesFromHiberFile;
}
