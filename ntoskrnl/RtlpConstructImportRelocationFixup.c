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
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // edx
  int v22; // edi
  __int64 result; // rax
  __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int (__fastcall *v29)(__int64, unsigned __int64, __int64); // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int (__fastcall *v32)(__int64, unsigned __int64, __int64); // rax
  char v33; // al

  *(_QWORD *)a7 = 0LL;
  *(_DWORD *)(a7 + 8) = 0;
  *(_WORD *)(a7 + 12) = 0;
  if ( (*a4 & 0x1000) != 0 )
    v11 = 0x9090909090909090uLL;
  else
    v11 = 0xCCCCCCCCCCCCCCCCuLL;
  *(_QWORD *)(a7 + 2) = v11;
  *(_DWORD *)(a7 + 10) = v11;
  if ( a5 )
  {
    if ( (a6 & 1) == 0 )
      goto LABEL_10;
    v12 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v13 = *(_QWORD *)(a2 + 16);
      if ( v13 )
      {
        v14 = *(int *)(v13 + 4 * ((unsigned __int64)(unsigned int)v12 >> 13));
      }
      else
      {
        v24 = *(_QWORD *)(a2 + 24);
        if ( !v24 )
          goto LABEL_21;
        v28 = *(_QWORD *)(v24 + 8 * (v12 >> 13));
        v29 = *(unsigned int (__fastcall **)(__int64, unsigned __int64, __int64))(a2 + 40);
        v14 = v28 - *(_QWORD *)(a2 + 32);
        if ( v29 )
        {
          if ( !v29(v28, v12, 0xFFFFFFFFLL) )
            goto LABEL_21;
        }
      }
      if ( v14 && v14 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
      {
LABEL_10:
        *(_DWORD *)a7 = -1957953529;
        *(_BYTE *)(a7 + 4) = 21;
        v15 = *a4;
        if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
        {
          v16 = *(unsigned int *)(a2 + 8);
          if ( (_DWORD)v16 )
          {
            v17 = v16 + 8 * ((unsigned __int64)v15 >> 13) - (unsigned int)(a1 + 7);
            *(_WORD *)(a7 + 5) = v17;
            *(_BYTE *)(a7 + 7) = BYTE2(v17);
            *(_WORD *)a7 = 127;
            *(_BYTE *)(a7 + 8) = ((unsigned int)v16 + 8 * (v15 >> 13) - (a1 + 7)) >> 24;
          }
        }
        v18 = *a4;
        if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
        {
          v19 = *(_QWORD *)(a2 + 16);
          if ( v19 )
          {
            v20 = *(int *)(v19 + 4 * ((unsigned __int64)(unsigned int)v18 >> 13));
            goto LABEL_16;
          }
          v30 = *(_QWORD *)(a2 + 24);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v30 + 8 * (v18 >> 13));
            v32 = *(unsigned int (__fastcall **)(__int64, unsigned __int64, __int64))(a2 + 40);
            v20 = v31 - *(_QWORD *)(a2 + 32);
            if ( !v32 || v32(v31, v18, 0xFFFFFFFFLL) )
            {
LABEL_16:
              if ( v20 )
              {
                v21 = a1 + 12;
                if ( v20 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
                  goto LABEL_18;
              }
            }
          }
        }
        v21 = a1 + 12;
        LODWORD(v20) = *(_DWORD *)a2 + *(_DWORD *)(a3 + 76);
LABEL_18:
        v22 = v20 - v21;
        *(_BYTE *)(a7 + 9) = ((*a4 & 0x1000) == 0) | 0xE8;
        *(_BYTE *)(a7 + 11) = BYTE1(v22);
        *(_BYTE *)(a7 + 12) = BYTE2(v22);
        result = 3968LL;
        *(_BYTE *)(a7 + 10) = v22;
        *(_WORD *)a7 |= 0xF80u;
        *(_BYTE *)(a7 + 13) = HIBYTE(v22);
        return result;
      }
    }
  }
LABEL_21:
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)(a7 + 2) = -29876;
    v33 = -46;
    *(_BYTE *)(a7 + 4) = 21;
    *(_WORD *)(a7 + 9) = -179;
    if ( (*a4 & 0x1000) == 0 )
      v33 = -30;
    *(_BYTE *)(a7 + 11) = v33;
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
