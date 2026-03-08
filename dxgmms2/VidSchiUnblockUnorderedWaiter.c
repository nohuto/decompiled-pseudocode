/*
 * XREFs of VidSchiUnblockUnorderedWaiter @ 0x1C003CA48
 * Callers:
 *     VidSchiCompleteSignalSyncObject @ 0x1C0003670 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchTimeoutSyncObject @ 0x1C0040B90 (VidSchTimeoutSyncObject.c)
 * Callees:
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C003C938 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

int __fastcall VidSchiUnblockUnorderedWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  char v5; // bp
  _QWORD *v6; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = (_QWORD *)(a2 + 112);
  v5 = a3;
  v6 = *(_QWORD **)(a2 + 112);
  while ( v6 != v4 )
  {
    v9 = (__int64)(v6 - 36);
    v6 = (_QWORD *)*v6;
    if ( v5
      || *(_DWORD *)(a2 + 48) == 2
      && (!*(_BYTE *)(a2 + 27) ? (v10 = *(_QWORD *)(a2 + 64)) : (v10 = *(_QWORD *)(*(_QWORD *)(a2 + 208) + 40LL)),
          *(_QWORD *)(v9 + 304) <= v10) )
    {
LABEL_15:
      LOBYTE(a3) = v5;
      LODWORD(v3) = VidSchiUnblockUnorderedWaitQueuePacket(a1, v9, a3);
    }
    else
    {
      LODWORD(v3) = *(_DWORD *)(a2 + 48) - 4;
      if ( (unsigned int)v3 <= 1 )
      {
        v11 = *(_QWORD *)(v9 + 304);
        if ( *(_BYTE *)(a2 + 28) )
        {
LABEL_14:
          LODWORD(v3) = *(_DWORD *)(v9 + 272);
          if ( ((unsigned __int8)v3 & 4) != 0 )
            goto LABEL_15;
        }
        else
        {
          v3 = *(_QWORD **)(a2 + 64);
          if ( *(_BYTE *)(a2 + 29) )
          {
            v3 = (_QWORD *)*v3;
            if ( (unsigned __int64)v3 >= v11 )
              goto LABEL_14;
          }
          else if ( *(_DWORD *)v3 - (int)v11 >= 0 )
          {
            goto LABEL_14;
          }
        }
      }
    }
  }
  return (int)v3;
}
