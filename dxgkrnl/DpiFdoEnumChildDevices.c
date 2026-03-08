/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1C02088D0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DxgkDWCloneCheckTargetID @ 0x1C0208C2C (DxgkDWCloneCheckTargetID.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C0208C54 (DpiFdoCreateChildDescriptor.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x1C02093E8 (DpiDxgkDdiQueryChildRelations.c)
 *     DpiAcpiExposeInfo @ 0x1C02094A4 (DpiAcpiExposeInfo.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C039868C (DpiFdoRemoveChildDescriptors.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r15
  __int64 v3; // r13
  unsigned int v4; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v6; // rsi
  int ChildRelations; // eax
  int ChildDescriptor; // edi
  __int64 v9; // r9
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v17; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v18; // ebx
  bool v19; // zf
  unsigned int i; // ebx
  __int64 v22; // rdx
  SIZE_T v23; // rax
  bool v24; // al
  __int64 v25; // rax
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // ecx
  bool v29; // zf
  __int64 v30; // r8
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // [rsp+30h] [rbp-68h]
  int v35; // [rsp+34h] [rbp-64h]
  int v36; // [rsp+38h] [rbp-60h]
  char v38; // [rsp+A8h] [rbp+10h]
  unsigned int v39; // [rsp+B0h] [rbp+18h]
  unsigned int v40; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2680) + 1);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v4, 1953656900LL);
  v6 = Pool2;
  if ( !Pool2 )
  {
    ChildDescriptor = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    goto LABEL_37;
  }
  memset(Pool2, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), v6, v4);
  ChildDescriptor = ChildRelations;
  if ( ChildRelations < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v3 + 200), ChildRelations);
    goto LABEL_37;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3320), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3424), Executive, 0, 0, 0LL);
  v34 = -1;
  v9 = 0LL;
  v10 = -1;
  v11 = 0LL;
  v12 = 0xFFFFFFFFLL;
  v38 = 0;
  v13 = -1;
  v39 = -1;
  LOBYTE(v14) = 0;
  v36 = -1;
  v35 = 0;
  *(_DWORD *)(v1 + 3496) = 0;
  *(_WORD *)(v1 + 2699) = 257;
  v40 = 0;
  if ( !*(_DWORD *)(v1 + 2680) )
  {
LABEL_16:
    if ( *(_QWORD *)(v1 + 3200) == v9 )
    {
      if ( !(_DWORD)v11 )
      {
        v19 = 0;
        goto LABEL_18;
      }
    }
    else
    {
      v19 = (_DWORD)v11 == 1;
      if ( (unsigned int)v11 <= 1 )
      {
LABEL_18:
        if ( v19 )
          *(_DWORD *)(v1 + 3240) = v13;
        if ( v10 != -1 )
        {
          v33 = 7LL * v10;
          if ( v6[v33 + 1] == 6 )
            v6[v33 + 1] = 0x80000000;
          if ( (_BYTE)v14 )
          {
            WdLogSingleEntry1(2LL, 0LL);
            *(_DWORD *)(v1 + 2720) |= 1u;
          }
        }
        if ( *(_BYTE *)(v1 + 1157) == 1 )
          DpiAcpiExposeInfo(v2, v12, v14);
        for ( i = 0; i < *(_DWORD *)(v1 + 2680); ++i )
        {
          LOBYTE(v14) = 1;
          ChildDescriptor = DpiFdoCreateChildDescriptor(
                              v1,
                              v6[7 * i + 6],
                              v14,
                              (unsigned int)v6 + 28 * i,
                              (__int64)&v6[7 * i + 1],
                              v6[7 * i + 5]);
          if ( ChildDescriptor < 0 )
            break;
        }
        goto LABEL_26;
      }
    }
LABEL_43:
    ChildDescriptor = -1073741637;
    v22 = -1073741637LL;
    goto LABEL_102;
  }
  while ( 1 )
  {
    v15 = 7 * v11;
    if ( v6[7 * v11 + 4] == 2 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      v12 = v39;
      v9 = 0LL;
      v6[v15 + 4] = 4;
    }
    v16 = v6[v15];
    if ( v16 == 1 )
    {
      *(_BYTE *)(v1 + 2699) &= DxgkDWCloneCheckTargetID((unsigned int)v6[v15 + 6], v12, v14);
      v17 = v6[v15 + 6];
      DXGGLOBAL::GetGlobal();
      *(_BYTE *)(v1 + 2700) &= (v17 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v3 + 28) < 0x104Fu )
      {
        v6[v15 + 1] = -1;
        v18 = D3DKMDT_VOT_OTHER;
        WdLogSingleEntry1(3LL, 0LL);
      }
      else
      {
        v18 = v6[v15 + 1];
        if ( v18 < D3DKMDT_VOT_HD15 )
        {
          v18 = D3DKMDT_VOT_OTHER;
          if ( (v6[v15 + 1] & 0x7FFFFFFFu) <= 0xE )
            v18 = 0x80000000;
        }
        v6[v15 + 1] = v18;
        if ( v18 == D3DKMDT_VOT_MIRACAST || (unsigned int)(v18 - 16) < 2 )
        {
          if ( v6[v15 + 4] != 4 )
            goto LABEL_43;
          if ( v18 == D3DKMDT_VOT_MIRACAST )
          {
            ++v35;
            v36 = v6[v15 + 6];
          }
          else if ( !*(_BYTE *)(v1 + 1159) )
          {
            goto LABEL_43;
          }
        }
      }
      if ( !IsInternalVideoOutput(v18) && v18 != D3DKMDT_VOT_LVDS )
        goto LABEL_13;
      v12 = v39;
      if ( v39 == -1 )
      {
        *(_DWORD *)(v1 + 3500) = v6[v15 + 6];
        if ( *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) == (_BYTE)v9
          && (*(_BYTE *)(v1 + 1154) == (_BYTE)v9 || *(_BYTE *)(v1 + 480) == (_BYTE)v9)
          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x4000u
          && *(_BYTE *)(v1 + 2692) == (_BYTE)v9 )
        {
          goto LABEL_43;
        }
        if ( v10 == -1 )
        {
          v10 = v40;
          v34 = v18;
          goto LABEL_14;
        }
        if ( *(_BYTE *)(v1 + 2692) != (_BYTE)v9 )
          goto LABEL_14;
        v23 = RtlCompareMemory((const void *)(v1 + 544), &GUID_BUS_VMBUS, 0x10uLL);
        v9 = 0LL;
        if ( v23 == 16 && byte_1C013B498 )
          goto LABEL_13;
        v38 = 1;
        if ( v18 == v34 )
          goto LABEL_63;
        switch ( v18 )
        {
          case D3DKMDT_VOT_INTERNAL:
LABEL_62:
            v25 = v10;
            v10 = v40;
            v34 = v18;
            v6[7 * v25 + 1] = -1;
LABEL_13:
            v12 = v39;
            goto LABEL_14;
          case D3DKMDT_VOT_LVDS:
            v24 = v34 != 0x80000000;
            break;
          case D3DKMDT_VOT_DISPLAYPORT_EMBEDDED:
            v24 = v34 == 13;
            break;
          default:
            goto LABEL_63;
        }
        if ( v24 )
          goto LABEL_62;
LABEL_63:
        v6[v15 + 1] = -1;
        goto LABEL_13;
      }
      ChildDescriptor = -1073741637;
      v30 = (unsigned int)v6[7 * v39 + 6];
      goto LABEL_98;
    }
    if ( v16 != 3 )
    {
      if ( v16 == 2 || *(_DWORD *)(v3 + 28) < 0x700Au )
        goto LABEL_14;
      ChildDescriptor = -1073741637;
      v30 = (int)v6[v15];
LABEL_98:
      v31 = (unsigned int)v6[v15 + 6];
      goto LABEL_100;
    }
    v26 = *(_DWORD *)(v3 + 28);
    if ( v26 < 0x7007 )
    {
      ChildDescriptor = -1073741637;
      WdLogSingleEntry2(2LL, v26, 28680LL);
      v9 = 0LL;
      goto LABEL_13;
    }
    if ( v10 != -1 )
    {
      ChildDescriptor = -1073741637;
      v30 = (unsigned int)v6[v15 + 6];
      v31 = (unsigned int)v6[7 * v10 + 6];
      goto LABEL_100;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) == (_BYTE)v9
      && (*(_BYTE *)(v1 + 1154) == (_BYTE)v9 || *(_BYTE *)(v1 + 480) == (_BYTE)v9)
      && *(_BYTE *)(v1 + 2692) == (_BYTE)v9
      || *(_BYTE *)(v1 + 2692) == (_BYTE)v9 && byte_1C013B498 == (_BYTE)v9 && (_DWORD)v12 != -1 )
    {
      goto LABEL_43;
    }
    v27 = DxgkDWCloneCheckTargetID((unsigned int)v6[v15 + 6], v12, v14);
    v9 = 0LL;
    if ( !v27 )
      break;
    v28 = v6[v15 + 1];
    if ( v28 > 0xA )
    {
      if ( v28 == 11 || v28 == 12 || v28 == 13 || v28 == 18 )
        goto LABEL_90;
      v29 = v28 == 0x80000000;
    }
    else
    {
      if ( v28 == 10 || v28 == 4 || v28 == 5 || v28 == 6 || v28 == 8 )
        goto LABEL_90;
      v29 = v28 == 9;
    }
    if ( !v29 )
    {
      ChildDescriptor = -1073741637;
      v30 = (unsigned int)v6[v15 + 6];
      v31 = (int)v6[v15 + 1];
LABEL_100:
      WdLogSingleEntry2(2LL, v31, v30);
      goto LABEL_26;
    }
