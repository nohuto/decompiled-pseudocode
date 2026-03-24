/*
 * XREFs of MiAllocateMdlPagesByLists @ 0x140374EF4
 * Callers:
 *     MiFindPagesForMdl @ 0x14035563C (MiFindPagesForMdl.c)
 * Callees:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiPfnZeroingNeeded @ 0x1402384D0 (MiPfnZeroingNeeded.c)
 *     MiInitializePageColorBase @ 0x14023EBF0 (MiInitializePageColorBase.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiGetEnclavePage @ 0x14054A618 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiAllocateMdlPagesByLists(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7)
{
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  __int16 v11; // r11
  signed __int32 v12; // eax
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  int v15; // ebx
  __int64 v16; // r10
  unsigned __int64 v17; // rdx
  int v18; // r8d
  int v19; // edx
  unsigned __int64 EnclavePage; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  unsigned __int64 v24; // r12
  __int64 v25; // rsi
  BOOL v26; // eax
  __int64 v27; // rcx
  ULONG_PTR v28; // rdi
  int v29; // eax
  int v30; // edi
  int v31; // edi
  unsigned int v32; // esi
  unsigned int v34; // [rsp+20h] [rbp-68h]
  int v35; // [rsp+28h] [rbp-60h]
  unsigned __int64 *v36; // [rsp+30h] [rbp-58h]
  __int128 v37; // [rsp+38h] [rbp-50h] BYREF
  int v42; // [rsp+C0h] [rbp+38h]

  v8 = 0LL;
  v9 = 0LL;
  v10 = a1;
  v37 = 0LL;
  MiInitializePageColorBase(0LL, a7 + 1, (__int64)&v37);
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v37, 1u);
  v13 = 8;
  v14 = HIDWORD(v37) | v12 & DWORD2(v37);
  v15 = -1;
  v34 = v14;
  v17 = *(unsigned int *)(a2 + 40);
  v18 = v11 & 0x400;
  *(_QWORD *)&v37 = KiProcessorBlock[*(unsigned int *)(v16 + 588)];
  v35 = v18;
  v36 = (unsigned __int64 *)(a2 + 48 + 8 * (v17 >> 12));
  v19 = 1;
  v42 = 1;
  while ( 1 )
  {
    if ( v19 == 1 )
    {
      v42 = 0;
      v13 = 2 * ((v11 & 1) == 0) + 8;
    }
    if ( v18 )
      EnclavePage = MiGetEnclavePage(v10, 0LL);
    else
      EnclavePage = MiGetPage(v10, v14, v13);
    v24 = EnclavePage;
    if ( EnclavePage == -1LL )
    {
      v14 = v34;
LABEL_21:
      v32 = 1;
      goto LABEL_22;
    }
    v25 = 48 * EnclavePage - 0x58000000000LL;
    if ( EnclavePage > a5 )
      break;
    v26 = MiPfnZeroingNeeded(v25, a4);
    v27 = v9 + 1;
    if ( !v26 )
      v27 = v9;
    v9 = v27;
    if ( v15 == -1 )
      v15 = *((_DWORD *)MiSearchNumaNodeTable((v25 + 0x58000000000LL) / 48) + 2);
    v28 = (v25 + 0x58000000000LL) / 48;
    if ( *((_DWORD *)MiSearchNumaNodeTable(v28) + 2) == v15 )
    {
      if ( (*(_DWORD *)(v25 + 16) & 0x3E0LL) != 0 )
      {
        if ( (a3 & 1) == 0 )
          v13 &= ~2u;
      }
      else
      {
        v29 = v13 | 2;
        if ( (a3 & 1) == 0 )
          v29 = v13;
        v13 = v29;
      }
    }
    else
    {
      v42 = 1;
    }
    ++v8;
    v15 = *((_DWORD *)MiSearchNumaNodeTable(v28) + 2);
    *v36++ = v24;
    v30 = *((_DWORD *)MiSearchNumaNodeTable(v28) + 2);
    v31 = ((unsigned int)MiGetPfnChannel(v25) << byte_140C4DE8D) | dword_140C4DEF8 & v24 | (v30 << byte_140C4DE8C);
    v14 = v31 & ~dword_140C4DE80 | dword_140C4DE80 & (v31 + 1);
    v34 = v14;
    if ( v8 >= a6 )
      goto LABEL_21;
    v19 = v42;
    LOBYTE(v11) = a3;
    v10 = a1;
    v18 = v35;
  }
  MiReleaseFreshPage(v25, v21, v22, v23);
  v14 = v34;
  v32 = 0;
LABEL_22:
  if ( v8 )
    *(_DWORD *)(v37 + 32528) = v14;
  *(_DWORD *)(a2 + 40) += (_DWORD)v8 << 12;
  if ( v9 )
    *(_QWORD *)(a2 + 24) = 1LL;
  return v32;
}
