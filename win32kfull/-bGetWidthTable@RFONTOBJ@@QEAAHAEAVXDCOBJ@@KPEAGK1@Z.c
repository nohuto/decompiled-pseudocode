__int64 __fastcall RFONTOBJ::bGetWidthTable(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int16 *a6)
{
  unsigned __int16 *v6; // r13
  RFONTOBJ *v7; // rbx
  struct XDCOBJ *v8; // r10
  unsigned int v9; // r12d
  __int64 v10; // rcx
  unsigned int v11; // ecx
  const unsigned __int16 *v12; // rdi
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int); // rdi
  int v20; // edi
  __int64 v21; // rdx
  int v22; // ecx
  unsigned int v23; // edx
  __int16 v24; // r9
  unsigned __int16 *v25; // rdi
  unsigned int *v26; // r8
  signed __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rdi
  unsigned int v31; // esi
  unsigned __int16 v32; // ax
  __int64 result; // rax
  __int64 v34; // rcx
  unsigned __int16 *v35; // rdi
  unsigned int v36; // [rsp+40h] [rbp-C0h]
  __int16 v37; // [rsp+44h] [rbp-BCh]
  unsigned int v38; // [rsp+48h] [rbp-B8h]
  unsigned int v39; // [rsp+4Ch] [rbp-B4h]
  unsigned int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+54h] [rbp-ACh]
  unsigned __int16 *v42; // [rsp+58h] [rbp-A8h]
  unsigned __int16 *v43; // [rsp+60h] [rbp-A0h]
  unsigned int *v44; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v47; // [rsp+80h] [rbp-80h]
  struct _GLYPHPOS v48; // [rsp+90h] [rbp-70h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v50[24]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v51[72]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = a6;
  v7 = this;
  v8 = a2;
  v9 = 1;
  v47 = a4;
  v10 = *(_QWORD *)(*(_QWORD *)this + 96LL);
  v40 = a3;
  memset(&v48, 0, sizeof(v48));
  if ( !*(_QWORD *)(v10 + 3088) )
  {
    if ( a5 )
    {
      v34 = a5;
      v35 = a6;
      while ( v34 )
      {
        *v35++ = -1;
        --v34;
      }
    }
    v9 = 0;
    goto LABEL_20;
  }
  v42 = a6;
  v11 = a5;
  v39 = a5;
  v12 = a4;
  v43 = a4;
  if ( !a5 )
    goto LABEL_19;
  v13 = a3;
  if ( a3 >= a5 )
    v13 = a5;
  do
  {
    v14 = 70;
    if ( v13 )
    {
      if ( v13 < 0x46 )
        v14 = v13;
      v15 = 0;
    }
    else
    {
      v15 = 2;
      if ( v11 < 0x46 )
        v14 = v11;
    }
    v38 = v15;
    RFONTOBJ::vXlatGlyphArray(v7, v12, v14, v51, v15, 0);
    v16 = *(_QWORD *)v7;
    v17 = *(_QWORD *)(*(_QWORD *)v7 + 128LL);
    v18 = *(_QWORD *)(*(_QWORD *)v7 + 112LL);
    v49 = v17;
    v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int *, unsigned __int16 *, unsigned int))(*(_QWORD *)(v17 + 88) + 3088LL);
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v50, (struct PFFOBJ *)&v49);
    v41 = v19(v18, v16, 1LL, v51, v42, v14);
    v20 = v41;
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v50);
    v7 = this;
    v21 = *(_QWORD *)this;
    v22 = *(_DWORD *)(*(_QWORD *)this + 712LL);
    if ( v41 == -1 )
    {
      *(_DWORD *)(v21 + 712) = v22 & 0xFFFFFFBF;
      return 0xFFFFFFFFLL;
    }
    if ( (v22 & 0x40) != 0 )
    {
      *(_DWORD *)(v21 + 712) = v22 & 0xFFFFFFBF;
      v23 = 0;
      v36 = 0;
      v24 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 116LL);
      v37 = v24;
      if ( v14 )
      {
        v25 = v42;
        v26 = v51;
        v44 = v51;
        v27 = (char *)v43 - (char *)v42;
        while ( 1 )
        {
          if ( *v26 == *(_DWORD *)(*(_QWORD *)this + 460LL) )
          {
            v32 = *(unsigned __int16 *)((char *)v25 + v27);
            if ( v32 != v24 )
            {
              if ( v38 != 2 )
              {
                if ( (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v32)
                  || (unsigned int)RFONTOBJ::bIsSystemTTGlyph(this, *(unsigned __int16 *)((char *)v25 + v27)) )
                {
                  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v48, &v43[v36], a2, 0LL) )
                    return 0xFFFFFFFFLL;
                  v23 = v36;
                  v26 = v44;
                  *v25 = WORD2(v48.pgdf[1].ppo);
                  goto LABEL_13;
                }
                v23 = v36;
                v26 = v44;
              }
              v9 = 0;
              *v25 = -1;
            }
          }
LABEL_13:
          v24 = v37;
          ++v23;
          ++v26;
          v36 = v23;
          ++v25;
          v44 = v26;
          if ( v23 >= v14 )
          {
            v20 = v41;
            break;
          }
        }
      }
    }
    v9 &= v20;
    v11 = v39 - v14;
    v28 = 2LL * v14;
    v39 -= v14;
    v42 = (unsigned __int16 *)((char *)v42 + v28);
    v12 = &v43[(unsigned __int64)v28 / 2];
    v43 = (unsigned __int16 *)((char *)v43 + v28);
    v29 = v13 - v14;
    if ( !v13 )
      v29 = 0;
    v13 = v29;
  }
  while ( v11 );
  a3 = v40;
  v6 = a6;
  a4 = v47;
  v8 = a2;
LABEL_19:
  if ( !v9 )
  {
LABEL_20:
    v30 = 0LL;
    v31 = a3;
    if ( a3 >= a5 )
      v31 = a5;
    while ( (unsigned int)v30 < v31 )
    {
      if ( v6[v30] == 0xFFFF )
      {
        if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)1, &v48, &a4[v30], v8, 0LL) )
          return 0xFFFFFFFFLL;
        v6[v30] = WORD2(v48.pgdf[1].ppo);
      }
      a4 = v47;
      v30 = (unsigned int)(v30 + 1);
      v8 = a2;
    }
    a3 = v40;
  }
  if ( a5 != a3 )
    return v9;
  result = 0xFFFFFFFFLL;
  if ( v9 != -1 )
    return 1LL;
  return result;
}
