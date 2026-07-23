/*
 * XREFs of RtlpConstructImportRelocationFixup @ 0x140214A30
 * Callers:
 *     RtlApplyImportRelocationToPage @ 0x14021476C (RtlApplyImportRelocationToPage.c)
 *     MiApplyRetpolineFixups @ 0x140214824 (MiApplyRetpolineFixups.c)
 *     RtlApplyImportRelocationToImage @ 0x1403B702C (RtlApplyImportRelocationToImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpConstructImportRelocationFixup(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v11; // rax
  int v12; // edi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdi
  int v22; // edx
  int v23; // edi
  __int64 result; // rax
  unsigned int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int (__fastcall *v30)(__int64, unsigned __int64, __int64, __int64); // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int (__fastcall *v33)(__int64, __int64, __int64, __int64); // rax
  char v34; // al

  *(_QWORD *)a7 = 0LL;
  *(_DWORD *)(a7 + 8) = 0;
  *(_WORD *)(a7 + 12) = 0;
  if ( (*a4 & 0x1000) != 0 )
    v11 = 0x9090909090909090uLL;
  else
    v11 = 0xCCCCCCCCCCCCCCCCuLL;
  v12 = a5;
  *(_QWORD *)(a7 + 2) = v11;
  *(_DWORD *)(a7 + 10) = v11;
  if ( !a5 )
    goto LABEL_20;
  if ( (a6 & 1) != 0 )
  {
    v13 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v14 = *(_QWORD *)(a2 + 16);
      if ( v14 )
      {
        v15 = *(int *)(v14 + 4 * ((unsigned __int64)(unsigned int)v13 >> 13));
      }
      else
      {
        v28 = *(_QWORD *)(a2 + 24);
        if ( !v28 )
          goto LABEL_28;
        v29 = *(_QWORD *)(v28 + 8 * (v13 >> 13));
        v30 = *(unsigned int (__fastcall **)(__int64, unsigned __int64, __int64, __int64))(a2 + 40);
        v15 = v29 - *(_QWORD *)(a2 + 32);
        if ( v30 )
        {
          if ( !v30(v29, v13, 0x80000000LL, 0xFFFFFFFFLL) )
            goto LABEL_28;
        }
      }
      if ( v15 && v15 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
        goto LABEL_10;
    }
LABEL_28:
    v12 = 0;
  }
LABEL_10:
  if ( v12 )
  {
    *(_DWORD *)a7 = -1957953529;
    *(_BYTE *)(a7 + 4) = 21;
    v16 = *a4;
    v17 = *a4;
    if ( (v16 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v18 = *(unsigned int *)(a2 + 8);
      if ( (_DWORD)v18 )
      {
        v19 = v18 + 8 * (v16 >> 13) - (unsigned int)(a1 + 7);
        *(_WORD *)(a7 + 5) = v19;
        *(_BYTE *)(a7 + 7) = BYTE2(v19);
        *(_WORD *)a7 = 127;
        *(_BYTE *)(a7 + 8) = BYTE3(v19);
        v17 = *a4;
      }
    }
    if ( (v17 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v20 = *(_QWORD *)(a2 + 16);
      if ( v20 )
      {
        v21 = *(int *)(v20 + 4 * ((unsigned __int64)v17 >> 13));
        goto LABEL_17;
      }
      v31 = *(_QWORD *)(a2 + 24);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 8 * ((unsigned __int64)v17 >> 13));
        v33 = *(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))(a2 + 40);
        v21 = v32 - *(_QWORD *)(a2 + 32);
        if ( !v33 || v33(v32, v31, 0x80000000LL, 0xFFFFFFFFLL) )
        {
LABEL_17:
          if ( v21 )
          {
            v22 = a1 + 12;
            if ( v21 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
              goto LABEL_19;
          }
        }
      }
    }
    v22 = a1 + 12;
    LODWORD(v21) = *(_DWORD *)a2 + *(_DWORD *)(a3 + 76);
LABEL_19:
    v23 = v21 - v22;
    *(_BYTE *)(a7 + 9) = ((*a4 & 0x1000) == 0) | 0xE8;
    *(_BYTE *)(a7 + 11) = BYTE1(v23);
    *(_BYTE *)(a7 + 12) = BYTE2(v23);
    result = 3968LL;
    *(_BYTE *)(a7 + 10) = v23;
    *(_WORD *)a7 |= 0xF80u;
    *(_BYTE *)(a7 + 13) = HIBYTE(v23);
    return result;
  }
LABEL_20:
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)(a7 + 2) = -29876;
    v34 = -46;
    *(_BYTE *)(a7 + 4) = 21;
    *(_WORD *)(a7 + 9) = -179;
    if ( (*a4 & 0x1000) == 0 )
      v34 = -30;
    *(_BYTE *)(a7 + 11) = v34;
  }
  else
  {
    *(_WORD *)(a7 + 2) = -184;
    if ( (*a4 & 0x1000) != 0 )
    {
      *(_BYTE *)(a7 + 4) = 21;
      *(_DWORD *)(a7 + 9) = 4464399;
      *(_BYTE *)(a7 + 13) = 0;
    }
    else
    {
      *(_BYTE *)(a7 + 4) = 37;
    }
  }
  *(_WORD *)a7 = 3975;
  v25 = *a4;
  result = *a4 & 0xFFFFE000;
  if ( (_DWORD)result != -8192 )
  {
    v26 = *(unsigned int *)(a2 + 8);
    if ( (_DWORD)v26 )
    {
      v27 = v26 + 8 * ((unsigned __int64)v25 >> 13) - (unsigned int)(a1 + 7);
      *(_WORD *)(a7 + 5) = v27;
      *(_BYTE *)(a7 + 7) = BYTE2(v27);
      result = 4095LL;
      *(_WORD *)a7 = 4095;
      *(_BYTE *)(a7 + 8) = ((unsigned int)v26 + 8 * (v25 >> 13) - (a1 + 7)) >> 24;
    }
  }
  return result;
}
