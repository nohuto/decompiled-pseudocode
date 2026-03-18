/*
 * XREFs of ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x1C0012D00
 * Callers:
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C0012850 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C0013154 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     ?efstyCompute@PFEOBJ@@QEAA?AW4_ENUMFONTSTYLE@@XZ @ 0x1C00131A8 (-efstyCompute@PFEOBJ@@QEAA-AW4_ENUMFONTSTYLE@@XZ.c)
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
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // r10d
  unsigned __int8 v26; // al

  v7 = a3;
  v10 = (_QWORD *)Win32AllocPoolZInit(16LL, 1802398791LL);
  v11 = v10;
  if ( !v10 )
    return 0;
  *v10 = 0LL;
  v10[1] = *(_QWORD *)a5;
  if ( a2 && (a6 || (*((_DWORD *)a2 + 8) & 2) == 0) )
  {
    if ( (unsigned int)PFEOBJ::efstyCompute(a5) || (*((_DWORD *)a2 + 8) & 4) != 0 )
    {
      **((_QWORD **)a2 + 2) = v11;
      *((_QWORD *)a2 + 2) = v11;
    }
    else
    {
      *v11 = *((_QWORD *)a2 + 1);
      *((_DWORD *)a2 + 8) |= 4u;
      *((_QWORD *)a2 + 1) = v11;
    }
    if ( (PFEOBJ::flFontType(a5) & 4) != 0 )
      ++*((_DWORD *)a2 + 6);
    v26 = PFEOBJ::flFontType(a5);
    if ( (v26 & (unsigned __int8)v25) != 0 )
      *((_DWORD *)a2 + 7) += v25;
    return v25;
  }
  v12 = Win32AllocPoolZInit(128LL, 1650550855LL);
  v13 = v12;
  if ( v12 )
  {
    *(_QWORD *)(v12 + 16) = v11;
    *(_QWORD *)(v12 + 8) = v11;
    v14 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v14 + 24) )
    {
      v15 = *(_QWORD *)(v14 + 32);
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_QWORD *)(v13 + 40) = v15;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL) + 48LL) = v13;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v13;
    }
    else
    {
      *(_QWORD *)(v14 + 24) = v13;
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v13;
      *(_QWORD *)(v13 + 40) = 0LL;
      *(_QWORD *)(v13 + 48) = 0LL;
    }
    *(_DWORD *)(v13 + 56) = *(_DWORD *)(*(_QWORD *)a5 + 80LL);
    *(_DWORD *)(v13 + 32) = a6 != 0 ? 2 : 0;
    v16 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v17 + 24) = (v16 >> 2) & 1;
    v18 = PFEOBJ::flFontType(a5);
    *(_DWORD *)(v19 + 28) = v20 & v18;
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      *(_QWORD *)(v19 + 60) = *(_QWORD *)(*(_QWORD *)a5 + 84LL);
    }
    else
    {
      v21 = (unsigned int)(v20 + 31);
      v22 = v19 - (_QWORD)a4;
      do
      {
        *(const unsigned __int16 *)((char *)a4 + v22 + 60) = *a4;
        ++a4;
        v21 -= v20;
      }
      while ( v21 );
    }
    v23 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40);
    *(_QWORD *)v19 = v23;
    if ( v23 )
      *(_DWORD *)(*((_QWORD *)this + 1) + 16LL) += v20;
    *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7 + 40) = v19;
    *(_DWORD *)(*((_QWORD *)this + 1) + 12LL) += v20;
    if ( !(unsigned int)PFEOBJ::efstyCompute(a5) )
      *(_DWORD *)(v24 + 32) |= 4u;
    return v25;
  }
  Win32FreePool(v11);
  return 0LL;
}
