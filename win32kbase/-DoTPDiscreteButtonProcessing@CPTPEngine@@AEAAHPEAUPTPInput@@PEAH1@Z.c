__int64 __fastcall CPTPEngine::DoTPDiscreteButtonProcessing(CPTPEngine *this, struct PTPInput *a2, int *a3, int *a4)
{
  int v4; // r9d
  int v5; // r13d
  unsigned int v8; // ecx
  int v10; // r8d
  int v11; // r14d
  _DWORD *v12; // rsi
  int v13; // edx
  int v14; // r9d
  int v15; // r12d
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // r15d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v32; // [rsp+20h] [rbp-40h]
  __int128 v33; // [rsp+28h] [rbp-38h]
  __int128 v34; // [rsp+28h] [rbp-38h]
  __int128 v35; // [rsp+28h] [rbp-38h]
  __int128 v36; // [rsp+28h] [rbp-38h]
  __int128 v37; // [rsp+40h] [rbp-20h] BYREF
  __int64 v38; // [rsp+50h] [rbp-10h]
  int v39; // [rsp+A0h] [rbp+40h]
  int v40; // [rsp+A8h] [rbp+48h]

  v4 = *((_DWORD *)this + 910);
  v5 = 0;
  v40 = 0;
  v8 = *((_DWORD *)this + 984);
  v10 = 0;
  v11 = v4 & 0x20;
  v39 = 0;
  v12 = (_DWORD *)((char *)this + 3644);
  v13 = v11 != 0;
  v14 = v4 & 0x40;
  v32 = v14;
  v15 = v14 != 0;
  if ( (unsigned __int8)(v8 & 2) >> 1 == v13 )
    goto LABEL_10;
  if ( *v12 == 3 || *v12 == 6 )
  {
    if ( !v11 )
    {
LABEL_5:
      v16 = v8;
      if ( (v8 & 0x400) != 0 )
      {
        v40 = 1;
        v16 = v8 & 0xFFFFFBFF;
      }
      goto LABEL_7;
    }
    v16 = v8 | 0x400;
  }
  else
  {
    v16 = v8;
    if ( !v11 )
      goto LABEL_5;
  }
LABEL_7:
  v5 = 1;
  v8 = (2 * v13) | v16 & 0xFFFFFFFD;
  *((_DWORD *)this + 984) = v8;
  if ( v11 )
  {
    CPTPEngine::TPAAPSetCurtainState(this, 0);
    v8 = *((_DWORD *)this + 984);
    v10 = 0;
    v14 = v32;
  }
  *a3 = 1;
LABEL_10:
  if ( (unsigned __int8)(v8 & 4) >> 2 == v15 )
  {
    v18 = 0;
  }
  else
  {
    if ( (*v12 == 3 || *v12 == 6) && v14 )
    {
      v17 = v8 | 0x800;
    }
    else
    {
      v17 = v8;
      if ( !v14 && (v8 & 0x800) != 0 )
      {
        v10 = 1;
        v39 = 1;
        v17 = v8 & 0xFFFFF7FF;
      }
    }
    v18 = 1;
    *((_DWORD *)this + 984) = v17 & 0xFFFFFFFB | (4 * v15);
    if ( v14 )
    {
      CPTPEngine::TPAAPSetCurtainState(this, 0);
      v10 = v39;
    }
    *a4 = 1;
  }
  if ( *v12 == 3 || *v12 == 6 || v40 || v10 )
    return 1LL;
  if ( v5 )
  {
    if ( !v11 )
    {
      v19 = *((_DWORD *)this + 984);
      v20 = v19;
      if ( (v19 & 0x80000) != 0 )
      {
        if ( (v19 & 0x10) != 0 && (v19 & 0x40) != 0 && (v19 & 0x100) == 0 )
        {
          *((_QWORD *)this + 488) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
          v20 = *((_DWORD *)this + 984) & 0xFFFFFFEF;
        }
        v21 = v20 & 0xFFFFFFBF;
      }
      else
      {
        if ( (v19 & 8) != 0 && (v19 & 0x20) != 0 && (v19 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 488) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
          v20 = *((_DWORD *)this + 984) & 0xFFFFFFF7;
        }
        v21 = v20 & 0xFFFFFFDF;
      }
      goto LABEL_49;
    }
    if ( *((_DWORD *)this + 903) && !_bittest((const signed __int32 *)this + 984, 0x13u) )
      *((_DWORD *)this + 903) = 0;
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
    v22 = *((_DWORD *)this + 984);
    if ( *((_DWORD *)a2 + 10) )
    {
      v21 = v22 | 0x400;
LABEL_49:
      *((_DWORD *)this + 984) = v21;
      goto LABEL_55;
    }
    if ( (v22 & 0x80000) != 0 )
    {
      v23 = v22 | 0x40;
      *((_DWORD *)this + 984) = v23;
      if ( (v23 & 0x10) == 0 )
      {
        v33 = 0LL;
        LODWORD(v33) = 6;
        v37 = v33;
        v38 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v37);
        CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 984) |= 0x10u;
      }
    }
    else
    {
      v24 = v22 | 0x20;
      *((_DWORD *)this + 984) = v24;
      if ( (v24 & 8) == 0 )
      {
        v34 = 0LL;
        LODWORD(v34) = 5;
        v37 = v34;
        v38 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v37);
        CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 984) |= 8u;
      }
    }
  }
