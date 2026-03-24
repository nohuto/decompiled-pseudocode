/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1C012D500
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C012C790 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C025C234 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3A4 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall PopulateDisplayModeFromPresentPath(
        unsigned int *a1,
        unsigned int *a2,
        int a3,
        signed int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        _BYTE *a10)
{
  __int64 v11; // r15
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  char v16; // al
  unsigned __int64 v17; // rdi
  unsigned int v18; // ebp
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  int v21; // ebp
  unsigned __int64 v22; // rsi
  unsigned __int128 v23; // rax
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned int v26; // r12d
  bool v27; // cf
  unsigned int v28; // r10d
  unsigned int *v29; // r9
  __int64 v30; // rbx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // r8
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rax

  v11 = a3;
  *(_DWORD *)(a9 + 8) = a1[7];
  *(_DWORD *)a9 = a1[4];
  *(_DWORD *)(a9 + 4) = a1[5];
  *(_DWORD *)(a9 + 24) = (int)(a2[14] << 29) >> 29;
  v12 = *(_DWORD *)(a9 + 36) & 0xFFFFFFFC;
  *a10 = 0;
  v13 = v12 | a5 & 1;
  v14 = *(_DWORD *)(a9 + 40);
  *(_DWORD *)(a9 + 36) = v13;
  v15 = a8 & 0xF | v14 & 0xFFFFFF80 | (a6 != 0 ? 0x40 : 0);
  v16 = 0;
  if ( a7 )
    v16 = 0x80;
  *(_DWORD *)(a9 + 40) = (unsigned __int8)(v16 | v15 & 0x7F);
  v17 = *(_QWORD *)(a2 + 7);
  *(_QWORD *)(a9 + 16) = v17;
  v18 = a2[14];
  v19 = HIDWORD(v17);
  v20 = HIDWORD(v17);
  if ( ((v18 >> 3) & 0x3F) != 0 )
  {
    v39 = v19 * ((a2[14] >> 3) & 0x3F);
    *(_DWORD *)(a9 + 20) = v39;
    v19 = v39;
    v18 = a2[14];
    LODWORD(v20) = v39;
  }
  v21 = (int)(v18 << 29) >> 29;
  if ( !(_DWORD)v19 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v19, a2);
    WdLogEvent5_WdAssertion(v40);
    v19 = *(unsigned int *)(a9 + 20);
    LODWORD(v20) = *(_DWORD *)(a9 + 20);
  }
  v22 = *(unsigned int *)(a9 + 16);
  *((_QWORD *)&v23 + 1) = 0x624DD2F1A9FBE77LL;
  *a10 = 0;
  v24 = (unsigned int)v19;
  if ( (_DWORD)v19 )
  {
    if ( (unsigned int)v19 == 1000LL )
    {
      v19 = (unsigned __int64)(((v22 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)
                             + ((unsigned __int64)((unsigned int)v22
                                                 - ((v22 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)) >> 1)) >> 9;
      v25 = (unsigned int)v22 - 1000 * v19;
    }
    else
    {
      v25 = v22 % (unsigned int)v19;
      v19 = v22 / (unsigned int)v19;
    }
    v24 -= v25;
    v26 = v19 + 1;
    v27 = v25 < v24;
    *((_QWORD *)&v23 + 1) = 0x624DD2F1A9FBE77LL;
    if ( v27 )
      v26 = v19;
  }
  else
  {
    v26 = -1;
  }
  v28 = 0;
  v29 = (unsigned int *)&unk_1C0077FA0;
  while ( 1 )
  {
    if ( (_DWORD)v20 )
    {
      v24 = v29[1];
      if ( (_DWORD)v24 )
      {
        v30 = *v29;
        v31 = 100000 * v22;
        v19 = (unsigned int)v20 == 1000LL ? v31 / 0x3E8 : v31 / (unsigned int)v20;
        v32 = v29[1];
        v33 = 99950 * v30;
        if ( v32 == 1001 )
        {
          v23 = v33 * (unsigned __int128)0x5E1D27A3EE9C011uLL;
          v24 = v33 / 0x3E9;
        }
        else
        {
          *((_QWORD *)&v23 + 1) = v33 % v32;
          v24 = v33 / v32;
        }
        if ( v19 >= v24 )
        {
          v34 = 100050 * v30;
          if ( v32 == 1001 )
          {
            v23 = v34 * (unsigned __int128)0x5E1D27A3EE9C011uLL;
            v24 = v34 / 0x3E9;
          }
          else
          {
            *((_QWORD *)&v23 + 1) = v34 % v32;
            v24 = v34 / v32;
          }
          if ( v19 <= v24 )
            break;
        }
      }
    }
    ++v28;
    v29 += 2;
    if ( v28 >= 6 )
      goto LABEL_28;
    *((_QWORD *)&v23 + 1) = 0x624DD2F1A9FBE77LL;
  }
  *((_QWORD *)&v23 + 1) = (unsigned int)v22 % (unsigned int)v20;
  if ( (unsigned int)v22 / (unsigned int)v20 != v26 )
  {
    v19 = (unsigned __int64)a10;
    *a10 = 1;
  }
  v26 = (unsigned int)v22 / (unsigned int)v20;
LABEL_28:
  if ( (unsigned int)(v21 - 2) <= 1 )
    v26 >>= 1;
  *(_DWORD *)(a9 + 12) = v26;
  switch ( (_DWORD)v11 )
  {
    case 1:
      goto LABEL_31;
    case 2:
      *(_DWORD *)(a9 + 32) = 2;
      break;
    case 3:
      *(_DWORD *)(a9 + 32) = 1;
      break;
    default:
      if ( (int)v11 <= 3 || (int)v11 > 5 && (_DWORD)v11 != 255 )
      {
        v41 = WdLogNewEntry5_WdWarning(v19, *((_QWORD *)&v23 + 1), v24);
        *(_QWORD *)(v41 + 24) = v11;
        WdLogEvent5_WdWarning(v41);
        if ( (_DWORD)v11 == 253 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v42, *((_QWORD *)&v23 + 1));
          *(_QWORD *)(v43 + 24) = 156LL;
          WdLogEvent5_WdAssertion(v43);
        }
      }
LABEL_31:
      *(_DWORD *)(a9 + 32) = 0;
      break;
  }
  v35 = a4;
  *(_QWORD *)&v23 = (unsigned int)(a4 - 5);
  if ( (unsigned int)v23 <= 0xB )
  {
    *(_QWORD *)&v23 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(a4);
    v35 = ((int)v24 + (int)v23 - 2) % 4 + 1;
  }
  v36 = v35 - 1;
  if ( v36 )
  {
    v37 = v36 - 1;
    if ( !v37 )
    {
      *(_DWORD *)(a9 + 28) = 2;
      goto LABEL_40;
    }
    v38 = (unsigned int)(v37 - 1);
    if ( !(_DWORD)v38 )
    {
      *(_DWORD *)(a9 + 28) = 3;
      goto LABEL_40;
    }
    if ( (_DWORD)v38 == 1 )
    {
      *(_DWORD *)(a9 + 28) = 4;
      goto LABEL_40;
    }
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, *((_QWORD *)&v23 + 1), v24);
    v44[3] = a4;
    v44[4] = *a1;
    v44[5] = *a2;
    *(_QWORD *)&v23 = WdLogEvent5_WdWarning(v44);
  }
  *(_DWORD *)(a9 + 28) = 1;
LABEL_40:
  if ( a1[1] != 3 )
  {
    if ( a1[1] != 4 )
      return v23;
    *(_DWORD *)(a9 + 40) |= 0x20u;
  }
  *(_DWORD *)(a9 + 40) |= 0x10u;
  *(_DWORD *)(a9 + 36) |= 1u;
  return v23;
}
