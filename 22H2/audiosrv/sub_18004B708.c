/*
 * XREFs of sub_18004B708 @ 0x18004B708
 * Callers:
 *     sub_180072420 @ 0x180072420 (sub_180072420.c)
 * Callees:
 *     sub_18004BA04 @ 0x18004BA04 (sub_18004BA04.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18004B708(__int16 *a1, __int64 a2, __int64 a3)
{
  char v5; // r14
  __int16 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h]

  v15 = a2;
  v5 = 0;
  v6 = *a1;
  v7 = 65533LL;
  if ( ((*a1 - 1) & 0xFFFD) != 0 )
  {
    if ( v6 != -2 )
      goto LABEL_6;
    v8 = *((_QWORD *)a1 + 3) - 0x10000000000001LL;
    if ( *((_QWORD *)a1 + 3) == 0x10000000000001LL )
      v8 = *((_QWORD *)a1 + 4) - 0x719B3800AA000080LL;
    if ( v8 )
      goto LABEL_6;
    goto LABEL_10;
  }
  if ( v6 == -2 )
  {
LABEL_10:
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *(_OWORD *)(a3 + 16) = *((_OWORD *)a1 + 1);
    *(_QWORD *)(a3 + 32) = *((_QWORD *)a1 + 4);
    goto LABEL_11;
  }
  sub_18004BA04((unsigned __int16)a1[1], (unsigned __int16)a1[7], (unsigned __int16)a1[7], *((_DWORD *)a1 + 1), a3);
LABEL_11:
  v11 = 0LL;
  do
  {
    if ( v5 )
      break;
    if ( word_180160330[2 * v11] == *(_WORD *)(a3 + 14)
      && (v6 != -2 || word_180160330[2 * v11 + 1] == *(_WORD *)(a3 + 18)) )
    {
      *(_WORD *)(a3 + 18) = word_180160330[2 * v11 + 1];
      v14 = a3;
      v12 = *(_QWORD *)(a2 + 56);
      if ( !v12 )
        goto LABEL_25;
      v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 16LL))(v12, &v14);
      if ( !v5 && *(_DWORD *)(a3 + 20) == 1599 )
      {
        *(_DWORD *)(a3 + 20) = 255;
        v14 = a3;
        v13 = *(_QWORD *)(a2 + 56);
        if ( !v13 )
        {
          std::_Xbad_function_call();
          __debugbreak();
LABEL_25:
          std::_Xbad_function_call();
          __debugbreak();
          JUMPOUT(0x1800A1CBBLL);
        }
        v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 16LL))(v13, &v14);
      }
    }
    v11 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v11 < 4 );
LABEL_6:
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    LOBYTE(v7) = v9 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v5;
}