LABEL_55:
  if ( v18 )
  {
    if ( !v32 )
    {
      v25 = *((_DWORD *)this + 984);
      v26 = v25;
      if ( (v25 & 0x80000) != 0 )
      {
        if ( (v25 & 8) != 0 && (v25 & 0x20) != 0 && (v25 & 0x80u) == 0 )
        {
          *((_QWORD *)this + 488) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
          v26 = *((_DWORD *)this + 984) & 0xFFFFFFF7;
        }
        v27 = v26 & 0xFFFFFFDF;
      }
      else
      {
        if ( (v25 & 0x10) != 0 && (v25 & 0x40) != 0 && (v25 & 0x100) == 0 )
        {
          *((_QWORD *)this + 488) = *(_QWORD *)a2;
          CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
          v26 = *((_DWORD *)this + 984) & 0xFFFFFFEF;
        }
        v27 = v26 & 0xFFFFFFBF;
      }
      goto LABEL_76;
    }
    if ( *((_DWORD *)this + 903) && _bittest((const signed __int32 *)this + 984, 0x13u) )
      *((_DWORD *)this + 903) = 0;
    if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
      CBasePTPEngine::SendInertiaOutput(this, 3LL);
    v28 = *((_DWORD *)this + 984);
    if ( *((_DWORD *)a2 + 10) )
    {
      v27 = v28 | 0x800;
LABEL_76:
      *((_DWORD *)this + 984) = v27;
      return 1LL;
    }
    if ( (v28 & 0x80000) != 0 )
    {
      v29 = v28 | 0x20;
      *((_DWORD *)this + 984) = v29;
      if ( (v29 & 8) == 0 )
      {
        v35 = 0LL;
        LODWORD(v35) = 5;
        v37 = v35;
        v38 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v37);
        CBasePTPEngine::SendMouseOutput(this, 1LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 984) |= 8u;
      }
    }
    else
    {
      v30 = v28 | 0x40;
      *((_DWORD *)this + 984) = v30;
      if ( (v30 & 0x10) == 0 )
      {
        v36 = 0LL;
        LODWORD(v36) = 6;
        v37 = v36;
        v38 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v37);
        CBasePTPEngine::SendMouseOutput(this, 3LL, *(_QWORD *)((char *)a2 + 28));
        *((_DWORD *)this + 984) |= 0x10u;
      }
    }
  }
  return 1LL;
}
