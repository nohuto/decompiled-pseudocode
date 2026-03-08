/*
 * XREFs of PiLookupInDDBCache @ 0x14079DD70
 * Callers:
 *     PpCheckInDriverDatabase @ 0x14079DC60 (PpCheckInDriverDatabase.c)
 * Callees:
 *     RtlIsGenericTableEmptyAvl @ 0x140244F30 (RtlIsGenericTableEmptyAvl.c)
 *     RtlLookupElementGenericTableAvl @ 0x140245A20 (RtlLookupElementGenericTableAvl.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcsrchr @ 0x1403D5F90 (wcsrchr.c)
 */

__int64 __fastcall PiLookupInDDBCache(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rsi
  wchar_t *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  PVOID **v12; // rax
  PVOID *v14; // rcx
  PVOID *v15; // rdx
  PVOID ***v16; // rcx
  __int128 Buffer; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+50h] [rbp-38h]

  v20 = 0LL;
  Buffer = 0LL;
  PiDDBCacheTable.TableContext = 0LL;
  v18 = 0LL;
  v7 = -1073741823;
  v19 = 0LL;
  if ( !RtlIsGenericTableEmptyAvl(&PiDDBCacheTable) )
  {
    v8 = RtlImageNtHeader(a2);
    if ( v8 )
    {
      v9 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
      v10 = v9 ? (__int64)(v9 + 1) : *(_QWORD *)(a1 + 8);
      *((_QWORD *)&v18 + 1) = v10;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(v10 + 2 * v11) );
      LOWORD(v18) = 2 * v11;
      WORD1(v18) = 2 * v11;
      LODWORD(v19) = *(_DWORD *)(v8 + 8);
      v12 = (PVOID **)RtlLookupElementGenericTableAvl(&PiDDBCacheTable, &Buffer);
      if ( v12 )
      {
        v14 = *v12;
        if ( (*v12)[1] != v12
          || (v15 = v12[1], *v15 != v12)
          || (*v15 = v14, v14[1] = v15, v16 = (PVOID ***)qword_140D54F68, *(PVOID **)qword_140D54F68 != &PiDDBCacheList) )
        {
          __fastfail(3u);
        }
        *v12 = &PiDDBCacheList;
        v12[1] = (PVOID *)v16;
        *v16 = v12;
        qword_140D54F68 = (__int64)v12;
        v7 = *((_DWORD *)v12 + 9);
        if ( a4 )
          *a4 = *(_OWORD *)(v12 + 5);
      }
    }
  }
  return v7;
}
