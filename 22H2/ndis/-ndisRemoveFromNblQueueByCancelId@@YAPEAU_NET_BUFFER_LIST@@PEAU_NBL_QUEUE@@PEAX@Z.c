/*
 * XREFs of ?ndisRemoveFromNblQueueByCancelId@@YAPEAU_NET_BUFFER_LIST@@PEAU_NBL_QUEUE@@PEAX@Z @ 0x1C00A6C28
 * Callers:
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00A6794 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 * Callees:
 *     <none>
 */

struct _NET_BUFFER_LIST *__fastcall ndisRemoveFromNblQueueByCancelId(__int64 **a1, void *a2)
{
  __int64 *v2; // r8
  __int64 v3; // r9
  struct _NBL_QUEUE *v5; // r10
  __int64 *v6; // rdx
  struct _NBL_QUEUE *v7; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+8h] [rbp-10h]

  v2 = *a1;
  v3 = 0LL;
  v10 = &v9;
  v9 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    do
    {
      v6 = (__int64 *)*v2;
      if ( (void *)v2[23] == a2 )
      {
        if ( v2 == *a1 )
          *a1 = v6;
        if ( v2 == a1[1] )
        {
          v7 = (struct _NBL_QUEUE *)a1;
          if ( v5 )
            v7 = v5;
          a1[1] = (__int64 *)v7;
        }
        if ( v5 )
          *(_QWORD *)v5 = *v2;
        *v2 = 0LL;
        *v10 = (__int64)v2;
        v10 = v2;
      }
      else
      {
        v5 = (struct _NBL_QUEUE *)v2;
      }
      v2 = v6;
    }
    while ( v6 );
    return (struct _NET_BUFFER_LIST *)v9;
  }
  return (struct _NET_BUFFER_LIST *)v3;
}
