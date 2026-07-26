/*
 * XREFs of ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0007560
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000326C (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C00173B4 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x1C003EA60 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C003F4B0 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00748F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v7; // r15d
  unsigned int v9; // edi
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // r12
  struct NDIS_NBL_TRACKER_HANDLE__ *v13; // r11
  unsigned __int64 v14; // rdi
  char v15; // bl
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // r15
  unsigned __int64 v19; // rdi
  char *v20; // r13
  struct _NET_BUFFER_LIST *Alignment; // rsi
  int *v22; // r8
  unsigned __int64 v23; // rbx
  char *SourceHandle; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r9
  bool v27; // r10
  _QWORD *v28; // rcx
  unsigned int v29; // ebp
  unsigned __int64 v30; // rcx
  __int64 **v31; // rcx
  __int64 *v32; // rax
  unsigned int v33; // r8d
  _QWORD *i; // rdx
  bool v35; // [rsp+40h] [rbp-68h] BYREF
  char v36[7]; // [rsp+41h] [rbp-67h] BYREF
  __int64 v37; // [rsp+48h] [rbp-60h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v38; // [rsp+50h] [rbp-58h]
  __int64 v39; // [rsp+58h] [rbp-50h]
  __int64 v40; // [rsp+60h] [rbp-48h]
  bool v44; // [rsp+D0h] [rbp+28h]

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v7 = a4;
  v9 = a3;
  v10 = a1;
  v11 = 1LL;
  v12 = 96 * v5 + a1[53] + 48LL;
  v40 = v12;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    v13 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[82];
    v14 = a1[64];
    v15 = ndisNblTrackerEpoch;
    v16 = 131;
    if ( (a5 & 2) == 0 )
      v16 = 130;
    v38 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[82];
    v17 = 0LL;
    v44 = (a5 & 1) != 0;
    v18 = 0LL;
    v39 = 0LL;
    v37 = 0LL;
    v35 = v44;
    v36[0] = 0;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      ndisNblTrackerRecordEventInternal(a2, v13, v16, (void *)v14, v44);
      v13 = v38;
      v11 = 1LL;
      v17 = 0LL;
    }
    v19 = v14 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v19 & 1) != 0 )
    {
      v20 = *(char **)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
      v19 |= 2LL * (v15 & 1);
    }
    else
    {
      v20 = (char *)v19;
    }
    Alignment = a2;
    if ( a2 )
    {
      v22 = &WPP_RECORDER_INITIALIZED;
      while ( 1 )
      {
        v23 = (unsigned __int64)Alignment->NetBufferListInfo[27];
        while ( Alignment->NetBufferListInfo[27] == (void *)v23 )
        {
          if ( !v23 && !Alignment->SourceHandle )
            Alignment->SourceHandle = (void *)ndisSourceHandleFromOwner(
                                                (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFDuLL,
                                                v11,
                                                v22,
                                                v17);
          if ( (v23 & 4) != 0 )
            goto LABEL_45;
          SourceHandle = (char *)Alignment->SourceHandle;
          if ( SourceHandle )
          {
            v11 = (unsigned __int8)*SourceHandle;
            if ( (unsigned __int8)(v11 - 17) <= 1u || (_BYTE)v11 == 5 )
            {
              if ( SourceHandle != v20 || Alignment->ParentNetBufferList )
              {
                ++v18;
                v25 = v19;
              }
              else
              {
                ++v17;
                v25 = 24LL;
                v37 = v17;
                ++v18;
              }
              goto LABEL_18;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != v22 )
            {
              LOBYTE(v11) = 3;
              WPP_RECORDER_SF_qd(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v11,
                27,
                12,
                (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
                (char)Alignment,
                *SourceHandle);
              goto LABEL_44;
            }
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != v22 )
          {
            LOBYTE(v11) = 3;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v11,
              27,
              11,
              (struct _GUID *)&WPP_5e110f494fc33fedd56e6eda5750fecd_Traceguids,
              (char)Alignment);
LABEL_44:
            v13 = v38;
            v22 = &WPP_RECORDER_INITIALIZED;
            v17 = v37;
          }
LABEL_45:
          v25 = v19 | 4;
LABEL_18:
          Alignment->NetBufferListInfo[27] = (void *)v25;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          if ( !Alignment )
            break;
        }
        v26 = v39 - v18;
        if ( (v23 & 1) != 0 && v26 )
        {
          v27 = v44;
          if ( !v44 && !v36[0] )
          {
            v36[0] = 1;
            v27 = KeGetCurrentIrql() == 2;
            v35 = v27;
          }
          v11 = 16 * ((v23 >> 1) & 1) + (v23 & 0xFFFFFFFFFFFFFFF8uLL);
          if ( v27 )
          {
            v28 = (_QWORD *)(*(_QWORD *)(v11 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v28 += v26;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 48), v26);
          }
          v44 = v35;
        }
        v17 = v37;
        v39 = v18;
        if ( !Alignment )
        {
          v12 = v40;
          LODWORD(v11) = 1;
          break;
        }
      }
    }
    if ( (v19 & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(v19, v18 - v17, &v35, v36);
      LODWORD(v11) = 1;
    }
    v7 = a4;
    v9 = a3;
    v10 = a1;
  }
  if ( (a5 & 2) == 0
    && ndisIterativeDataPathDisabled == (a5 & 2)
    && ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v12 + 16) )
  {
    v29 = a5 | 1;
    if ( !*(_QWORD *)v12 )
    {
      *(_QWORD *)v12 = a2;
      goto LABEL_36;
    }
    v31 = *(__int64 ***)(v12 + 8);
    if ( v9 != *((_DWORD *)v31 + 35) || v29 != *((_DWORD *)v31 + 33) || (v29 & 0xCB00) != 0 )
    {
      v31[14] = (__int64 *)a2;
LABEL_36:
      *(_QWORD *)(v12 + 8) = a2;
      v30 = a2->Link.Alignment;
      a2->Scratch = 0LL;
      a2->ChildRefCount = v29;
      a2->Status = v9;
      if ( v30 )
        *(_QWORD *)(v30 + 112) = v7;
      return;
    }
    v32 = *v31;
    if ( *v31 )
      LODWORD(v11) = *((_DWORD *)v32 + 28);
    v33 = v11 + v7;
    for ( i = *(_QWORD **)(v12 + 8); v32; v32 = (__int64 *)*v32 )
      i = v32;
    *i = a2;
    if ( *v31 )
      (*v31)[14] = v33;
  }
  else
  {
    ndisInvokeNextReceiveHandler(
      a2,
      v9,
      v7,
      a5,
      (struct _NDIS_OBJECT_HEADER *)v10[65],
      (void *)v10[63],
      (void (*)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))v10[62]);
    if ( (a5 & 2) != 0 && *(_DWORD *)ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(a2, v10[64], v10[82], 0x8Cu, a5 & 1);
  }
}
