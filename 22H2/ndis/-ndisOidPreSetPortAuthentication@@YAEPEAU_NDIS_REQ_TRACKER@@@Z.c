/*
 * XREFs of ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E550
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     NdisMIndicateStatusEx @ 0x1C0019C90 (NdisMIndicateStatusEx.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A3E0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

char __fastcall ndisOidPreSetPortAuthentication(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r15
  __int64 v7; // rsi
  unsigned __int8 v8; // r8
  KIRQL v9; // dl
  __int64 v11; // [rsp+30h] [rbp-99h]
  KIRQL NewIrql[16]; // [rsp+40h] [rbp-89h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-79h] BYREF
  __int128 v14; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v15; // [rsp+D0h] [rbp+7h]
  __int128 v16; // [rsp+E0h] [rbp+17h]

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v4 = 0;
  NewIrql[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v5 = v1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA2u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      *(_DWORD *)(v2 + 8));
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)(v2 + 48) >= 0x14u )
      {
        v6 = *(_DWORD **)(v2 + 40);
        if ( !*(_DWORD *)(v2 + 8) )
        {
          if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
          {
            v7 = *(_QWORD *)(v1 + 16);
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v7, NewIrql);
            if ( (*(_DWORD *)(v7 + 124) & 0x80u) == 0 )
            {
              v8 = NewIrql[0];
              *(_DWORD *)(v7 + 3320) = v6[1];
              *(_DWORD *)(v7 + 3324) = v6[2];
              *(_DWORD *)(v7 + 3328) = v6[3];
              *(_DWORD *)(v7 + 3332) = v6[4];
              ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v7, 1, v8);
            }
            *(_QWORD *)(v7 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), NewIrql[0]);
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
          v9 = NewIrql[0];
          if ( (*(_DWORD *)(v1 + 124) & 0x80u) != 0 )
          {
            *(_QWORD *)(v1 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v9);
          }
          else
          {
            *(_DWORD *)(v1 + 3320) = v6[1];
            *(_DWORD *)(v1 + 3324) = v6[2];
            *(_DWORD *)(v1 + 3328) = v6[3];
            *(_DWORD *)(v1 + 3332) = v6[4];
            LODWORD(v14) = 3146112;
            DWORD1(v14) = *(_DWORD *)(v1 + 480);
            *((_QWORD *)&v14 + 1) = *(_QWORD *)(v1 + 792);
            *(_QWORD *)&v15 = *(_QWORD *)(v1 + 800);
            DWORD2(v15) = *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 532LL);
            HIDWORD(v15) = *(_DWORD *)(v1 + 3320);
            *(_QWORD *)&v16 = *(_QWORD *)(v1 + 3324);
            DWORD2(v16) = *(_DWORD *)(v1 + 3332);
            *(_QWORD *)(v1 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v9);
            StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
            StatusIndication.StatusBuffer = &v14;
            StatusIndication.SourceHandle = (void *)v1;
            StatusIndication.StatusCode = 1073807394;
            StatusIndication.StatusBufferSize = 48;
            NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
            *(_DWORD *)(v2 + 56) = 0;
            v4 = 1;
            *(_DWORD *)(v2 + 52) = 20;
            *((_DWORD *)a1 + 10) = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(v2 + 52) = 0;
        v4 = 1;
        *(_DWORD *)(v2 + 56) = 20;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 52) = 0;
      v4 = 1;
      *(_DWORD *)(v2 + 56) = 20;
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = *(_DWORD *)(v2 + 8);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA3u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v11);
  }
  return v4;
}
