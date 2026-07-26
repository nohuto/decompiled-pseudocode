/*
 * XREFs of ?ndisOidPreIovEnumVFs@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003B9D4 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1C0077840 (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0078654 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreIovEnumVFs(struct _NDIS_REQ_TRACKER *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  struct _NDIS_OID_REQUEST *v2; // rbp
  unsigned int Blink; // esi
  _BYTE *v4; // r14
  _LIST_ENTRY *SwitchBySwitchId; // r13
  struct _NDIS_REQ_TRACKER *v6; // rbx
  char v7; // r15
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  _BYTE *OidSourceHandle; // rax
  __int64 v12; // r8
  struct _NDIS_NIC_SWITCH_VF_INFO **p_VFList; // r12
  _QWORD *v14; // rdx
  bool v15; // zf
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  __int64 v18; // rax
  KIRQL v19; // dl
  __int64 v20; // rax
  unsigned int v21; // ecx
  struct _NDIS_NIC_SWITCH_VF_INFO *v22; // rax
  struct _NDIS_NIC_SWITCH_VF_INFO *v23; // rbx
  struct _NDIS_NIC_SWITCH_VF_INFO *v24; // rdx
  KIRQL v25; // dl
  __int64 v26; // rax
  __int64 v28; // [rsp+30h] [rbp-58h]
  KIRQL NewIrql; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A0h] [rbp+18h]
  struct _NDIS_NIC_SWITCH_VF_INFO *v32; // [rsp+A8h] [rbp+20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = (struct _NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
  Blink = 0;
  v4 = 0LL;
  NewIrql = 0;
  SwitchBySwitchId = 0LL;
  v6 = a1;
  v7 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x29u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)a1,
      v1);
  v2->DATA.METHOD_INFORMATION.BytesWritten = 0;
  v8 = (_DWORD *)*((_QWORD *)v6 + 4);
  if ( v8[1] != 12 )
    goto LABEL_46;
  *((_DWORD *)v6 + 10) = 0;
  if ( v8[12] < 0x18u )
  {
    v9 = -1073676268;
LABEL_8:
    v8[17] = 24;
    *((_DWORD *)v6 + 10) = v9;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 0;
    goto LABEL_47;
  }
  if ( v8[13] < 0x18u )
  {
    v9 = -1073676266;
    goto LABEL_8;
  }
  if ( !v1 )
  {
    v7 = 0;
    goto LABEL_47;
  }
  v10 = *(_QWORD *)(*(_QWORD *)v6 + 4608LL);
  if ( v10 && *(_QWORD *)(*(_QWORD *)v6 + 3568LL) && (*(_BYTE *)(v10 + 8) & 3) == 3 )
  {
    v8[15] = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 24;
    OidSourceHandle = ndisGetOidSourceHandle(v2);
    if ( OidSourceHandle && *OidSourceHandle == 18 )
      v4 = OidSourceHandle;
    if ( (*(_DWORD *)(v12 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v12 + 8))) != 0LL )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v1, &NewIrql);
      if ( v4 )
      {
        if ( SwitchBySwitchId )
        {
          v14 = (_QWORD *)*((_QWORD *)v4 + 101);
          while ( v14 != (_QWORD *)(v4 + 808) )
          {
            v15 = v14[6] == (_QWORD)SwitchBySwitchId;
            v16 = Blink + 1;
            v14 = (_QWORD *)*v14;
            if ( !v15 )
              v16 = Blink;
            Blink = v16;
          }
        }
        else
        {
          Blink = *((_DWORD *)v4 + 200);
        }
        p_VFList = (struct _NDIS_NIC_SWITCH_VF_INFO **)(v4 + 808);
      }
      else
      {
        if ( SwitchBySwitchId )
          Blink = (unsigned int)SwitchBySwitchId[4].Blink;
        else
          Blink = v1->NumAllocatedVFs;
        p_VFList = (struct _NDIS_NIC_SWITCH_VF_INFO **)&v1->VFList;
      }
      v17 = 1632 * Blink + 24;
      *(_DWORD *)(*((_QWORD *)v6 + 4) + 68LL) = v17;
      v18 = *((_QWORD *)v6 + 4);
      if ( v17 <= *(_DWORD *)(v18 + 52) )
      {
        v20 = *(_QWORD *)(v18 + 40);
        *(_DWORD *)(v20 + 12) = 24;
        *(_DWORD *)v20 = 1573248;
        *(_DWORD *)(v20 + 16) = Blink;
        *(_DWORD *)(v20 + 20) = 1632;
        v21 = 0;
        v32 = (struct _NDIS_NIC_SWITCH_VF_INFO *)(v20 + 24);
        v22 = *p_VFList;
        v31 = 0;
        if ( v22 != (struct _NDIS_NIC_SWITCH_VF_INFO *)p_VFList )
        {
          v23 = v32;
          do
          {
            if ( v21 >= Blink )
              break;
            v24 = (struct _NDIS_NIC_SWITCH_VF_INFO *)((char *)v22 - 16);
            if ( !v4 )
              v24 = v22;
            v22 = *(struct _NDIS_NIC_SWITCH_VF_INFO **)v22;
            v32 = v22;
            if ( !SwitchBySwitchId || *((_LIST_ENTRY **)v24 + 8) == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v23, v24);
              v23 = (struct _NDIS_NIC_SWITCH_VF_INFO *)((char *)v23 + 1632);
              v22 = v32;
              v21 = ++v31;
            }
          }
          while ( v22 != (struct _NDIS_NIC_SWITCH_VF_INFO *)p_VFList );
          v6 = a1;
        }
        v25 = NewIrql;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v25);
        v26 = *((_QWORD *)v6 + 4);
        *((_DWORD *)v6 + 10) = 0;
        *(_DWORD *)(v26 + 60) = v17;
      }
      else
      {
        v19 = NewIrql;
        *((_DWORD *)v6 + 10) = -1073676266;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v19);
      }
    }
    else
    {
      *((_DWORD *)v6 + 10) = -1073741811;
    }
  }
  else
  {
LABEL_46:
    *((_DWORD *)v6 + 10) = -1073741637;
  }
LABEL_47:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v28) = *((_DWORD *)v6 + 10);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x2Au,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      (char)v1,
      v28);
  }
  return v7;
}
