/*
 * XREFs of sub_1800D2B78 @ 0x1800D2B78
 * Callers:
 *     sub_1800DCE20 @ 0x1800DCE20 (sub_1800DCE20.c)
 * Callees:
 *     sub_18002EAA8 @ 0x18002EAA8 (sub_18002EAA8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D2B78(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  __int64 v4; // r11
  _QWORD *v5; // r10
  int v6; // edx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a4;
  v5 = (_QWORD *)a1;
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 92) )
  {
    if ( (_DWORD)a2 )
    {
      do
      {
        if ( !sub_18002EAA8(*a3) )
        {
          v6 = 985;
          goto LABEL_3;
        }
        a3 = (float *)(v11 + 4);
      }
      while ( v9 + 1 < (unsigned int)a2 );
      v12 = (_DWORD *)v5[14];
      v13 = v10 - (_QWORD)v12;
      v14 = (unsigned int)a2;
      do
      {
        *v12 = *(_DWORD *)((char *)v12 + v13);
        ++v12;
        --v14;
      }
      while ( v14 );
    }
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v5 + 120LL))(v5, a2, v4);
    return 0LL;
  }
  else
  {
    v6 = 981;
LABEL_3:
    sub_18004BD84((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", -2147024809);
    return 2147942487LL;
  }
}
