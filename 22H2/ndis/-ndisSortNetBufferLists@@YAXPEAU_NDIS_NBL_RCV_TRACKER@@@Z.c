/*
 * XREFs of ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002110
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0001AA0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0036030 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0099D10 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A3074 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A3984 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C009A084 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00C74F4 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisSortNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1, __int64 a2, char *a3)
{
  char v4; // r9
  int v5; // r11d
  unsigned int v6; // r13d
  __int64 v7; // rax
  _QWORD *v8; // r10
  struct _NDIS_OBJECT_HEADER *v9; // rdx
  __int64 *v10; // r15
  unsigned __int16 v11; // di
  __int64 *v12; // rax
  char v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // r14
  unsigned int v18; // esi
  char *v19; // r8
  char *v20; // rax
  __int64 v21; // r10
  unsigned int v22; // ecx
  _WORD *v23; // rax
  __int64 v24; // rax
  char *v25; // rdx
  _DWORD *v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // rdx
  int v29; // [rsp+30h] [rbp-78h]
  struct _NDIS_OBJECT_HEADER *v30; // [rsp+38h] [rbp-70h]
  _QWORD *v31; // [rsp+40h] [rbp-68h]
  __int64 *v32; // [rsp+48h] [rbp-60h]
  struct _NET_BUFFER_LIST *v33; // [rsp+50h] [rbp-58h]
  char v34; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v35; // [rsp+B8h] [rbp+10h]
  unsigned __int16 v36; // [rsp+C0h] [rbp+18h]
  int v37; // [rsp+C8h] [rbp+20h]

  v4 = 0;
  v34 = 0;
  v29 = 0;
  v5 = 0;
  v37 = 0;
  v6 = 0;
  v7 = *((_QWORD *)a1 + 1);
  v8 = 0LL;
  v9 = *(struct _NDIS_OBJECT_HEADER **)a1;
  v10 = (__int64 *)*((_QWORD *)a1 + 3);
  *((_DWORD *)a1 + 172) = 0;
  v30 = v9;
  v31 = 0LL;
  v33 = 0LL;
  if ( *(_QWORD *)(v7 + 328) || (*((_DWORD *)a1 + 4) & 2) != 0 )
  {
    *((_QWORD *)a1 + 8) = v10;
    *((_QWORD *)a1 + 9) = *((_QWORD *)a1 + 4);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    return;
  }
  v11 = 0;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( v10 )
  {
    while ( 1 )
    {
      v12 = (__int64 *)*v10;
      v13 = 0;
      *v10 = 0LL;
      v32 = v12;
      if ( *(_DWORD *)(*(_QWORD *)a1 + 464LL) )
        break;
      v14 = v10[1];
      v15 = *(_QWORD *)(v14 + 8);
      v16 = *(_DWORD *)(v15 + 40);
      if ( v16 < 0xE )
        goto LABEL_48;
      v17 = *(unsigned int *)(v14 + 16);
      if ( v16 <= (unsigned int)v17 )
        goto LABEL_48;
      v18 = v16 - v17;
      if ( v16 - (unsigned int)v17 < 0xE )
        goto LABEL_48;
      if ( (*(_BYTE *)(v15 + 10) & 5) != 0 )
      {
        v19 = *(char **)(v15 + 24);
      }
      else
      {
        v20 = (char *)MmMapLockedPages((PMDL)v15, 0);
        v4 = v34;
        v19 = v20;
        v5 = v37;
        v8 = v31;
      }
      a3 = &v19[v17];
      HIBYTE(v35) = a3[13];
      HIBYTE(v36) = a3[12];
      LOBYTE(v36) = HIBYTE(v35);
      LOBYTE(v35) = HIBYTE(v36);
      if ( v36 > 0x600u )
      {
        if ( v36 == 0x8100 )
        {
          if ( v16 < 0x12 || v18 < 0x12 )
            goto LABEL_47;
          v35 = *((_WORD *)a3 + 8);
        }
        v11 = v35;
        goto LABEL_24;
      }
      if ( ndisSnapHeaderCheckPresent && v18 < 0x16 )
      {
LABEL_47:
        v9 = v30;
LABEL_48:
        if ( v8 )
          *v8 = v10;
        else
          v33 = (struct _NET_BUFFER_LIST *)v10;
        ++*(_QWORD *)&v9[862].Type;
        v8 = v10;
        v31 = v10;
        goto LABEL_52;
      }
      if ( a3[14] == -86 && a3[15] == -86 && a3[16] == 3 )
      {
        v11 = *((_WORD *)a3 + 10);
        goto LABEL_24;
      }
LABEL_25:
      v21 = *((_QWORD *)a1 + 1);
      if ( !v13 )
        goto LABEL_34;
      if ( v29 == v11 )
      {
        LODWORD(a3) = v5;
        if ( v4 != 1 )
          goto LABEL_34;
      }
      else
      {
        v22 = *(_DWORD *)(v21 + 24);
        LODWORD(a3) = 0;
        v29 = v11;
        if ( !v22 )
        {
LABEL_33:
          v5 = 0;
          v34 = 0;
          v37 = 0;
LABEL_34:
          LODWORD(v24) = 0;
          goto LABEL_35;
        }
        v23 = (_WORD *)(v21 + 32);
        while ( v11 != *v23 )
        {
          LODWORD(a3) = (_DWORD)a3 + 1;
          v23 += 8;
          if ( (unsigned int)a3 >= v22 )
            goto LABEL_33;
        }
        v5 = (int)a3;
        v37 = (int)a3;
        v34 = 1;
      }
      if ( *((_WORD *)a1 + 20 * v6 + 24) == v11 )
      {
        LODWORD(v24) = v6;
      }
      else
      {
        v27 = *((_DWORD *)a1 + 172);
        LODWORD(v24) = 1;
        if ( v27 )
        {
          while ( *((_WORD *)a1 + 20 * (unsigned int)v24 + 24) != v11 )
          {
            LODWORD(v24) = v24 + 1;
            if ( (unsigned int)v24 > v27 )
              goto LABEL_44;
          }
          v6 = v24;
        }
        else
        {
LABEL_44:
          v24 = v27 + 1;
          *((_DWORD *)a1 + 172) = v24;
          v28 = 5 * v24;
          *((_WORD *)a1 + 4 * v28 + 24) = v11;
          v6 = v27 + 1;
          *((_QWORD *)a1 + v28 + 7) = *(_QWORD *)(v21 + 16 * ((unsigned int)a3 + 1LL) + 24);
          *((_QWORD *)a1 + v28 + 8) = 0LL;
        }
      }
LABEL_35:
      v25 = (char *)a1 + 40 * (unsigned int)v24;
      v26 = (_DWORD *)((char *)a1 + 40 * (unsigned int)v24 + 80);
      if ( *((_QWORD *)v25 + 8) )
      {
        v8 = v31;
        **((_QWORD **)v25 + 9) = v10;
        ++*v26;
        *((_QWORD *)v25 + 9) = v10;
        v9 = v30;
      }
      else
      {
        *((_QWORD *)v25 + 8) = v10;
        if ( (*((_DWORD *)a1 + 4) & 0x100) != 0 )
        {
          *((_QWORD *)v25 + 9) = 0LL;
          *v10 = (__int64)v32;
          *v26 = *((_DWORD *)a1 + 11);
LABEL_55:
          if ( v33 )
          {
            if ( byte_1C00E4FD0 && (*(_DWORD *)&v30[1465] & 2) != 0 )
              PktMonClientNblDropNdis((_DWORD)v30 + 5808, (_DWORD)v33, (_DWORD)a3, 1, -1073676273, -536866810);
            if ( (*((_DWORD *)a1 + 4) & 2) == 0 )
              ndisReturnNetBufferListsInternal(v30, v33, *((_DWORD *)a1 + 4) & 1, 0LL);
          }
          return;
        }
        v8 = v31;
        *((_QWORD *)v25 + 9) = v10;
        v9 = v30;
        *v26 = 1;
      }
LABEL_52:
      v10 = v32;
      if ( !v32 )
        goto LABEL_55;
      v4 = v34;
    }
    v11 = *((_WORD *)v10 + 100);
LABEL_24:
    v13 = 1;
    goto LABEL_25;
  }
}
