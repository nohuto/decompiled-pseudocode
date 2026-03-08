/*
 * XREFs of CmpInitializeActualFileSizes @ 0x140730684
 * Callers:
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 * Callees:
 *     CmpGetFileSize @ 0x14073078C (CmpGetFileSize.c)
 *     CmpLogFailureToGetFileSize @ 0x140A1DC00 (CmpLogFailureToGetFileSize.c)
 */

__int64 __fastcall CmpInitializeActualFileSizes(__int64 a1, _DWORD *a2)
{
  int FileSize; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = 0LL;
  FileSize = CmpGetFileSize(*(_QWORD *)(a1 + 1544), &v20);
  v6 = FileSize;
  if ( FileSize < 0 )
  {
    CmpLogFailureToGetFileSize(v5, 0LL, (unsigned int)FileSize);
  }
  else
  {
    v7 = v20;
    *(_QWORD *)(a1 + 1800) = v20;
    if ( v7 )
    {
      v8 = v7;
      if ( v7 > 2147479552 )
        v8 = 2147479552LL;
    }
    else
    {
      v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096);
    }
    *(_QWORD *)(a1 + 1800) = v8;
    if ( a2 )
      *a2 = v8;
    v9 = *(_DWORD *)(a1 + 168);
    if ( v9 == 1 )
    {
      v17 = CmpGetFileSize(*(_QWORD *)(a1 + 1552), &v20);
      if ( v17 < 0 )
      {
        CmpLogFailureToGetFileSize(v18, 1LL, (unsigned int)v17);
        v19 = 0LL;
      }
      else
      {
        v19 = v20;
      }
      *(_QWORD *)(a1 + 1808) = v19;
    }
    else if ( (unsigned int)(v9 - 4) <= 1 )
    {
      v10 = CmpGetFileSize(*(_QWORD *)(a1 + 1576), &v20);
      if ( v10 < 0 )
      {
        CmpLogFailureToGetFileSize(v11, 4LL, (unsigned int)v10);
        v12 = 0LL;
        v20 = 0LL;
      }
      else
      {
        v12 = v20;
      }
      *(_QWORD *)(a1 + 1808) = v12;
      v13 = CmpGetFileSize(*(_QWORD *)(a1 + 1584), &v20);
      if ( v13 < 0 )
      {
        CmpLogFailureToGetFileSize(v14, 5LL, (unsigned int)v13);
        v15 = 0LL;
      }
      else
      {
        v15 = v20;
      }
      *(_QWORD *)(a1 + 1816) = v15;
    }
    return 0;
  }
  return v6;
}
