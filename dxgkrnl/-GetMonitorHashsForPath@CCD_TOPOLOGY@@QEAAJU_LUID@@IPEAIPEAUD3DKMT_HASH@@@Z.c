/*
 * XREFs of ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01C1020
 * Callers:
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1C01C0F20 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C000AC24 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C017151C (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C01BD748 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::GetMonitorHashsForPath(
        CCD_TOPOLOGY *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4,
        struct D3DKMT_HASH *a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // edi
  __int64 v7; // rsi
  DWORD LowPart; // ebx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v14; // rcx
  int v15; // r13d
  unsigned int v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // rax
  unsigned __int16 v19; // cx
  unsigned __int16 *v20; // rbx
  struct D3DKMT_HASH *v21; // r14
  unsigned int i; // ebp
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  const struct _LUID *v25; // rax
  const struct _LUID *v26; // rsi
  unsigned int HighPart; // edx
  const struct _LUID *v28; // r12
  int v29; // eax
  __int64 v30; // rdi
  int Md5Checksum; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rax
  int v33; // ecx
  unsigned int v34; // eax
  unsigned __int16 v36; // [rsp+70h] [rbp+8h] BYREF
  struct _LUID v37; // [rsp+78h] [rbp+10h] BYREF

  v37 = a2;
  v5 = *a4;
  v6 = 0;
  v7 = a3;
  LowPart = a2.LowPart;
  while ( 1 )
  {
    v11 = *((_QWORD *)this + 8);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 20);
    else
      v12 = 0;
    if ( v6 >= v12 )
      goto LABEL_36;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, &v37, v7) )
      break;
    ++v6;
  }
  v15 = *(_DWORD *)(v14 + 184);
  if ( v15 == -1 )
  {
LABEL_36:
    WdLogSingleEntry3(3LL, v37.HighPart, LowPart, v7);
    return 3221225473LL;
  }
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = *((_QWORD *)this + 8);
    v19 = v18 ? *(_WORD *)(v18 + 20) : 0;
    if ( v17 >= v19 )
      break;
    v32 = CCD_TOPOLOGY::GetPathDescriptor(this, v17++);
    v33 = *((_DWORD *)v32 + 46);
    v34 = v16 + 1;
    if ( v33 != v15 )
      v34 = v16;
    v16 = v34;
  }
  *a4 = v16;
  if ( v16 > v5 )
    return 3221225507LL;
  v20 = (unsigned __int16 *)operator new[](0x8002uLL, 0x63644356u, 256LL);
  if ( !v20 )
  {
    WdLogSingleEntry0(6LL);
    LODWORD(v30) = -1073741801;
    goto LABEL_26;
  }
  v21 = a5;
  for ( i = 0; ; ++i )
  {
    v23 = *((_QWORD *)this + 8);
    if ( v23 )
      v24 = *(_WORD *)(v23 + 20);
    else
      v24 = 0;
    if ( i >= v24 )
    {
      LODWORD(v30) = 0;
      goto LABEL_27;
    }
    v25 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, i);
    v26 = v25;
    if ( v25[23].LowPart == v15 )
      break;
LABEL_21:
    ;
  }
  HighPart = v25[3].HighPart;
  v36 = 0;
  v28 = v25 + 2;
  v29 = CCD_TOPOLOGY::_QueryMonitorIdStr(v25 + 2, HighPart, v20, 0x4001u, &v36);
  v30 = v29;
  if ( v29 >= 0 )
  {
    Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)v20, 2 * (unsigned int)v36, (unsigned __int8 *)v21 + 4);
    v30 = Md5Checksum;
    if ( Md5Checksum >= 0 )
    {
      *(_DWORD *)v21 = 1;
      v21 = (struct D3DKMT_HASH *)((char *)v21 + 20);
      goto LABEL_21;
    }
  }
  WdLogSingleEntry4(2LL, v26[2].HighPart, v28->LowPart, (unsigned int)v26[3].HighPart, v30);
LABEL_26:
  if ( v20 )
LABEL_27:
    operator delete(v20);
  return (unsigned int)v30;
}
