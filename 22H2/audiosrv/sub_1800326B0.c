/*
 * XREFs of sub_1800326B0 @ 0x1800326B0
 * Callers:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_180119954 @ 0x180119954 (sub_180119954.c)
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800326B0(_QWORD *a1, _DWORD *a2, int *a3, int *a4, unsigned int *a5, _OWORD **a6)
{
  unsigned int v6; // edi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  _OWORD *v14; // rbp
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // r13d
  int v18; // eax
  int v19; // ecx
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  unsigned int v24; // edi
  void *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0;
  *a1 = 0LL;
  v11 = sub_18006A18C(112LL, &unk_18019F848);
  v12 = v11;
  if ( !v11 )
    return 2147942414LL;
  v13 = qword_18019E418;
  *(_DWORD *)(v11 + 36) = 1;
  *(_QWORD *)v11 = off_1801480C0;
  *(_QWORD *)(v11 + 8) = off_180148070;
  *(_QWORD *)(v11 + 16) = off_180148050;
  *(_QWORD *)(v11 + 24) = off_180148030;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  *(_QWORD *)v12 = off_180148000;
  *(_QWORD *)(v12 + 8) = off_180147FB0;
  *(_QWORD *)(v12 + 16) = off_180147F90;
  *(_QWORD *)(v12 + 24) = off_180147F70;
  *(_QWORD *)(v12 + 56) = 0LL;
  *(_QWORD *)(v12 + 64) = 0LL;
  *(_QWORD *)(v12 + 72) = 0LL;
  *(_QWORD *)(v12 + 80) = 0LL;
  *(_QWORD *)(v12 + 88) = 0LL;
  *(_QWORD *)(v12 + 96) = 0LL;
  *(_QWORD *)(v12 + 104) = 0LL;
  v14 = *a6;
  v15 = *a4;
  v16 = *a3;
  v17 = *a5;
  *(_DWORD *)(v12 + 40) = *a2;
  *(_DWORD *)(v12 + 44) = v16;
  *(_DWORD *)(v12 + 48) = v15;
  if ( !v17 )
  {
LABEL_15:
    v24 = (**(__int64 (__fastcall ***)(__int64, void *, _QWORD *))v12)(v12, &unk_18015BD98, a1);
    goto LABEL_16;
  }
  v18 = 0;
  while ( 1 )
  {
    v19 = *(_DWORD *)(v12 + 68);
    if ( v18 != v19 )
    {
      v22 = *(_QWORD *)(v12 + 56);
      goto LABEL_12;
    }
    if ( v19 )
    {
      v20 = 2 * v18;
      if ( (v18 & 0x40000000) != 0 )
        break;
    }
    else
    {
      v20 = 1;
    }
    if ( (unsigned __int64)v20 > 0x7FFFFFF )
      break;
    v21 = o__recalloc(*(_QWORD *)(v12 + 56), v20, 16LL);
    v22 = v21;
    if ( !v21 )
      break;
    *(_QWORD *)(v12 + 56) = v21;
    v18 = *(_DWORD *)(v12 + 64);
    *(_DWORD *)(v12 + 68) = v20;
LABEL_12:
    v23 = (_OWORD *)(v22 + 16LL * v18);
    if ( v23 )
    {
      *v23 = *v14;
      v18 = *(_DWORD *)(v12 + 64);
    }
    ++v18;
    ++v6;
    ++v14;
    *(_DWORD *)(v12 + 64) = v18;
    if ( v6 >= v17 )
      goto LABEL_15;
  }
  v24 = -2147024882;
  sub_18004BD84(retaddr, 707LL, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
LABEL_16:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return v24;
}
