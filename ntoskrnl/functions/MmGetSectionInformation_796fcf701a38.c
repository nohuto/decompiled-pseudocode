__int64 __fastcall MmGetSectionInformation(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d
  __int128 *v11; // rdx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int *ControlAreaLoadConfig; // r8
  int v20; // eax
  int v21; // ecx
  int v22; // r10d
  int v23; // edx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  __int16 v29; // cx
  int v30; // eax
  _OWORD v31[5]; // [rsp+30h] [rbp-58h] BYREF

  memset(v31, 0, 0x48uLL);
  v6 = MiSectionControlArea(a1);
  if ( !(unsigned int)MiAweControlArea(v6) )
  {
    if ( !a2 )
    {
      v25 = ((v10 & 0x1000) << 14) | 0x8000000;
      if ( (v10 & 0x2000) == 0 )
        v25 = (v10 & 0x1000) << 14;
      if ( (v10 & 0x20) != 0 )
        v25 = 0x1000000;
      v26 = v25 | 0x200000;
      if ( (v10 & 0x40) == 0 )
        v26 = v25;
      v27 = v26 | 0x800000;
      if ( (v10 & 0x80u) == 0 )
        v27 = v26;
      v28 = v27 | 0x80000;
      if ( v10 >= 0 )
        v28 = v27;
      v29 = *(_WORD *)(*(_QWORD *)v9 + 12LL);
      v30 = v28 | 0x10000000;
      if ( v29 >= 0 )
        v30 = v28;
      v7 = v30 | 0x40000000;
      if ( (v29 & 0x4000) == 0 )
        v7 = v30;
      if ( (*(_DWORD *)(v9 + 56) & 0x20020) == 0x20020 )
        v7 |= 0x20000000u;
    }
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 4 )
      {
        if ( (v10 & 0x20) != 0 )
        {
          v11 = *(__int128 **)(*(_QWORD *)v9 + 56LL);
          v12 = *v11;
          v31[0] = *v11;
          v13 = v11[1];
          v14 = v11[2];
          v15 = v11[3];
          if ( (*(_DWORD *)(v9 + 56) & 0x20000000) != 0 )
          {
            *(_QWORD *)&v31[0] = qword_140C65680 | LOWORD(v31[0]);
            v12 = v31[0];
          }
          if ( a2 == 4 )
          {
            ControlAreaLoadConfig = (int *)MiGetControlAreaLoadConfig(v9);
            v20 = v8;
            LODWORD(v31[4]) = v8;
            v21 = v8;
            if ( ControlAreaLoadConfig )
            {
              v22 = *ControlAreaLoadConfig;
              if ( (*ControlAreaLoadConfig & 0x10) != 0 )
              {
                v20 = 1;
                LODWORD(v31[4]) = 1;
                v21 = 1;
              }
              if ( (v22 & 0x80u) != 0 )
              {
                v20 = v21 | 4;
                LODWORD(v31[4]) = v21 | 4;
                v21 |= 4u;
              }
            }
            v23 = *(_DWORD *)(v18 + 76);
            if ( (v23 & 1) != 0 )
            {
              v20 = v21 | 2;
              LODWORD(v31[4]) = v21 | 2;
              v21 |= 2u;
            }
            if ( (v23 & 2) != 0 )
            {
              v20 = v21 | 8;
              LODWORD(v31[4]) = v21 | 8;
            }
            if ( (v23 & 4) != 0 )
            {
              v20 |= 0x10u;
              LODWORD(v31[4]) = v20;
            }
            if ( (v23 & 8) != 0 )
            {
              v20 |= 0x20u;
              LODWORD(v31[4]) = v20;
            }
            if ( (v23 & 0x10) != 0 )
            {
              v20 |= 0x40u;
              LODWORD(v31[4]) = v20;
            }
            if ( (v23 & 0x20) != 0 )
              LODWORD(v31[4]) = v20 | 0x80;
            *(_OWORD *)a3 = v12;
            *(_OWORD *)(a3 + 16) = v13;
            *(_OWORD *)(a3 + 32) = v14;
            *(_OWORD *)(a3 + 48) = v15;
            *(_QWORD *)(a3 + 64) = *(_QWORD *)&v31[4];
          }
          else
          {
            *(_OWORD *)a3 = v12;
            *(_OWORD *)(a3 + 16) = v13;
            *(_OWORD *)(a3 + 32) = v14;
            *(_OWORD *)(a3 + 48) = v15;
          }
          return (unsigned int)v8;
        }
      }
      else if ( (v10 & 0x20) != 0 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 32LL);
        if ( v16 )
          v17 = *(_QWORD *)(v16 + 40);
        else
          v17 = v8;
        if ( a2 == 2 )
        {
          if ( (*(_DWORD *)(v9 + 56) & 0x20000000) != 0 )
            v17 += qword_140C65680 - *(_QWORD *)(*(_QWORD *)v9 + 32LL);
          *(_QWORD *)a3 = v17;
        }
        else
        {
          *(_QWORD *)a3 = *(_QWORD *)(*(_QWORD *)v9 + 32LL) - v17;
        }
        return (unsigned int)v8;
      }
      LODWORD(v8) = -1073741751;
    }
    else
    {
      *(_QWORD *)a3 = *(_QWORD *)(a1 + 24) << 12;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 48);
      *(_DWORD *)(a3 + 8) = v7;
    }
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
