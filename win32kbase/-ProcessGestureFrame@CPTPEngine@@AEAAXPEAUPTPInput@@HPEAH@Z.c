void __fastcall CPTPEngine::ProcessGestureFrame(CPTPEngine *this, struct PTPInput *a2, int a3, int *a4)
{
  __int64 v4; // rax
  CPTPEngine *v6; // r10
  __int64 *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  _BYTE *v17; // rbp
  __int128 v18; // xmm1
  _DWORD *v19; // r9
  int v20; // edi
  _BYTE *v21; // r8
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned int v27; // ebx
  __int64 v28; // r11
  __int64 v29; // r11
  bool v30; // si
  char v31; // bp
  char v32; // r8
  char v33; // r11
  char v34; // di
  unsigned int v35; // esi
  char *v36; // r9
  __int64 v37; // rbx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  BOOL v41; // r8d
  __int64 v42; // [rsp+40h] [rbp-2C8h] BYREF
  __int64 v43; // [rsp+70h] [rbp-298h]
  _BYTE v44[12]; // [rsp+78h] [rbp-290h] BYREF
  char v45; // [rsp+84h] [rbp-284h] BYREF

  v4 = 4LL;
  v6 = this;
  v8 = &v42;
  do
  {
    v9 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v8 = *(_OWORD *)a2;
    v10 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v8 + 1) = v9;
    v11 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v8 + 2) = v10;
    v12 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v8 + 3) = v11;
    v13 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v8 + 4) = v12;
    v14 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v8 + 5) = v13;
    v15 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v8 + 6) = v14;
    v8 += 16;
    *((_OWORD *)v8 - 1) = v15;
    --v4;
  }
  while ( v4 );
  v16 = *((_QWORD *)a2 + 14);
  v17 = 0LL;
  v18 = *((_OWORD *)a2 + 1);
  v19 = 0LL;
  v20 = 0;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  v21 = v44;
  v22 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v8 + 1) = v18;
  v23 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v8 + 2) = v22;
  v24 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v8 + 3) = v23;
  v25 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v8 + 4) = v24;
  v26 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v8 + 5) = v25;
  *((_OWORD *)v8 + 6) = v26;
  v8[14] = v16;
  v27 = v43;
  if ( (_DWORD)v43 )
  {
    v28 = (unsigned int)v43;
    do
    {
      v19 = (_DWORD *)((char *)v6 + 400 * (unsigned int)(*((_DWORD *)v21 + 1) % *((_DWORD *)v6 + 4)) + 1208);
      if ( (*v19 & 1) != 0 && (*v19 & 0x400) == 0 )
      {
        ++v20;
        v17 = v21;
      }
      v21 += 96;
      --v28;
    }
    while ( v28 );
  }
  v29 = v42;
  v30 = !a3
     && *((_DWORD *)v6 + 907) > 2u
     && v42 - *((_QWORD *)v6 + 481) < *((_QWORD *)v6 + 12) * (unsigned __int64)*((unsigned int *)v6 + 99) / 0x3E8;
  if ( v20 != 1 || (*((_DWORD *)v17 + 3) & 0x40000) != 0 )
  {
    v31 = 0;
    v32 = 1;
  }
  else
  {
    v31 = 1;
    if ( (*v19 & 0x20000) == 0 )
    {
      *v19 |= 0x20000u;
      *((_QWORD *)v6 + 479) = v29;
    }
    v32 = 1;
    if ( v29 - *((_QWORD *)v6 + 479) >= *((_QWORD *)v6 + 12) * (unsigned __int64)*((unsigned int *)v6 + 61) / 0x3E8 )
    {
      *v19 &= ~0x20000u;
      v33 = 0;
LABEL_20:
      v34 = 1;
      goto LABEL_21;
    }
  }
  v33 = 0;
  if ( v30 )
    goto LABEL_20;
  v34 = 0;
LABEL_21:
  v35 = 0;
  if ( v27 )
  {
    v36 = &v45;
    do
    {
      v37 = 400LL * (unsigned int)(*((_DWORD *)v36 - 2) % *((_DWORD *)v6 + 4));
      v38 = *(_DWORD *)((char *)v6 + v37 + 1208);
      v39 = v38;
      if ( (v38 & 1) != 0 && v34 && (v38 & 2) != 0 )
      {
        v39 = v38 | 0x400;
        *(_DWORD *)((char *)v6 + v37 + 1208) = v38 | 0x400;
      }
      if ( (v39 & 1) == 0 || (v39 & 0x400) != 0 )
      {
        *(_DWORD *)v36 = 0;
        *(_QWORD *)(v36 + 28) = 0LL;
      }
      else
      {
        v40 = *(_DWORD *)v36;
        v41 = v39 < 0 || (v40 & 0x2000) != 0;
        if ( (v39 & 2) != 0 )
          *(_DWORD *)v36 = v40 & 0xFFFCFFFF | 0x10000;
        if ( v34 )
          *(_DWORD *)v36 = 0x40000;
        CPTPEngine::FixupGestureContact(v6, (struct PTPEnginePointerNode *)(v36 - 12), v41);
        v32 = 0;
        if ( !v31 )
          *(_DWORD *)((char *)v6 + v37 + 1208) &= ~0x20000u;
      }
      v27 = v43;
      ++v35;
      v36 += 96;
    }
    while ( v35 < (unsigned int)v43 );
  }
  if ( !v34 && !v32 && v33 || (*a4 = 1, !v32) )
    CBasePTPEngine::SendGestureOutput((__int64)v6, 3, a3, v27, v44);
}