LABEL_90:
    v32 = v6[v15 + 4];
    if ( v32 != 4 && v32 != 1 )
      break;
    v12 = v39;
    if ( v39 == -1 )
    {
      v12 = v40;
      v39 = v40;
      *(_DWORD *)(v1 + 3500) = v6[v15 + 6];
    }
LABEL_14:
    v11 = v40 + 1;
    v40 = v11;
    if ( (unsigned int)v11 >= *(_DWORD *)(v1 + 2680) )
    {
      LODWORD(v11) = v35;
      v2 = a1;
      v13 = v36;
      LOBYTE(v14) = v38;
      goto LABEL_16;
    }
  }
  ChildDescriptor = -1073741637;
  v22 = (unsigned int)v6[v15 + 6];
LABEL_102:
  WdLogSingleEntry1(2LL, v22);
LABEL_26:
  KeReleaseMutex((PRKMUTEX)(v1 + 3424), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3320));
  KeLeaveCriticalRegion();
  if ( ChildDescriptor >= 0 )
  {
LABEL_27:
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)ChildDescriptor;
  }
  v2 = a1;
LABEL_37:
  DpiFdoRemoveChildDescriptors(v2);
  if ( v6 )
    goto LABEL_27;
  return (unsigned int)ChildDescriptor;
}
