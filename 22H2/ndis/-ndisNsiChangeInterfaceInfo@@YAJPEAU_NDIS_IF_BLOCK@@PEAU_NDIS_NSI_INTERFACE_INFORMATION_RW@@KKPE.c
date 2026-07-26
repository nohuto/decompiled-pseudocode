/*
 * XREFs of ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0025B6C
 * Callers:
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00259C4 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00B4500 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0025EAC (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003A054 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 */

__int64 __fastcall ndisNsiChangeInterfaceInfo(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_NSI_INTERFACE_INFORMATION_RW *a2,
        int a3,
        int a4,
        wchar_t *a5)
{
  int v6; // edi
  unsigned int v9; // ebx
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rcx
  char v11; // r12
  int v12; // eax
  int v13; // r14d
  int v14; // r8d
  int v15; // ebp
  _NDIS_NSI_INTERFACE_PURPOSE v16; // eax
  int v17; // edi
  _OWORD *v19; // rdi
  __int64 v20; // r9
  _IF_COUNTED_STRING_LH *PoolWithTag; // rax
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // r9
  _IF_COUNTED_STRING_LH *p_ifAlias; // rdx
  __int64 v26; // rax
  __int128 v27; // xmm1
  int updated; // eax
  int v30; // [rsp+98h] [rbp+20h]

  v6 = a3;
  v9 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Cu,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)a1,
      a2);
  ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)a5;
  v11 = 0;
  v12 = v6;
  v13 = a4;
  v30 = v6;
  v14 = -1073741811;
  *(_DWORD *)a5 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
LABEL_17:
        v6 = a3;
        ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)a5;
        break;
      }
      v15 = 0;
      if ( a4 )
      {
        if ( a4 == 16 )
        {
          v15 = 4;
          a1->ifAdminStatus = *((_DWORD *)a2 + 4);
          v13 = 20;
          goto LABEL_41;
        }
        if ( a4 == 20 )
        {
          v15 = 516;
          if ( !ndisIsValidIfStringParts((const wchar_t *)a2 + 10, *((unsigned __int16 *)a2 + 10)) || a1->IsNdisFilter )
          {
LABEL_13:
            v9 = v14;
LABEL_14:
            v12 = v30;
            goto LABEL_15;
          }
          p_ifAlias = &a1->ifAlias;
          v26 = 4LL;
          do
          {
            *(_OWORD *)&p_ifAlias->Length = *(_OWORD *)&ifL2NetworkInfo->Length;
            *(_OWORD *)&p_ifAlias->String[7] = *(_OWORD *)&ifL2NetworkInfo->String[7];
            *(_OWORD *)&p_ifAlias->String[15] = *(_OWORD *)&ifL2NetworkInfo->String[15];
            *(_OWORD *)&p_ifAlias->String[23] = *(_OWORD *)&ifL2NetworkInfo->String[23];
            *(_OWORD *)&p_ifAlias->String[31] = *(_OWORD *)&ifL2NetworkInfo->String[31];
            *(_OWORD *)&p_ifAlias->String[39] = *(_OWORD *)&ifL2NetworkInfo->String[39];
            *(_OWORD *)&p_ifAlias->String[47] = *(_OWORD *)&ifL2NetworkInfo->String[47];
            p_ifAlias = (_IF_COUNTED_STRING_LH *)((char *)p_ifAlias + v24);
            v27 = *(_OWORD *)&ifL2NetworkInfo->String[55];
            ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)((char *)ifL2NetworkInfo + v24);
            *(_OWORD *)&p_ifAlias[-1].String[249] = v27;
            --v26;
          }
          while ( v26 );
          v13 = 536;
          *(_DWORD *)&p_ifAlias->Length = *(_DWORD *)&ifL2NetworkInfo->Length;
        }
        else
        {
          if ( a4 == 536 )
            goto LABEL_13;
          if ( a4 != 570 )
          {
            if ( a4 == 1088 )
            {
              v16 = *((_DWORD *)a2 + 272);
              if ( (unsigned int)v16 > NDIS_NSI_INTERFACE_PURPOSE_INTERNAL_VSWITCH_NIC )
                goto LABEL_13;
              a1->ifPurpose = v16;
              v15 = 4;
              v13 = 1092;
            }
            goto LABEL_39;
          }
          v19 = (_OWORD *)((char *)a2 + 570);
          v15 = 516;
          if ( !ndisIsValidIfStringParts(&ifL2NetworkInfo->Length, *((unsigned __int16 *)a2 + 285)) )
            goto LABEL_13;
          ifL2NetworkInfo = a1->ifL2NetworkInfo;
          if ( !ifL2NetworkInfo )
          {
            PoolWithTag = (_IF_COUNTED_STRING_LH *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x204uLL, 0x6669444Eu);
            a1->ifL2NetworkInfo = PoolWithTag;
            ifL2NetworkInfo = PoolWithTag;
            if ( !PoolWithTag )
            {
              v9 = -1073741670;
              goto LABEL_14;
            }
            v20 = 128LL;
          }
          v22 = 4LL;
          do
          {
            *(_OWORD *)&ifL2NetworkInfo->Length = *v19;
            *(_OWORD *)&ifL2NetworkInfo->String[7] = v19[1];
            *(_OWORD *)&ifL2NetworkInfo->String[15] = v19[2];
            *(_OWORD *)&ifL2NetworkInfo->String[23] = v19[3];
            *(_OWORD *)&ifL2NetworkInfo->String[31] = v19[4];
            *(_OWORD *)&ifL2NetworkInfo->String[39] = v19[5];
            *(_OWORD *)&ifL2NetworkInfo->String[47] = v19[6];
            ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)((char *)ifL2NetworkInfo + v20);
            v23 = v19[7];
            v19 = (_OWORD *)((char *)v19 + v20);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[249] = v23;
            --v22;
          }
          while ( v22 );
          v13 = 1088;
          *(_DWORD *)&ifL2NetworkInfo->Length = *(_DWORD *)v19;
        }
      }
      else
      {
        v15 = 16;
        updated = ndisIfUpdateInterfaceIsolationNetworkIdLocked(a1, (const struct _GUID *)a2, 0);
        if ( updated < 0 )
        {
          v9 = updated;
LABEL_39:
          v11 = 1;
          goto LABEL_41;
        }
        v13 = 16;
      }
LABEL_41:
      if ( v9 )
        goto LABEL_14;
      v12 = v30;
      if ( v15 && v30 >= v15 )
      {
        v12 = a4 - v13 + v30;
        a4 = v13;
        v30 = v12;
        goto LABEL_16;
      }
LABEL_15:
      v11 = 1;
LABEL_16:
      v14 = -1073741811;
      if ( v12 <= 0 )
        goto LABEL_17;
    }
  }
  v17 = v6 - v12;
  *(_DWORD *)&ifL2NetworkInfo->Length = v17;
  if ( !v17 )
    v9 = -1073741811;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Du,
      (struct _GUID *)&WPP_aa66c5b77aef37206a2c806e5c5446f1_Traceguids,
      (char)a1,
      (char)a2,
      v9);
  return v9;
}
