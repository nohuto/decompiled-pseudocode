/*
 * XREFs of ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x1C0117A70
 * Callers:
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C01175B4 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0117C98 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?efstyCompute@PFEOBJ@@QEAA?AW4_ENUMFONTSTYLE@@XZ @ 0x1C0117CEC (-efstyCompute@PFEOBJ@@QEAA-AW4_ENUMFONTSTYLE@@XZ.c)
 */

__int64 __fastcall FHOBJ::bAddPFELink(
        FHOBJ *this,
        struct _HASHBUCKET *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        struct PFEOBJ *a5,
        int a6)
{
  __int64 v7; // r12
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // r10d
  unsigned __int8 v30; // al

  v7 = a3;
  v10 = (_QWORD *)Win32AllocPoolZInit(16LL, 1802398791LL);
  v13 = v10;
  if ( !v10 )
    return 0;
  *v10 = 0LL;
  v14 = *(_QWORD *)a5;
  v10[1] = *(_QWORD *)a5;
  if ( a2 && (a6 || (*((_DWORD *)a2 + 8) & 2) == 0) )
  {
    if ( (unsigned int)PFEOBJ::efstyCompute(a5, v11, v14, v12) || (*((_DWORD *)a2 + 8) & 4) != 0 )
    {
      **((_QWORD **)a2 + 2) = v13;
      *((_QWORD *)a2 + 2) = v13;
    }
    else
    {
      *v13 = *((_QWORD *)a2 + 1);
      *((_DWORD *)a2 + 8) |= 4u;
      *((_QWORD *)a2 + 1) = v13;
    }
    if ( (PFEOBJ::flFontType(a5) & 4) != 0 )
      ++*((_DWORD *)a2 + 6);
    v30 = PFEOBJ::flFontType(a5);
    if ( (v30 & (unsigned __int8)v29) != 0 )
      *((_DWORD *)a2 + 7) += v29;
    return v29;
  }
  v15 = Win32AllocPoolZInit(128LL, 1650550855LL);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)(v15 + 16) = v13;
    *(_QWORD *)(v15 + 8) = v13;
    v17 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v17 + 24) )
    {
      v18 = *(_QWORD *)(v17 + 32);
      *(_QWORD *)(v16 + 48) = 0LL;
      *(_QWORD *)(v16 + 40) = v18;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 48LL) = v16;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v16;
    }
    else
    {
      *(_QWORD *)(v17 + 24) = v16;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v16;
      *(_QWORD *)(v16 + 40) = 0LL;
      *(_QWORD *)(v16 + 48) = 0LL;
    }
    *(_DWORD *)(v16 + 56) = *(_DWORD *)(*(_QWORD *)a5 + 80LL);
    *(_DWORD *)(v16 + 32) = a6 != 0 ? 2 : 0;
    v19 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v20 + 24) = (v19 >> 2) & 1;
    v21 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v24 + 28) = v25 & v21;
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      *(_QWORD *)(v24 + 60) = *(_QWORD *)(*(_QWORD *)a5 + 84LL);
    }
    else
    {
      v22 = (unsigned int)(v25 + 31);
      v26 = v24 - (_QWORD)a4;
      do
      {
        *(const unsigned __int16 *)((char *)a4 + v26 + 60) = *a4;
        ++a4;
        v22 -= v25;
      }
      while ( v22 );
    }
    v27 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40);
    *(_QWORD *)v24 = v27;
    if ( v27 )
      *(_DWORD *)(*((_QWORD *)this + 1) + 16LL) += v25;
    *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40) = v24;
    *(_DWORD *)(*((_QWORD *)this + 1) + 12LL) += v25;
    if ( !(unsigned int)PFEOBJ::efstyCompute(a5, v22, v23, v24) )
      *(_DWORD *)(v28 + 32) |= 4u;
    return v29;
  }
  Win32FreePool(v13);
  return 0LL;
}
