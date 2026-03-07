__int64 __fastcall CPTPEngine::SendInitialGestureFrame(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        int a4)
{
  unsigned int v4; // esi
  char *v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  unsigned int v18; // r10d
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  unsigned int v25; // r9d
  unsigned int v26; // r11d
  char *v27; // r8
  struct CContactState *v28; // rcx
  __int64 v29; // rdx
  unsigned int v30; // r11d
  _BYTE *i; // r10
  struct CContactState *v32; // rcx
  char v34; // [rsp+40h] [rbp-2A8h] BYREF
  __int64 v35; // [rsp+5Ch] [rbp-28Ch]
  __int64 v36; // [rsp+70h] [rbp-278h]
  _BYTE v37[12]; // [rsp+78h] [rbp-270h] BYREF
  char v38; // [rsp+84h] [rbp-264h] BYREF

  v4 = 0;
  v8 = &v34;
  v9 = 4LL;
  do
  {
    v10 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v8 = *(_OWORD *)a2;
    v11 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v8 + 1) = v10;
    v12 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v8 + 2) = v11;
    v13 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v8 + 3) = v12;
    v14 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v8 + 4) = v13;
    v15 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v8 + 5) = v14;
    v16 = *((_OWORD *)a2 + 7);
    a2 = (struct PTPInput *)((char *)a2 + 128);
    *((_OWORD *)v8 + 6) = v15;
    v8 += 128;
    *((_OWORD *)v8 - 1) = v16;
    --v9;
  }
  while ( v9 );
  v17 = *((_QWORD *)a2 + 14);
  v18 = 0;
  v19 = *((_OWORD *)a2 + 1);
  *(_OWORD *)v8 = *(_OWORD *)a2;
  v20 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v8 + 1) = v19;
  v21 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v8 + 2) = v20;
  v22 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v8 + 3) = v21;
  v23 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v8 + 4) = v22;
  v24 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v8 + 5) = v23;
  *((_OWORD *)v8 + 6) = v24;
  *((_QWORD *)v8 + 14) = v17;
  v25 = v36;
  if ( (_DWORD)v36 )
  {
    v26 = *((_DWORD *)this + 4);
    v27 = &v38;
    do
    {
      v28 = (CPTPEngine *)((char *)this + 400 * (*((_DWORD *)v27 - 2) % v26) + 1208);
      if ( (*(_DWORD *)v28 & 1) == 0 || (*(_DWORD *)v28 & 0x400) != 0 )
      {
        *(_DWORD *)v27 = 0;
        *(_QWORD *)(v27 + 28) = 0LL;
      }
      else
      {
        if ( (*(_DWORD *)v27 & 0x10000) != 0 )
          v4 = 1;
        else
          *(_DWORD *)v27 = *(_DWORD *)v27 & 0xFFFCFFFF | 0x10000;
        v29 = *((_QWORD *)v28 + 6);
        *((_DWORD *)v27 + 13) = *((_DWORD *)v28 + 34);
        *(_QWORD *)(v27 + 68) = *((_QWORD *)v28 + 16);
        *(_QWORD *)(v27 + 28) = v29;
        if ( v28 == a3 )
        {
          *((_QWORD *)this + 456) = v35;
          *((_QWORD *)this + 457) = v29;
        }
      }
      v25 = v36;
      ++v18;
      v27 += 96;
    }
    while ( v18 < (unsigned int)v36 );
  }
  v30 = 0;
  for ( i = v37; v30 < v25; i += 96 )
  {
    v32 = (CPTPEngine *)((char *)this + 400 * (unsigned int)(*((_DWORD *)i + 1) % *((_DWORD *)this + 4)) + 1208);
    if ( (*(_DWORD *)v32 & 1) != 0 && (*(_DWORD *)v32 & 0x400) == 0 )
    {
      CPTPEngine::FixupGestureContact(this, (struct PTPEnginePointerNode *)i, v32 == a3);
      v25 = v36;
    }
    ++v30;
  }
  CBasePTPEngine::SendGestureOutput((__int64)this, 2, a4, v25, v37);
  return v4;
}
