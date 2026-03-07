__int64 __fastcall CPTPEngine::ProcessTapsFor3orMoreContacts(CPTPEngine *this, struct PTPInput *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v4; // esi
  unsigned int v5; // r10d
  char *v8; // rdx
  int v9; // r15d
  char *v10; // r8
  unsigned int v11; // eax
  char *v12; // r10
  int v13; // r14d
  unsigned int v14; // r11d
  int v15; // r13d
  int *v16; // rdx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int128 v24; // [rsp+20h] [rbp-40h]
  __int128 v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]

  v3 = *((_DWORD *)this + 984);
  v4 = 1;
  v5 = a3;
  if ( (v3 & 1) != 0 || (v3 & 2) != 0 || (v3 & 4) != 0 )
    return 0LL;
  v8 = (char *)this + 1208;
  v9 = 0;
  v10 = (char *)this + 3608;
  while ( v8 != v10 )
  {
    if ( (*(_DWORD *)v8 & 1) != 0 )
    {
      if ( CPTPEngine::SuppressContactForMultiFingerTap(this, (const struct CContactState *)v8) )
      {
        ++v9;
      }
      else if ( *((_QWORD *)v8 + 9) < *((_QWORD *)this + 467) )
      {
        v4 = 0;
      }
    }
    v8 += 400;
  }
  v11 = *((_DWORD *)this + 904);
  if ( (v11 <= 2 || v5 >= v11) && (v3 & 0x1000000) == 0 )
    return 0LL;
  v12 = (char *)a2 + 56;
  v13 = 0;
  v14 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_34;
  while ( 1 )
  {
    v15 = v13;
    if ( !*((_DWORD *)v12 + 3)
      || CPTPEngine::SuppressContactForMultiFingerTap(
           this,
           (CPTPEngine *)((char *)this + 400 * (unsigned int)(*((_DWORD *)v12 + 1) % *((_DWORD *)this + 4)) + 1208)) )
    {
      v3 = *((_DWORD *)this + 984);
      goto LABEL_30;
    }
    v19 = *v16;
    if ( (*v16 & 4) != 0 || (v19 & 0x10) != 0 || (v19 & 8) != 0 )
      break;
    if ( v17 )
    {
      if ( (v19 & 0x40000) == 0 )
      {
        *((_DWORD *)this + 984) &= ~0x1000000u;
        v3 = *((_DWORD *)this + 984);
        goto LABEL_34;
      }
    }
    else
    {
      *v16 = v19 | 0x40000;
    }
    ++v13;
    v3 = *((_DWORD *)this + 984);
    if ( (*((_DWORD *)v12 + 3) & 0x48000) != 0x40000 )
      v13 = v15;
    if ( (*((_DWORD *)this + 984) & 0x1000000) == 0 && v13 )
    {
      v3 |= 0x1000000u;
      v20 = *((_DWORD *)this + 904) - v9;
      *((_DWORD *)this + 984) = v3;
      *((_DWORD *)this + 905) = v20;
    }
LABEL_30:
    ++v14;
    v12 += 96;
    if ( v14 >= *((_DWORD *)a2 + 12) )
      goto LABEL_34;
  }
  v3 = v18 & 0xFEFFFFFF;
  *((_DWORD *)this + 984) = v3;
LABEL_34:
  if ( (v3 & 0x1000000) == 0 )
    return 0LL;
  CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 903);
  v21 = *((_DWORD *)this + 984);
  if ( (v21 & 8) != 0 || (v21 & 0x10) != 0 )
  {
    *((_DWORD *)this + 984) = v21 & 0xFEFFFFFF;
    return 0LL;
  }
  if ( v13 == *((_DWORD *)a2 + 12) - v9 )
  {
    v22 = *((_DWORD *)this + 905);
    if ( v22 == 3 )
    {
      CBasePTPEngine::SendShellOutput(this, 0LL);
      v24 = 0LL;
      LODWORD(v24) = 3;
      goto LABEL_42;
    }
    if ( v22 == 4 )
    {
      CBasePTPEngine::SendShellOutput(this, 1LL);
      v24 = 0LL;
      LODWORD(v24) = 4;
LABEL_42:
      v25 = v24;
      v26 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v25);
    }
    else if ( v22 == 2 && (*((_DWORD *)this + 116) & 0x400) != 0 )
    {
      if ( v4 )
        CPTPEngine::Send2FingerTap(this, a2);
    }
    *((_DWORD *)this + 984) &= ~0x1000000u;
    CPTPEngine::ResetDragThresholds(this, a2);
  }
  return 1LL;
}
