/*
 * XREFs of CmpGenerateFlushControlData @ 0x1406BF454
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 * Callees:
 *     CmpIsWriteQueueActive @ 0x140244040 (CmpIsWriteQueueActive.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140730814 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvIsCurrentLogSwappable @ 0x140732440 (HvIsCurrentLogSwappable.c)
 *     HvGetHiveLogFileStatus @ 0x1407F7674 (HvGetHiveLogFileStatus.c)
 */

char __fastcall CmpGenerateFlushControlData(__int64 a1, char a2, int *a3)
{
  int *v3; // r14
  char v7; // cl
  _DWORD *v8; // r11
  int v9; // r10d
  char v10; // al
  _BYTE *v11; // rdx
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // edx
  int v21; // edx
  char v22; // r8
  int v23; // edx
  int v24; // edx

  v3 = a3 + 2;
  *(_QWORD *)a3 = 0LL;
  a3[2] = 0;
  a3[5] = 0;
  a3[3] = 0;
  v7 = *(_BYTE *)(a1 + 195);
  if ( !v7 )
  {
    v8 = (_DWORD *)(a1 + 104);
    if ( !*(_DWORD *)(a1 + 104) && !*(_DWORD *)(a1 + 128) )
    {
      v10 = 0;
      v9 = 0;
      goto LABEL_6;
    }
  }
  v8 = (_DWORD *)(a1 + 104);
  if ( !*(_DWORD *)(a1 + 104) )
  {
    v9 = 0;
    v10 = 1;
    if ( !v7 )
    {
LABEL_6:
      v11 = (_BYTE *)(a1 + 194);
      v12 = 0;
      if ( !v10 )
        goto LABEL_9;
      goto LABEL_7;
    }
  }
  v16 = 9;
  *a3 = 9;
  if ( *(_BYTE *)(a1 + 194) )
  {
    v16 = 27;
    *a3 = 27;
  }
  if ( *(_DWORD *)(a1 + 4228) )
    *a3 = v16 | 0x82;
  a3[6] = HvGetEffectiveLogSizeCapForHive(a1);
  v12 = v9;
  v11 = (_BYTE *)(a1 + 194);
LABEL_7:
  if ( (a2 & 4) != 0 )
  {
    v9 = v12 | 0x42;
    *a3 = v12 | 0x42;
  }
LABEL_9:
  v13 = *(_DWORD *)(a1 + 160);
  if ( (v13 & 2) == 0 )
  {
    LOBYTE(v13) = (CmpGlobalFlushControlFlags & 1) == 0;
    if ( (((*(_DWORD *)(a1 + 4112) & 0x800) == 0) & (unsigned __int8)v13) != 0 )
    {
      if ( (a2 & 8) != 0 && (!*v11 || (v9 & 0x10) != 0) )
      {
        v19 = v9 | 0x107;
        *a3 = v19;
        if ( (v19 & 8) != 0 )
        {
          HvGetHiveLogFileStatus(a1, (unsigned int)a3[6], v3);
          v13 = *v3;
          if ( (*v3 & 0xC) != 0 )
            *a3 |= 0x400u;
        }
        return v13;
      }
      if ( (v9 & 0x48) == 8 )
      {
        HvGetHiveLogFileStatus(a1, (unsigned int)a3[6], v3);
        v13 = *v3;
        if ( (*v3 & 1) != 0 )
        {
          *a3 |= 2u;
          return v13;
        }
        if ( (v13 & 0xA) != 0 )
        {
          *a3 |= 0x42u;
        }
        else if ( (v13 & 4) != 0 )
        {
          *a3 |= 2u;
          if ( (unsigned __int8)HvIsCurrentLogSwappable(a1) )
            v24 = v23 | 0x22;
          else
            v24 = v23 | 0x42;
          *a3 = v24;
        }
      }
      v14 = *a3;
      if ( (*a3 & 0x40) == 0 )
        goto LABEL_17;
      LOBYTE(v13) = CmpIsWriteQueueActive((_QWORD *)(a1 + 4208));
      if ( (_BYTE)v13 )
        return v13;
      if ( (*v3 & 8) != 0 )
      {
        v14 = v20 | 0x504;
      }
      else
      {
        *a3 = v20 | 1;
        if ( (unsigned __int8)HvIsCurrentLogSwappable(a1) )
        {
          v14 = v21 | 0x21;
        }
        else
        {
          v14 = v21 | 5;
          *a3 = v14;
          if ( (v22 & 4) == 0 )
            goto LABEL_17;
          v14 |= 0x400u;
        }
      }
      *a3 = v14;
LABEL_17:
      if ( (v14 & 0x48) == 8 )
      {
        v15 = v14;
        if ( !*(_DWORD *)(a1 + 128) )
        {
          v15 = v14 | 0x800;
          *a3 = v14 | 0x800;
        }
        v14 = v15;
        if ( (*v3 & 0x14) != 0 )
        {
          v14 = v15 | 0x1000;
          *a3 = v15 | 0x1000;
        }
      }
      v13 = *(_DWORD *)(a1 + 4224);
      if ( (v13 & 1) == 0 )
      {
        if ( *(_QWORD *)(a1 + 1544) )
        {
          LOBYTE(v13) = (a2 & 0x20) == 0;
          if ( (((v14 & 8) == 0) & (unsigned __int8)v13) == 0 )
            *a3 = v14 | 0x202;
        }
      }
      return v13;
    }
  }
  if ( *v8 || *(_BYTE *)(a1 + 195) )
  {
    v17 = v9 | 0x46;
    *a3 = v17;
    if ( *v11 )
      v17 |= 0x10u;
    v18 = v17 | 0x500;
  }
  else
  {
    LOBYTE(v13) = (a2 & 0x20) != 0;
    if ( (((*(_BYTE *)(a1 + 4224) & 1) == 0) & (unsigned __int8)v13) == 0 )
      return v13;
    v18 = v9 | 0x202;
  }
  *a3 = v18;
  return v13;
}
