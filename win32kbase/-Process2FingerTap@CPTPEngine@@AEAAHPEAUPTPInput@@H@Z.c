__int64 __fastcall CPTPEngine::Process2FingerTap(CPTPEngine *this, struct PTPInput *a2, int a3)
{
  __int64 v3; // r10
  int v4; // ebx
  char *v6; // rcx
  unsigned int v7; // eax
  __int64 v9; // rdx
  __int64 *v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // r14d
  int v13; // esi
  int v14; // r10d
  __int64 v15; // r11
  int v16; // eax
  unsigned int v17; // r10d
  bool v18; // zf
  __int64 v19; // r8
  bool v20; // cc
  int v22; // eax
  int v23; // ebp
  unsigned __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  int v28; // eax
  int v29; // ecx
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // [rsp+48h] [rbp+10h] BYREF
  __int64 v34; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v34 = 0LL;
  v33 = 0LL;
  v6 = (char *)a2 + 56;
  v7 = *((_DWORD *)a2 + 12);
  if ( !v7 )
    return 0LL;
  v9 = v7;
  do
  {
    if ( *((_DWORD *)v6 + 3) )
    {
      ++v4;
      v10 = &v33;
      if ( v3 )
        v10 = &v34;
      *v10 = (__int64)v6;
      v3 = v33;
    }
    v6 += 96;
    --v9;
  }
  while ( v9 );
  if ( (unsigned int)(v4 - 1) > 1 )
    return 0LL;
  v11 = *(_DWORD *)(v3 + 4);
  v12 = *((_DWORD *)this + 4);
  v13 = *(_DWORD *)(v3 + 12);
  v14 = *((_DWORD *)this + 984);
  v15 = 400LL * (v11 % v12);
  if ( (v14 & 0x2000) == 0 )
  {
    if ( v4 != 2 )
      return 0LL;
    v23 = *(_DWORD *)(v34 + 12);
    v24 = *(_QWORD *)((char *)this + v15 + 1280);
    v25 = 400LL * (*(_DWORD *)(v34 + 4) % v12);
    v26 = *(_QWORD *)((char *)this + v25 + 1280);
    v27 = v24 - v26;
    if ( v24 < v26 )
      v27 = *(_QWORD *)((char *)this + v25 + 1280) - v24;
    if ( v27 > *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 43) / 0x3E8 )
      return 0LL;
    v28 = *(_DWORD *)((char *)this + v15 + 1208);
    if ( (v28 & 4) != 0 )
      return 0LL;
    v29 = *(_DWORD *)((char *)this + v25 + 1208);
    if ( (v29 & 4) != 0 || (v28 & 8) != 0 || (v29 & 8) != 0 )
      return 0LL;
    if ( (v13 & v23 & 0x40000) != 0 )
    {
      if ( (*((_DWORD *)this + 116) & 0x400) == 0 || (v14 & 0x10) != 0 )
        return 1LL;
      v30 = *(_QWORD *)((char *)this + v15 + 1216);
      v31 = v30 - *(_QWORD *)((char *)this + v25 + 1216);
      LODWORD(v30) = HIDWORD(v30) - HIDWORD(*(_QWORD *)((char *)this + v25 + 1216));
      v20 = (int)v30 * (int)v30 + v31 * v31 <= (unsigned __int64)*((unsigned int *)this + 86);
LABEL_20:
      if ( v20 )
        CPTPEngine::Send2FingerTap(this, a2);
      return 1LL;
    }
    if ( !*((_DWORD *)a2 + 10) )
    {
      *((_DWORD *)this + 984) = v14 | 0x2000;
      if ( (v13 & 0x40000) != 0 )
      {
        v32 = *(_QWORD *)((char *)this + v15 + 1216);
LABEL_46:
        *((_QWORD *)this + 465) = v32;
        return 1LL;
      }
      if ( (v23 & 0x40000) != 0 )
      {
        v32 = *(_QWORD *)((char *)this + v25 + 1216);
        goto LABEL_46;
      }
    }
    return 1LL;
  }
  if ( v4 == 1 )
  {
    if ( (v13 & 0x40000) != 0 && (*((_DWORD *)this + 984) & 1) == a3 )
    {
      v16 = *(_DWORD *)((char *)this + v15 + 1208);
      if ( (v16 & 4) == 0
        && (v16 & 8) == 0
        && ((v16 & 0x80u) == 0
         || *(_QWORD *)((char *)this + v15 + 1296) - *(_QWORD *)((char *)this + v15 + 1288) < *((_QWORD *)this + 12)
                                                                                            * (unsigned __int64)*((unsigned int *)this + 39)
                                                                                            / 0x3E8) )
      {
        v17 = v14 & 0xFFFFDFFF;
        v18 = (*((_DWORD *)this + 116) & 0x400) == 0;
        *((_DWORD *)this + 984) = v17;
        if ( v18 || (v17 & 0x10) != 0 )
          return 1LL;
        v19 = *(_QWORD *)((char *)this + v15 + 1216);
        v20 = (int)((HIDWORD(v19) - HIDWORD(*((_QWORD *)this + 465)))
                  * (HIDWORD(v19) - HIDWORD(*((_QWORD *)this + 465)))
                  + (v19 - *((_QWORD *)this + 465)) * (v19 - *((_QWORD *)this + 465))) <= (unsigned __int64)*((unsigned int *)this + 86);
        goto LABEL_20;
      }
    }
    if ( (v13 & 0x20000) != 0 && (*((_DWORD *)this + 984) & 1) == a3 )
    {
      v22 = *(_DWORD *)((char *)this + v15 + 1208);
      if ( (v22 & 4) == 0 && (v22 & 8) == 0 )
        return 1LL;
    }
  }
  *((_DWORD *)this + 984) = v14 & 0xFFFFDFFF;
  return 0LL;
}
