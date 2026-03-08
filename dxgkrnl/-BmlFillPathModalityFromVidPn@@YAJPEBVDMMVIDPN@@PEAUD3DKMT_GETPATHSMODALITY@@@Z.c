/*
 * XREFs of ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C016C630
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C016D3D0 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C016BF64 (--$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall BmlFillPathModalityFromVidPn(const struct DMMVIDPN *a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  __int64 v2; // r13
  const struct DMMVIDPN *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rbp
  char *v7; // r12
  bool v8; // cf
  unsigned int v9; // ebx
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  char v13; // r15
  struct DMMVIDPNTARGETMODESET *v14; // rdi
  __int64 v15; // rax
  struct DMMVIDPNTARGETMODESET *v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  char *v19; // rax
  unsigned int v21; // [rsp+54h] [rbp+Ch]

  v2 = *((_QWORD *)a1 + 6);
  v3 = (const struct DMMVIDPN *)*((_QWORD *)a1 + 15);
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 != (const struct DMMVIDPN *)((char *)a1 + 120) )
    v5 = (__int64)v3 - 8;
  if ( v5 )
  {
    v7 = (char *)a1 + 120;
    do
    {
      v8 = (unsigned __int16)v4 < *((_WORD *)a2 + 10);
      v9 = v4;
      while ( v8 )
      {
        v10 = (char *)a2 + 296 * v9;
        if ( (*((_QWORD *)v10 + 7) & 0x700000000000LL) == 0x700000000000LL )
        {
          if ( *(_QWORD *)(v2 + 8) == v4 )
          {
            WdLogSingleEntry0(1LL);
            v4 = 0LL;
          }
          v11 = *(_QWORD *)(v2 + 8);
          if ( *((_DWORD *)v10 + 18) == *(_DWORD *)(*(_QWORD *)(v11 + 16) + 404LL) )
          {
            if ( !v11 )
            {
              WdLogSingleEntry0(1LL);
              v4 = 0LL;
            }
            if ( *((_DWORD *)v10 + 19) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) + 408LL)
              && *((_DWORD *)v10 + 20) == *(_DWORD *)(*(_QWORD *)(v5 + 88) + 24LL)
              && *((_DWORD *)v10 + 21) == *(_DWORD *)(*(_QWORD *)(v5 + 96) + 24LL) )
            {
              v21 = HIDWORD(v4);
              LODWORD(v12) = v4;
              v13 = v4;
              if ( (*((_BYTE *)a2 + 24) & 1) != 0 && (*((_QWORD *)v10 + 7) & 0x100LL) != 0 )
              {
                v12 = *((_QWORD *)v10 + 19);
                v13 = 1;
                v21 = HIDWORD(v12);
              }
              _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(v5, (__int64)(v10 + 56));
              v14 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(v5 + 88));
              v15 = *((_QWORD *)v14 + 18);
              if ( v15 )
                v10[184] = (unsigned int)(*(_DWORD *)(v15 + 72) - 3) <= 1;
              v16 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(v5 + 96));
              v17 = *((_QWORD *)v16 + 18);
              if ( v17 )
              {
                *((_DWORD *)v10 + 65) = *(_DWORD *)(v17 + 132);
                v18 = *(_DWORD *)(v17 + 136);
                *((_QWORD *)v10 + 7) |= 8uLL;
              }
              else
              {
                *((_DWORD *)v10 + 65) = v4;
                v18 = 4;
              }
              *((_DWORD *)v10 + 66) = v18;
              if ( v13 && *((_QWORD *)v10 + 19) != __PAIR64__(v21, v12) )
                *((_QWORD *)v10 + 7) &= ~0x20000uLL;
              if ( v16 )
              {
                ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v16 + 88));
                v4 = 0LL;
              }
              if ( v14 )
              {
                ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v14 + 88));
                v4 = 0LL;
              }
              break;
            }
          }
        }
        else
        {
          WdLogSingleEntry2(3LL, v9, a2);
        }
        ++v9;
        v4 = 0LL;
        v8 = v9 < *((unsigned __int16 *)a2 + 10);
      }
      v19 = *(char **)(v5 + 8);
      v5 = (__int64)(v19 - 8);
      if ( v19 == v7 )
        v5 = v4;
    }
    while ( v5 );
  }
  return 0LL;
}
