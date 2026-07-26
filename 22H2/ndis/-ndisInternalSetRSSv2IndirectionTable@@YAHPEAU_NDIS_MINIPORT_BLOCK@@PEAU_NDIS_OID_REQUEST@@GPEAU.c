/*
 * XREFs of ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C0088968
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0089C38 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C00883D8 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1C008851C (-ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C00885AC (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1C0088F18 (-ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBE.c)
 */

__int64 __fastcall ndisInternalSetRSSv2IndirectionTable(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int16 a3,
        struct _PROCESSOR_NUMBER *a4,
        struct _PROCESSOR_NUMBER a5,
        unsigned __int16 a6,
        struct _PROCESSOR_NUMBER *a7,
        struct _PROCESSOR_NUMBER *a8)
{
  struct _PROCESSOR_NUMBER *v8; // r12
  struct _NDIS_RSS_DPC_WORKER_CONTEXT *RssV2Context; // rsi
  struct _PROCESSOR_NUMBER *v10; // r13
  unsigned int v11; // r15d
  unsigned __int16 v12; // r8
  __int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // rax
  struct _PROCESSOR_NUMBER v16; // edi
  struct _NDIS_RSS_SET_INDIRECTION_ENTRIES *v17; // rbx
  char Reserved; // r14
  int v19; // r8d
  __int64 v20; // r10
  __int64 v21; // r11
  int v22; // eax
  int v23; // ecx
  unsigned __int16 v24; // cx
  struct _PROCESSOR_NUMBER v26; // ebx
  struct _NDIS_OID_REQUEST *v27; // rdi
  unsigned __int64 v28; // r12
  char v29; // r8
  unsigned int v30; // r11d
  struct _PROCESSOR_NUMBER *v31; // r9
  int v32; // r8d
  struct _PROCESSOR_NUMBER *v33; // r9
  char v34; // r10
  unsigned int v35; // r11d
  NDIS_OBJECT_HEADER Header; // r9d
  int v37; // r8d
  __int64 v38; // r10
  __int64 v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // r11
  int v42; // r14d
  unsigned __int16 v43; // r13
  int v44; // r8d
  char v45; // r10
  __int16 v46; // r11
  NDIS_OBJECT_HEADER v47; // r9d
  int v48; // r8d
  __int64 v49; // r10
  __int64 v50; // rdx
  unsigned int v51; // [rsp+20h] [rbp-81h]
  struct _PROCESSOR_NUMBER v52; // [rsp+40h] [rbp-61h]
  int v53; // [rsp+48h] [rbp-59h]
  int v54; // [rsp+48h] [rbp-59h]
  unsigned __int16 v55[2]; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int16 v56; // [rsp+58h] [rbp-49h]
  int v57; // [rsp+5Ch] [rbp-45h] BYREF
  struct _PROCESSOR_NUMBER *v58; // [rsp+60h] [rbp-41h]
  struct _NDIS_OID_REQUEST *v59; // [rsp+68h] [rbp-39h]
  struct _NDIS_MINIPORT_BLOCK *v60; // [rsp+70h] [rbp-31h]
  struct _PROCESSOR_NUMBER *v61; // [rsp+78h] [rbp-29h]
  struct _PROCESSOR_NUMBER *v62; // [rsp+80h] [rbp-21h]
  __int128 v63; // [rsp+88h] [rbp-19h] BYREF

