/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C4888
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01C4704 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A260 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C006A7AC (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C016AED0 (DxgkGetAdapterDefaultScaling.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01B1660 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C01BA474 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v3; // ebp
  int v4; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // r10^4
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _QWORD *v18; // rax
  signed __int64 v19; // rax
  unsigned int *v20; // rsi
  int *v21; // rdi
  int v22; // eax
  int v23; // eax
  char v24; // al
  int v25; // ecx
  unsigned int v26; // [rsp+90h] [rbp+8h] BYREF
  int v27; // [rsp+94h] [rbp+Ch]
  __int64 v28; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v6 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) != v4 )
      goto LABEL_13;
    if ( !*((_BYTE *)PathDescriptor + 129) )
    {
      if ( (*(_DWORD *)PathDescriptor & 0x100LL) == 0 )
LABEL_31:
        WdLogSingleEntry0(1LL);
LABEL_32:
      *((_DWORD *)v6 + 65) |= 1u;
      v21 = (int *)((char *)v6 + 168);
      *((_DWORD *)v6 + 44) = *((_DWORD *)v6 + 24);
      *((_DWORD *)v6 + 45) = *((_DWORD *)v6 + 25);
      *((_DWORD *)v6 + 42) = 0;
      *((_DWORD *)v6 + 43) = 0;
LABEL_33:
      *(_QWORD *)v6 |= 0x800000uLL;
      v25 = *((_DWORD *)v6 + 43);
      if ( v25 < 0 || *v21 < 0 || *((_DWORD *)v6 + 44) <= *v21 || *((_DWORD *)v6 + 45) <= v25 )
      {
        WdLogSingleEntry1(1LL, 4065LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pPathDescriptor->DwmClipBox.top >= 0) && (pPathDescriptor->DwmClipBox.left >= 0) && (pPathDescriptor"
                    "->DwmClipBox.right > pPathDescriptor->DwmClipBox.left) && (pPathDescriptor->DwmClipBox.bottom > pPat"
                    "hDescriptor->DwmClipBox.top)",
          4065LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_13;
    }
    v7 = *((_DWORD *)PathDescriptor + 33);
    v28 = *((_QWORD *)PathDescriptor + 12);
    if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v7) - 2) & 0xFFFFFFFD) != 0 )
    {
      v26 = *((_DWORD *)v6 + 38);
      v14 = *((_DWORD *)v6 + 39);
    }
    else
    {
      v26 = *((_DWORD *)v6 + 39);
      v14 = *((_DWORD *)v6 + 38);
    }
    v27 = v14;
    if ( (*(_DWORD *)v6 & 0x800000) == 0 )
      goto LABEL_18;
    v8 = *((unsigned int *)v6 + 43);
    if ( (int)v8 < 0 )
      break;
    v15 = *((_DWORD *)v6 + 42);
    if ( v15 < 0 )
      break;
    v9 = *((unsigned int *)v6 + 44);
    if ( (int)v9 <= v15 )
      break;
    v16 = *((_DWORD *)v6 + 45);
    if ( v16 <= (int)v8 || (int)v9 > v12 || v16 > v13 )
      break;
LABEL_13:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (*((_DWORD *)v6 + 2) & 0x800000) == 0 )
  {
LABEL_18:
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v18[3] = v3;
    v18[4] = *((unsigned int *)v6 + 6);
    v18[5] = *((unsigned int *)v6 + 7);
    if ( !_bittest64((const signed __int64 *)v6, 0x2Au) )
      WdLogSingleEntry0(1LL);
    v19 = *(_QWORD *)v6;
    if ( *((_DWORD *)v6 + 34) == 1 )
    {
      v20 = (unsigned int *)((char *)v6 + 140);
      if ( (v19 & 0x10000) != 0 )
      {
        if ( *v20 == 5 )
        {
          DxgkGetAdapterDefaultScaling((struct _LUID *)v6 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v6 + 35);
          *((_DWORD *)v6 + 65) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((struct _LUID *)v6 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v6 + 35);
        *(_QWORD *)v6 |= 0x10000uLL;
        *((_DWORD *)v6 + 65) |= 0x80u;
      }
      v21 = (int *)((char *)v6 + 168);
      v22 = ConvertDmmToDisplayConfigScaling(*v20);
      if ( !CalculateScaling(v22, (unsigned int *)&v28, &v26, (unsigned int *)v6 + 42) )
      {
        WdLogSingleEntry1(1LL, (int)*v20);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Failed to set clipbox with scaling intent 0x%lx, going to force ",
          (int)*v20,
          0LL,
          0LL,
          0LL,
          0LL);
        DxgkGetAdapterDefaultScaling((struct _LUID *)v6 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v6 + 35);
        v23 = ConvertDmmToDisplayConfigScaling(*v20);
        v24 = CalculateScaling(v23, (unsigned int *)&v28, &v26, (unsigned int *)v6 + 42);
        *((_DWORD *)v6 + 65) |= 0x40u;
        if ( !v24 )
        {
          WdLogSingleEntry1(1LL, 4045LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bRet", 4045LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      goto LABEL_33;
    }
    if ( (v19 & 0x100) == 0 )
      goto LABEL_31;
    goto LABEL_32;
  }
  WdLogSingleEntry3(2LL, v3, *((unsigned int *)v6 + 6), *((unsigned int *)v6 + 7));
  return 3221225485LL;
}
