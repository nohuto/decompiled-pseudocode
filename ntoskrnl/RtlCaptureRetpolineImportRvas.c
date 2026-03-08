/*
 * XREFs of RtlCaptureRetpolineImportRvas @ 0x1402E1A7C
 * Callers:
 *     RtlUpdateImportRelocationsInImage @ 0x140370FC4 (RtlUpdateImportRelocationsInImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x14076CDAC (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlCaptureRetpolineImportRvas(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int (*a4)(void),
        _DWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  __int64 v10; // rax
  __int64 *v11; // rsi
  unsigned int *v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ebp
  __int64 v16; // r12
  __int64 v17; // rcx
  int v18; // r15d
  _DWORD v20[14]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h]

  v21 = a2;
  v6 = 0;
  v20[0] = 0;
  LOBYTE(a2) = 1;
  v10 = RtlImageDirectoryEntryToData(a1, a2, 12LL, v20);
  v11 = (__int64 *)v10;
  if ( v10 )
  {
    if ( v10 + (unsigned __int64)v20[0] > a1 + a3 )
    {
      return (unsigned int)-1073741701;
    }
    else
    {
      v12 = a6;
      v13 = v20[0] >> 3;
      v14 = 4 * (v20[0] >> 3);
      if ( v14 > *a6 )
      {
        v6 = -1073741789;
      }
      else if ( v13 )
      {
        v16 = v13;
        do
        {
          *a5 = 0;
          v17 = *v11;
          if ( *v11 )
          {
            v18 = v17 - v21;
            if ( (unsigned __int64)(v17 - v21 + 0x80000000LL) <= 0xFFFFFFFF && (!a4 || a4()) )
              *a5 = v18;
          }
          ++v11;
          ++a5;
          --v16;
        }
        while ( v16 );
        v12 = a6;
      }
      *v12 = v14;
    }
  }
  else
  {
    *a6 = 0;
  }
  return v6;
}
