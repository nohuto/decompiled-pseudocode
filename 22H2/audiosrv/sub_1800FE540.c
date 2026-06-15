/*
 * XREFs of sub_1800FE540 @ 0x1800FE540
 * Callers:
 *     sub_1800FDD20 @ 0x1800FDD20 (sub_1800FDD20.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_1800FA0E0 @ 0x1800FA0E0 (sub_1800FA0E0.c)
 *     sub_1800FC184 @ 0x1800FC184 (sub_1800FC184.c)
 *     sub_1800FC614 @ 0x1800FC614 (sub_1800FC614.c)
 *     sub_1800FEDC8 @ 0x1800FEDC8 (sub_1800FEDC8.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800FE540(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v5; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp-10h] BYREF
  char v7; // [rsp+38h] [rbp-8h]
  _QWORD *v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+68h] [rbp+28h]

  v6 = (LPCRITICAL_SECTION)(a1 + 16);
  v7 = 0;
  sub_180057764((__int64)&v6);
  if ( *(_DWORD *)(a1 + 56) == 1 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 160);
    v5 = 0;
    sub_180057764((__int64)&lpCriticalSection);
    if ( !*(_BYTE *)(a1 + 248) )
    {
      *(_BYTE *)(a1 + 248) = 1;
      while ( *(_QWORD *)(a1 + 216) )
      {
        v9 = 0LL;
        v2 = (__int64 *)sub_1800FEDC8(a1 + 200, &v8);
        v3 = *v2;
        *v2 = 0LL;
        v9 = v3;
        if ( v8 )
          sub_1800FA0E0(v8);
        v8 = 0LL;
        LeaveCriticalSection(lpCriticalSection);
        v5 = 0;
        if ( (*(_BYTE *)(v3 + 8) & 0xA) != 0 )
        {
          sub_1800FC614(a1, *(_QWORD *)v3);
        }
        else if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          sub_1800FC184(a1, *(_QWORD *)v3);
        }
        sub_180057764((__int64)&lpCriticalSection);
        sub_1800FA0E0((_QWORD *)v3);
      }
      *(_BYTE *)(a1 + 248) = 0;
    }
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v7 )
    LeaveCriticalSection(v6);
}
