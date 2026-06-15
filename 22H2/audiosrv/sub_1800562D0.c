/*
 * XREFs of sub_1800562D0 @ 0x1800562D0
 * Callers:
 *     sub_1800561E0 @ 0x1800561E0 (sub_1800561E0.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180056CA8 @ 0x180056CA8 (sub_180056CA8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800562D0(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rbx
  _DWORD *v5; // rax
  int v6; // edi
  int v7; // eax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v5 = sub_180055F40(0xB8uLL);
      v4 = v5;
      if ( v5 )
      {
        v5[4] = 1;
        *(_QWORD *)v5 = off_180147278;
        *((_QWORD *)v5 + 1) = off_180147250;
        *((_QWORD *)v5 + 3) = 0LL;
        *((_QWORD *)v5 + 6) = 0LL;
        *((_QWORD *)v5 + 7) = 7LL;
        *((_WORD *)v5 + 16) = 0;
        *((_QWORD *)v5 + 10) = 0LL;
        *((_QWORD *)v5 + 11) = 7LL;
        *((_WORD *)v5 + 32) = 0;
        v5[28] = 0;
        *((_QWORD *)v5 + 17) = 0LL;
        *((_QWORD *)v5 + 18) = 7LL;
        *((_WORD *)v5 + 60) = 0;
        *((_QWORD *)v5 + 21) = 0LL;
        *((_QWORD *)v5 + 22) = 7LL;
        *((_WORD *)v5 + 76) = 0;
        v6 = sub_180056CA8(v5, a1);
        if ( v6 >= 0 )
        {
          v7 = (**(__int64 (__fastcall ***)(_DWORD *, __int64 *, _QWORD *))v4)(v4, &qword_18015BB08, a2);
          v6 = 0;
          if ( v7 < 0 )
            v6 = v7;
        }
      }
      else
      {
        v4 = 0LL;
        v6 = -2147024882;
      }
    }
    else
    {
      v6 = -2147467261;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  if ( v4 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v6;
}
