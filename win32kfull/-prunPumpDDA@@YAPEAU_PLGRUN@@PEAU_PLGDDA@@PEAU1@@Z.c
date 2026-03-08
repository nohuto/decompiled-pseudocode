/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C0152040
 * Callers:
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0151EE0 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0302050 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C03021C0 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0302400 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C03025B0 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C03027F0 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  _DWORD *v2; // r8
  int v3; // r10d
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // r11d
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // r11d
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // edi
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // r10d
  int v25; // edx
  __int64 v27; // [rsp+20h] [rbp+8h]
  __int64 v28; // [rsp+28h] [rbp+10h]
  __int64 v29; // [rsp+30h] [rbp+18h]
  __int64 v30; // [rsp+38h] [rbp+20h]

  v2 = (_DWORD *)((char *)a2 + 12);
  v3 = *((_DWORD *)a1 + 17);
  v29 = *(_QWORD *)((char *)a1 + 100);
  v27 = *(_QWORD *)((char *)a1 + 108);
  v6 = HIDWORD(v27);
  v28 = *(_QWORD *)((char *)a1 + 116);
  v7 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v3;
  v8 = v27;
  v30 = v7;
  if ( v3 < *((_DWORD *)a1 + 19) )
  {
    v9 = HIDWORD(v29);
    v10 = v29;
    do
    {
      if ( v10 >= v8 )
      {
        *v2 = v8;
        v11 = v10 - v8;
      }
      else
      {
        *v2 = v10;
        v11 = v8 - v10;
      }
      v2[1] = v11;
      ++*((_DWORD *)a2 + 2);
      v10 += *((_DWORD *)a1 + 81);
      v9 += *((_DWORD *)a1 + 82);
      v12 = *((_DWORD *)a1 + 83);
      if ( v9 >= v12 )
      {
        ++v10;
        v9 -= v12;
      }
      v8 += *((_DWORD *)a1 + 84);
      v6 += *((_DWORD *)a1 + 85);
      v13 = *((_DWORD *)a1 + 86);
      if ( v6 >= v13 )
      {
        ++v8;
        v6 -= v13;
      }
      v2 += 2;
      ++v3;
    }
    while ( v3 < *((_DWORD *)a1 + 19) );
  }
  v14 = HIDWORD(v28);
  v15 = v28;
  while ( v3 < *((_DWORD *)a1 + 21) )
  {
    if ( v15 >= v8 )
    {
      *v2 = v8;
      v16 = v15 - v8;
    }
    else
    {
      *v2 = v15;
      v16 = v8 - v15;
    }
    v2[1] = v16;
    ++*((_DWORD *)a2 + 2);
    v15 += *((_DWORD *)a1 + 87);
    v14 += *((_DWORD *)a1 + 88);
    v17 = *((_DWORD *)a1 + 89);
    if ( v14 >= v17 )
    {
      ++v15;
      v14 -= v17;
    }
    v8 += *((_DWORD *)a1 + 84);
    v6 += *((_DWORD *)a1 + 85);
    v18 = *((_DWORD *)a1 + 86);
    if ( v6 >= v18 )
    {
      ++v8;
      v6 -= v18;
    }
    v2 += 2;
    ++v3;
  }
  if ( v3 < *((_DWORD *)a1 + 23) )
  {
    v19 = HIDWORD(v30);
    v20 = v30;
    do
    {
      if ( v15 >= v20 )
      {
        *v2 = v20;
        v21 = v15 - v20;
      }
      else
      {
        *v2 = v15;
        v21 = v20 - v15;
      }
      v2[1] = v21;
      ++*((_DWORD *)a2 + 2);
      v15 += *((_DWORD *)a1 + 87);
      v14 += *((_DWORD *)a1 + 88);
      v22 = *((_DWORD *)a1 + 89);
      if ( v14 >= v22 )
      {
        ++v15;
        v14 -= v22;
      }
      v20 += *((_DWORD *)a1 + 90);
      v19 += *((_DWORD *)a1 + 91);
      v23 = *((_DWORD *)a1 + 92);
      if ( v19 >= v23 )
      {
        ++v20;
        v19 -= v23;
      }
      v2 += 2;
      ++v3;
    }
    while ( v3 < *((_DWORD *)a1 + 23) );
  }
  v24 = v3 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v24;
  if ( *(_DWORD *)a1 && !v24 )
  {
    if ( v15 >= v8 )
    {
      *v2 = v8;
      v25 = v15 - v8;
    }
    else
    {
      *v2 = v15;
      v25 = v8 - v15;
    }
    v2[1] = v25;
    v2 += 2;
    *((_DWORD *)a2 + 2) = 1;
  }
  return (struct _PLGRUN *)v2;
}
