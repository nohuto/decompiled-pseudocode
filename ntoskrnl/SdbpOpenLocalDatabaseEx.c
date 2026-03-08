/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x140A4F86C
 * Callers:
 *     SdbTagRefToTagID @ 0x140800B74 (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbOpenDatabaseEx @ 0x140A4B8F0 (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x140A4F7D4 (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x140A4FB10 (SdbResolveDatabaseEx.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, wchar_t ****a4, _DWORD *a5)
{
  unsigned int v5; // esi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  wchar_t ***v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v16; // xmm0
  int v18; // [rsp+30h] [rbp-278h] BYREF
  int v19; // [rsp+34h] [rbp-274h] BYREF
  __int128 v20; // [rsp+38h] [rbp-270h]
  wchar_t v21[264]; // [rsp+50h] [rbp-258h] BYREF

  v19 = 0;
  v5 = 0;
  v18 = 0;
  v20 = 0LL;
  v9 = *a5 >> 28;
  if ( (*a5 & 0xF0000000) == 0 )
    v9 = (unsigned int)*a5;
  if ( (_DWORD)v9 != 1 && (unsigned int)(v9 - 3) > 0xC
    || (SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9),
        (unsigned int)SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v19, (unsigned int)&v18, (__int64)v21) - 1 > 0x102) )
  {
    v12 = 1LL;
    goto LABEL_19;
  }
  if ( *(_WORD *)(a1 + 584) != 0x7FFF && (*(_DWORD *)(a1 + 552) & v18) == 0 )
  {
    v12 = 3LL;
LABEL_19:
    AslLogCallPrintf(v12);
    return v5;
  }
  v13 = SdbOpenDatabaseEx(v21, v10, v11);
  if ( v13 )
  {
    v14 = 32LL * (unsigned int)v9;
    v15 = 32 * (v9 + 2);
    *(_QWORD *)(v14 + a1 + 56) = v13;
    *(_DWORD *)(v15 + a1) = 2;
    *(_DWORD *)(a1 + 36) |= 1 << v9;
    if ( a2 )
    {
      v16 = *a2;
      *(_DWORD *)(v15 + a1) |= 1u;
      *(_OWORD *)(v14 + a1 + 40) = v16;
    }
    else
    {
      *(_OWORD *)(v14 + a1 + 40) = 0LL;
    }
    v5 = 1;
    if ( (_DWORD)v9 == 1 )
      *(_QWORD *)(a1 + 24) = v13;
    *a5 = (_DWORD)v9 << 28;
    if ( a4 )
      *a4 = v13;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return v5;
}
