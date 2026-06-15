/*
 * XREFs of sub_18013E060 @ 0x18013E060
 * Callers:
 *     sub_18013E5C0 @ 0x18013E5C0 (sub_18013E5C0.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013E060(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // rax
  int v7; // eax

  v4 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      *a2 = 0LL;
      v6 = sub_180055F40(0x30uLL);
      v4 = v6;
      if ( v6 )
      {
        *((_DWORD *)v6 + 4) = 1;
        *v6 = off_180156360;
        v6[1] = off_180156388;
        v6[4] = 0LL;
        *((_DWORD *)v6 + 10) = 0;
        v6[3] = a1;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        EnterCriticalSection((LPCRITICAL_SECTION)(v4[3] + 72LL));
        v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD *))*v4)(v4, &qword_18015F830, a2);
        v5 = 0;
        if ( v7 < 0 )
          v5 = v7;
      }
      else
      {
        v4 = 0LL;
        v5 = -2147024882;
      }
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v5;
}
