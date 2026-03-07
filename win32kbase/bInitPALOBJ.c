__int64 __fastcall bInitPALOBJ(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // r14
  int v4; // edx
  __int64 v5; // r8
  __int64 v6; // rsi
  int v7; // ecx
  char *SemaphoreInternal; // rax
  unsigned int v9; // r8d
  unsigned __int64 v10; // rbx
  __int64 *v11; // rbx
  __int64 v12; // rax
  unsigned int *v13; // r9
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int *v18; // rax
  unsigned int *v20; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+58h] [rbp-18h]
  unsigned int *v22; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+68h] [rbp-8h]
  __int64 *v24; // [rsp+90h] [rbp+20h] BYREF

  v1 = SGDGetSessionState(a1);
  v2 = 0;
  LODWORD(v3) = 256;
  v4 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(v1 + 24);
  *(_QWORD *)(v6 + 3944) = v6 + 4972;
  do
  {
    v7 = v4 * v4;
    ++v4;
    *(_DWORD *)(*(_QWORD *)(v6 + 3944) - v5) = v7;
    *(_DWORD *)(v5 + *(_QWORD *)(v6 + 3944)) = v7;
    v5 += 4LL;
  }
  while ( v4 < 256 );
  SemaphoreInternal = GreCreateSemaphoreInternal(0);
  *(_QWORD *)(v6 + 40) = SemaphoreInternal;
  if ( !SemaphoreInternal )
    return 0LL;
  if ( *(_WORD *)(v6 + 3852) == 768 )
  {
    v9 = *(unsigned __int16 *)(v6 + 3854);
    if ( *(_WORD *)(v6 + 3854) )
    {
      v21 = 0;
      v20 = 0LL;
      if ( (unsigned int)PALMEMOBJ::bCreatePalette(
                           (PALMEMOBJ *)&v20,
                           1,
                           v9,
                           (const unsigned int *)(v6 + 3856),
                           0,
                           0,
                           0,
                           0x500u,
                           0) )
      {
        v21 = 1;
        v10 = *(_QWORD *)v20;
        PALMEMOBJ::~PALMEMOBJ(&v20);
        goto LABEL_8;
      }
      PALMEMOBJ::~PALMEMOBJ(&v20);
    }
  }
  v10 = 0LL;
LABEL_8:
  if ( !(unsigned int)bSetStockObject(v10, 15, 0) )
    return 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v24, *(HPALETTE *)(*(_QWORD *)(v6 + 3168) + 120LL));
  v11 = v24;
  HmgSetOwner(*v24, 0, 8);
  v12 = *(_QWORD *)(v6 + 3168);
  *(_QWORD *)(v6 + 6000) = v11;
  *(_QWORD *)(v6 + 752) = *(_QWORD *)(v12 + 120);
  *(_QWORD *)(v6 + 760) = v11;
  v21 = 0;
  v20 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v20, 1, 0x100u, 0LL, 0, 0, 0, 0x400u, 1) )
  {
    PALMEMOBJ::~PALMEMOBJ(&v20);
    HmgDecrementShareReferenceCountEx((int *)v11, 0LL);
    return 0LL;
  }
  v13 = v20;
  *(_QWORD *)(v6 + 6016) = v20;
  v14 = *((_DWORD *)v11 + 7) >> 1;
  if ( (_DWORD)v14 )
  {
    v15 = 0LL;
    v16 = (unsigned int)v14;
    do
    {
      *(_DWORD *)(v15 + *((_QWORD *)v13 + 14)) = *(_DWORD *)(v15 + v11[14]);
      v15 += 4LL;
      --v16;
    }
    while ( v16 );
    do
    {
      v3 = (unsigned int)(v3 - 1);
      *(_DWORD *)(*((_QWORD *)v13 + 14) + 4 * v3) = *(_DWORD *)(v11[14] + 4LL * (unsigned int)(v3 - 236));
      --v14;
    }
    while ( v14 );
  }
  v20 = 0LL;
  PALMEMOBJ::~PALMEMOBJ(&v20);
  HmgDecrementShareReferenceCountEx((int *)v11, 0LL);
  v23 = 0;
  v22 = 0LL;
  if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v22, 1, 2u, &dword_1C0286558, 0, 0, 0, 0x2200u, 1) )
  {
    v17 = *(_QWORD *)v22;
    *(_QWORD *)(v6 + 6032) = v22;
    v23 = 1;
    *(_QWORD *)(v6 + 6024) = v17;
    v21 = 0;
    v20 = 0LL;
    if ( (unsigned int)PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v20, 8, 0, 0LL, 0, 0, 0, 0x200u, 1) )
    {
      v18 = v20;
      v20 = 0LL;
      v2 = 1;
      *(_QWORD *)(v6 + 6008) = v18;
    }
    PALMEMOBJ::~PALMEMOBJ(&v20);
  }
  PALMEMOBJ::~PALMEMOBJ(&v22);
  return v2;
}
