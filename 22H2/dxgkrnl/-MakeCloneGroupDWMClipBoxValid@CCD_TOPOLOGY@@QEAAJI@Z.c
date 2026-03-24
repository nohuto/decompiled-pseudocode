/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C014A144
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C014A0BC (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000C3EC (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C001ACA0 (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0146650 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C014EAF0 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, __int64 a2)
{
  unsigned int v3; // ebp
  int v4; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r10^4
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int *v17; // rdi
  int v18; // eax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // rsi
  unsigned int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // eax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // [rsp+60h] [rbp+8h] BYREF
  int v35; // [rsp+64h] [rbp+Ch]
  __int64 v36; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v8 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) != v4 )
      goto LABEL_21;
    if ( !*((_BYTE *)PathDescriptor + 129) )
    {
      if ( (*(_DWORD *)PathDescriptor & 0x100LL) == 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v32);
      }
      *((_DWORD *)v8 + 59) |= 1u;
      v17 = (unsigned int *)((char *)v8 + 168);
      *((_DWORD *)v8 + 44) = *((_DWORD *)v8 + 24);
      *((_DWORD *)v8 + 45) = *((_DWORD *)v8 + 25);
      v18 = 0;
      *((_DWORD *)v8 + 43) = 0;
      *((_DWORD *)v8 + 42) = 0;
      goto LABEL_17;
    }
    v9 = *((_DWORD *)PathDescriptor + 33);
    v36 = *((_QWORD *)PathDescriptor + 12);
    if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v9) - 2) & 0xFFFFFFFD) != 0 )
    {
      v34 = *((_DWORD *)v8 + 38);
      v14 = *((_DWORD *)v8 + 39);
    }
    else
    {
      v34 = *((_DWORD *)v8 + 39);
      v14 = *((_DWORD *)v8 + 38);
    }
    v35 = v14;
    if ( (*(_DWORD *)v8 & 0x800000) == 0 )
      goto LABEL_23;
    v11 = *((unsigned int *)v8 + 43);
    if ( (int)v11 < 0 )
      break;
    v15 = *((_DWORD *)v8 + 42);
    if ( v15 < 0 )
      break;
    v10 = *((unsigned int *)v8 + 44);
    if ( (int)v10 <= v15 )
      break;
    v16 = *((_DWORD *)v8 + 45);
    if ( v16 <= (int)v11 || (int)v10 > v12 || v16 > v13 )
      break;
LABEL_21:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (*((_DWORD *)v8 + 2) & 0x800000) == 0 )
  {
LABEL_23:
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
    v20[3] = v3;
    v20[4] = *((unsigned int *)v8 + 6);
    v20[5] = *((unsigned int *)v8 + 7);
    v7 = 0x40000000000LL;
    v21 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 0x40000000000LL) == 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(0x40000000000LL, v6);
      WdLogEvent5_WdAssertion(v25);
      v21 = *(_QWORD *)v8;
    }
    if ( *((_DWORD *)v8 + 34) == 1 )
    {
      v22 = (_DWORD *)((char *)v8 + 140);
      if ( (v21 & 0x10000) != 0 )
      {
        if ( *v22 == 5 )
        {
          DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140);
          *((_DWORD *)v8 + 59) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140);
        *(_QWORD *)v8 |= 0x10000uLL;
        *((_DWORD *)v8 + 59) |= 0x80u;
      }
      v17 = (unsigned int *)((char *)v8 + 168);
      v23 = ConvertDmmToDisplayConfigScaling((unsigned int)*v22, v6);
      if ( !CalculateScaling(v23, (unsigned int *)&v36, &v34, (unsigned int *)v8 + 42) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v27 + 24) = (int)*v22;
        WdLogEvent5_WdAssertion(v27);
        DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140);
        v29 = ConvertDmmToDisplayConfigScaling((unsigned int)*v22, v28);
        v30 = CalculateScaling(v29, (unsigned int *)&v36, &v34, (unsigned int *)v8 + 42);
        *((_DWORD *)v8 + 59) |= 0x40u;
        if ( !v30 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v7, v6);
          *(_QWORD *)(v31 + 24) = 3760LL;
          WdLogEvent5_WdAssertion(v31);
        }
      }
    }
    else
    {
      if ( (v21 & 0x100) == 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v26);
      }
      *((_DWORD *)v8 + 59) |= 1u;
      v17 = (unsigned int *)((char *)v8 + 168);
      *((_DWORD *)v8 + 44) = *((_DWORD *)v8 + 24);
      *((_DWORD *)v8 + 45) = *((_DWORD *)v8 + 25);
      *((_DWORD *)v8 + 43) = 0;
      *((_DWORD *)v8 + 42) = 0;
    }
    v18 = *((_DWORD *)v8 + 43);
LABEL_17:
    *(_QWORD *)v8 |= 0x800000uLL;
    if ( v18 < 0 || (v7 = *v17, (int)v7 < 0) || *((_DWORD *)v8 + 44) <= (int)v7 || *((_DWORD *)v8 + 45) <= v18 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v33 + 24) = 3780LL;
      WdLogEvent5_WdAssertion(v33);
    }
    goto LABEL_21;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
  v24[3] = v3;
  v24[4] = *((unsigned int *)v8 + 6);
  v24[5] = *((unsigned int *)v8 + 7);
  WdLogEvent5_WdError(v24);
  return 3221225485LL;
}
