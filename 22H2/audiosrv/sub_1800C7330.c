/*
 * XREFs of sub_1800C7330 @ 0x1800C7330
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BEA04 @ 0x1800BEA04 (sub_1800BEA04.c)
 *     sub_1800C66A4 @ 0x1800C66A4 (sub_1800C66A4.c)
 *     sub_1800C7054 @ 0x1800C7054 (sub_1800C7054.c)
 *     sub_1800CA560 @ 0x1800CA560 (sub_1800CA560.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C7330(__int64 a1, int a2)
{
  int v2; // r13d
  __int64 v3; // rsi
  unsigned int v4; // r12d
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // r14
  _BYTE *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // r15
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+38h] [rbp-70h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int64 v15; // [rsp+50h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+58h] [rbp-50h]
  ATL::CAtlException *v17; // [rsp+68h] [rbp-40h] BYREF
  int v20; // [rsp+C0h] [rbp+18h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  v15 = a1 + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  lpCriticalSection = v5;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x66u, (__int64)&unk_18015DEF0, 0LL);
  }
  v6 = *(_QWORD *)(v3 + 88);
  while ( 1 )
  {
    LODWORD(v6) = v6 - 1;
    v20 = v6;
    if ( (int)v6 < 0 )
      break;
    v7 = (int)v6;
    v12 = (int)v6;
    if ( (unsigned __int64)(int)v6 >= *(_QWORD *)(v3 + 88) )
      sub_1800B8610(-2147024809);
    v8 = *(_BYTE **)(*(_QWORD *)(v3 + 80) + 8LL * (int)v6);
    if ( !v8[128] )
    {
      if ( v2 == -1 )
        goto LABEL_15;
      if ( v2 == 1 )
      {
        if ( v8[52] )
          goto LABEL_15;
      }
      else if ( !v2 && v8[53] )
      {
LABEL_15:
        v9 = (struct _RTL_CRITICAL_SECTION *)(v3 + 112);
        v14 = v3 + 112;
        EnterCriticalSection((LPCRITICAL_SECTION)(v3 + 112));
        try
        {
          v4 = 0;
          v13 = v3 + 80;
          if ( (unsigned __int64)(int)v6 >= *(_QWORD *)(v3 + 88) )
            sub_1800B8610(-2147024809);
          sub_1800C66A4((_QWORD *)(v3 + 152), (_QWORD *)(*(_QWORD *)(v3 + 80) + 8LL * (int)v6));
        }
        catch ( ATL::CAtlException *v17 )
        {
          v11 = v17;
          if ( *(_DWORD *)v17 == -1073741571 )
            o__resetstkoflw();
          v4 = *(_DWORD *)v11;
          if ( *(int *)v11 < 0
            && off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800BEA04(*((_QWORD *)off_18019C348 + 2), 0x67u, (__int64)&unk_18015DEF0, 0LL);
          }
          v7 = v12;
          v9 = (struct _RTL_CRITICAL_SECTION *)(v3 + 112);
          LODWORD(v6) = v20;
          v2 = a2;
          v3 = a1;
        }
        sub_1800CA560(v13, v7);
        if ( v14 )
          LeaveCriticalSection(v9);
      }
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  sub_1800C7054(v3 - 16);
  return v4;
}
