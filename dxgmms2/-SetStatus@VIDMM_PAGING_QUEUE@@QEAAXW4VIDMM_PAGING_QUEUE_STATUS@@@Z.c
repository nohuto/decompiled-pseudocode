/*
 * XREFs of ?SetStatus@VIDMM_PAGING_QUEUE@@QEAAXW4VIDMM_PAGING_QUEUE_STATUS@@@Z @ 0x1C00A8870
 * Callers:
 *     ?InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C00123B8 (-InsertPagingQueueList@VIDMM_DEVICE@@QEAAXPEAVVIDMM_PAGING_QUEUE@@@Z.c)
 *     ?Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00A8694 (-Resume@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00A87E4 (-Suspend@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z @ 0x1C00F1314 (-ReclaimPacket@VIDMM_PAGING_QUEUE@@QEAAXPEAUVIDMM_PAGING_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall VIDMM_PAGING_QUEUE::SetStatus(__int64 *a1, int a2)
{
  __int64 *v2; // rax
  int *v3; // rsi
  __int64 v4; // rdi
  int v6; // edi
  __int64 **v7; // rcx
  __int64 *v8; // rax
  __int64 **v9; // rcx
  struct _KEVENT *v10; // rcx
  __int64 *v11; // rax
  __int64 **v12; // rcx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 **v16; // rcx
  __int64 *v17; // rax
  __int64 **v18; // rcx

  LODWORD(v2) = *(_DWORD *)&g_IsInternalReleaseOrDbg;
  v3 = (int *)(a1 + 14);
  v4 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v2 = (__int64 *)WdLogNewEntry5_WdTrace(a1);
    v2[3] = (__int64)a1;
    v2[4] = *v3;
    v2[5] = v4;
  }
  if ( !(_DWORD)v4 )
  {
    v8 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 )
      goto LABEL_24;
    v9 = (__int64 **)a1[1];
    if ( *v9 != a1 )
      goto LABEL_24;
    *v9 = v8;
    v8[1] = (__int64)v9;
    *a1 = 0LL;
    a1[1] = 0LL;
    *v3 = 0;
    v10 = (struct _KEVENT *)a1[15];
    goto LABEL_13;
  }
  v6 = v4 - 1;
  if ( !v6 )
  {
    if ( *v3 == 2 )
    {
      v11 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 )
        goto LABEL_24;
      v12 = (__int64 **)a1[1];
      if ( *v12 != a1 )
        goto LABEL_24;
      *v12 = v11;
      v11[1] = (__int64)v12;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v13 = *((_BYTE *)a1 + 128) == 0;
    v14 = a1[10];
    *v3 = 1;
    if ( v13 )
    {
      if ( *((_BYTE *)a1 + 129) )
      {
        v15 = v14 + 96;
LABEL_21:
        v16 = *(__int64 ***)(v15 + 8);
        if ( *v16 != (__int64 *)v15 )
          goto LABEL_24;
        *a1 = v15;
        a1[1] = (__int64)v16;
        *v16 = a1;
        *(_QWORD *)(v15 + 8) = a1;
        v10 = *(struct _KEVENT **)(a1[10] + 176);
LABEL_13:
        LODWORD(v2) = KeSetEvent(v10, 0, 0);
        return (int)v2;
      }
    }
    else if ( *((_DWORD *)a1 + 29) != 3 )
    {
      v15 = v14 + 112;
      goto LABEL_21;
    }
    v15 = v14 + 80;
    goto LABEL_21;
  }
  if ( v6 == 1 )
  {
    if ( *v3 == 1 )
    {
      v17 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 )
        goto LABEL_24;
      v18 = (__int64 **)a1[1];
      if ( *v18 != a1 )
        goto LABEL_24;
      *v18 = v17;
      v17[1] = (__int64)v18;
      *a1 = 0LL;
      a1[1] = 0LL;
    }
    v2 = (__int64 *)(a1[10] + 128);
    v7 = *(__int64 ***)(a1[10] + 136);
    if ( *v7 == v2 )
    {
      *a1 = (__int64)v2;
      a1[1] = (__int64)v7;
      *v7 = a1;
      v2[1] = (__int64)a1;
      *v3 = 2;
      return (int)v2;
    }
LABEL_24:
    __fastfail(3u);
  }
  return (int)v2;
}
