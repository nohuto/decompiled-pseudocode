/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0020A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C0035D54 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C0035D94 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // r12
  unsigned int v5; // r11d
  unsigned __int8 IsCompartmentAccessibleByClient; // al
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // r15
  _OWORD *v11; // rbp
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  bool v18; // cf
  unsigned int v19; // ebx
  KIRQL v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+48h] [rbp-50h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h]

  v22 = 0LL;
  v23 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids,
      a1);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v22);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v3 = qword_1C00E5B48;
  v4 = v2;
  v21 = v2;
  v5 = 0;
  if ( (__int64 *)qword_1C00E5B48 != &qword_1C00E5B48 )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient(
                                          *(const struct _NDIS_IF_COMPARTMENT_BLOCK **)(v3 + 48),
                                          (const struct _NDIS_NSI_CLIENT_INFO *)&v22,
                                          0);
      v3 = *(_QWORD *)v3;
      v8 = v7 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v8 = v7;
      v5 = v8;
    }
    while ( (__int64 *)v3 != &qword_1C00E5B48 );
    v4 = v21;
  }
  v9 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v5;
  if ( !v9 )
  {
    v18 = v5 != 0;
LABEL_26:
    v19 = v18 ? 0x105 : 0;
    goto LABEL_27;
  }
  v10 = *((_QWORD *)a1 + 2);
  v11 = (_OWORD *)*((_QWORD *)a1 + 5);
  if ( (!v10 || *((_DWORD *)a1 + 6) == 16) && (!v11 || *((_DWORD *)a1 + 12) >= 0x210u) )
  {
    v12 = qword_1C00E5B48;
    v13 = 0;
    do
    {
      if ( (__int64 *)v12 == &qword_1C00E5B48 )
        break;
      if ( ndisIsCompartmentAccessibleByClient(
             *(const struct _NDIS_IF_COMPARTMENT_BLOCK **)(v12 + 48),
             (const struct _NDIS_NSI_CLIENT_INFO *)&v22,
             0) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_OWORD *)(v10 + 16LL * v13) = *(_OWORD *)(v12 + 32);
        if ( *((_QWORD *)a1 + 5) )
        {
          v14 = 4LL;
          v15 = (_OWORD *)(v12 + 80);
          v16 = v11;
          do
          {
            *v16 = *v15;
            v16[1] = v15[1];
            v16[2] = v15[2];
            v16[3] = v15[3];
            v16[4] = v15[4];
            v16[5] = v15[5];
            v16[6] = v15[6];
            v16 += 8;
            v17 = v15[7];
            v15 += 8;
            *(v16 - 1) = v17;
            --v14;
          }
          while ( v14 );
          *v16 = *v15;
          v11 = (_OWORD *)((char *)v11 + *((unsigned int *)a1 + 12));
        }
        ++v13;
      }
      v12 = *(_QWORD *)v12;
    }
    while ( v13 < v9 );
    v4 = v21;
    v18 = v13 < v5;
    goto LABEL_26;
  }
  v19 = -1073741306;
LABEL_27:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x17u,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids,
      (char)a1,
      v19);
  return v19;
}