  v8 = a7;
  RssV2Context = a1->RssV2Context;
  v10 = a4;
  v11 = a3;
  v59 = a2;
  v12 = 0;
  v56 = a6;
  v62 = a4;
  v60 = a1;
  v13 = v11;
  v58 = a7;
  v61 = a8;
  v57 = 0;
  v63 = 0LL;
  if ( (unsigned __int16)v11 > 0x3Fu )
  {
    v14 = (unsigned __int16)(((unsigned __int16)(v11 - 64) >> 6) + 1);
    do
    {
      v15 = v12++;
      *((_QWORD *)&v63 + v15) = -1LL;
      v13 -= 64;
      --v14;
    }
    while ( v14 );
  }
  if ( v13 )
    *((_QWORD *)&v63 + v12) = (1LL << v13) - 1;
  *((_BYTE *)RssV2Context + 69) = 1;
  v16 = a5;
  v17 = (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68);
  *((_WORD *)RssV2Context + 35) = 20;
  *((_QWORD *)RssV2Context + 10) = 20LL;
  Reserved = 0;
  *((_BYTE *)RssV2Context + 68) = -55;
  *((_DWORD *)RssV2Context + 18) = 0;
  *((_DWORD *)RssV2Context + 19) = 24;
  v52 = a5;
  v52.Reserved = 0;
  if ( !ndisAreProcessorsEqual(a5, *a8) )
  {
    v22 = *(_DWORD *)(v20 + 236);
    v23 = *(_DWORD *)(v20 + 240);
    *(_DWORD *)v55 = v19;
    *((_DWORD *)RssV2Context + 22) = v22;
    HIBYTE(v55[1]) = v21;
    *(_DWORD *)((char *)RssV2Context + 102) = *(_DWORD *)v55;
    *((_DWORD *)RssV2Context + 24) = 2;
    *((_WORD *)RssV2Context + 50) = v21;
    *((_DWORD *)RssV2Context + 23) = v23;
    *((_DWORD *)RssV2Context + 27) = 259;
    *((_DWORD *)RssV2Context + 21) = 1;
  }
LABEL_8:
  v24 = v21;
  do
  {
    if ( *((_QWORD *)&v63 + v24) != v21 )
    {
      v26 = v52;
      v27 = v59;
      v55[0] = -1;
      while ( ndisEntrySetScanForward(v55, (struct _NDIS_RSS_ENTRY_SET *)&v63) )
      {
        v28 = v55[0];
        if ( Reserved == 1 )
        {
          Reserved = 0;
          v52 = v10[v55[0]];
          v52.Reserved = 0;
          v26 = v52;
          *((_DWORD *)RssV2Context + 21) = 0;
        }
        if ( ndisAreProcessorsEqual(v26, v10[v28]) )
        {
          v30 = v56;
          v31 = v58;
          *((_QWORD *)&v63 + (v28 >> 6)) &= ~(1LL << (v29 & 0x3F));
          if ( !ndisAreProcessorsEqual(v31[(unsigned int)v28 % v30], v26) )
          {
            Header = v27[1].Header;
            v53 = v32;
            v37 = *(_DWORD *)(&v27->Reserved2 + 1);
            HIBYTE(v53) = v34;
            v38 = *((unsigned int *)RssV2Context + 21);
            *((_DWORD *)RssV2Context + 6 * v38 + 24) = 0;
            v39 = 3 * v38;
            *(_DWORD *)((char *)RssV2Context + 8 * v39 + 102) = v53;
            *((NDIS_OBJECT_HEADER *)RssV2Context + 2 * v39 + 23) = Header;
            v33 = v58;
            *((_WORD *)RssV2Context + 4 * v39 + 50) = v28;
            *((_DWORD *)RssV2Context + 2 * v39 + 22) = v37;
            *((_DWORD *)RssV2Context + 2 * v39 + 27) = 259;
            *((_DWORD *)RssV2Context + 21) = v38 + 1;
          }
          if ( v56 > (unsigned __int16)v11 )
          {
            v40 = v35 / v11;
            v41 = 1;
            if ( v40 > 1 )
            {
              v42 = v40;
              do
              {
                v43 = v28 + v41 * v11;
                if ( !ndisAreProcessorsEqual(v33[v43], v26) )
                {
                  v47 = v27[1].Header;
                  v54 = v44;
                  v48 = *(_DWORD *)(&v27->Reserved2 + 1);
                  HIBYTE(v54) = v45;
                  v49 = *((unsigned int *)RssV2Context + 21);
                  *((_DWORD *)RssV2Context + 6 * v49 + 24) = 0;
                  v50 = 3 * v49;
                  *(_DWORD *)((char *)RssV2Context + 8 * v50 + 102) = v54;
                  *((NDIS_OBJECT_HEADER *)RssV2Context + 2 * v50 + 23) = v47;
                  v33 = v58;
                  *((_WORD *)RssV2Context + 4 * v50 + 50) = v43;
                  *((_DWORD *)RssV2Context + 2 * v50 + 22) = v48;
                  *((_DWORD *)RssV2Context + 2 * v50 + 27) = 259;
                  *((_DWORD *)RssV2Context + 21) = v49 + 1;
                }
                v41 = v46 + 1;
              }
              while ( v41 < v42 );
              Reserved = v52.Reserved;
              v10 = v62;
            }
          }
        }
      }
      ndisExecuteRSSv2DirectOid(v60, v27, (struct _KDPC *)RssV2Context, v26);
      v8 = v58;
      v16 = a5;
      v17 = (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68);
      ndisMergeRSSv2DirectOidResults(
        (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68),
        v11,
        v10,
        a5,
        v51,
        v58,
        v61,
        &v57);
      v21 = 0LL;
      Reserved = 1;
      v52.Reserved = 1;
      goto LABEL_8;
    }
    ++v24;
  }
  while ( v24 < 2u );
  if ( !Reserved )
  {
    ndisExecuteRSSv2DirectOid(v60, v59, (struct _KDPC *)RssV2Context, v52);
    ndisMergeRSSv2DirectOidResults(v17, v11, v10, v16, v51, v8, v61, &v57);
  }
  return (unsigned int)v57;
}
