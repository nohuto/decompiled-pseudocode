/*
 * XREFs of SuspendThreadQueue @ 0x1C0105CE0
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UnlinkSendListSms @ 0x1C00AC18C (UnlinkSendListSms.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     xxxReceiverDied @ 0x1C00F7FC0 (xxxReceiverDied.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0117934 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char v21; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 488) & 0x1000001) == 0x1000000 )
  {
    v2 = *(_QWORD **)(a1 + 432);
    v3 = v2[3];
    if ( v3 )
    {
      do
      {
        v7 = *(_QWORD *)v3;
        if ( *(_DWORD *)(v3 + 96) == 9
          && v3 != v2[10]
          && v3 != v2[9]
          && !_bittest((const signed __int32 *)(v3 + 100), 8u) )
        {
          v8 = *(unsigned int *)(v3 + 24);
          if ( (unsigned int)v8 < 0x400 && (MessageTable[v8] & 0x1C00) == 0 )
          {
            CleanEventMessage((struct tagQMSG *)v3);
            DelQEntry((__int64)(v2 + 3), v3, 1);
          }
        }
        v3 = v7;
      }
      while ( v7 );
    }
    v4 = *(_QWORD *)(a1 + 808);
    if ( v4 )
    {
      do
      {
        v9 = *(_QWORD *)v4;
        if ( v4 != v2[10] && v4 != v2[9] && !_bittest((const signed __int32 *)(v4 + 100), 8u) )
        {
          v10 = *(unsigned int *)(v4 + 24);
          if ( (unsigned int)v10 < 0x400 && (MessageTable[v10] & 0x1C00) == 0 )
          {
            CleanInputMessage(v10, (struct tagQMSG *)v4);
            DelQEntry(a1 + 808, v4, 1);
          }
        }
        v4 = v9;
      }
      while ( v9 );
    }
    v5 = (_QWORD *)(a1 + 520);
    v6 = *(_QWORD **)(a1 + 520);
    if ( v6 != (_QWORD *)(a1 + 520) )
    {
      do
      {
        v11 = (__int64)(v6 - 2);
        v12 = v6;
        v13 = v6[6] == 0LL;
        v6 = (_QWORD *)*v6;
        if ( v13 )
        {
          v14 = *(_DWORD *)(v11 + 84);
          if ( (v14 & 0x4000) == 0 )
          {
            v15 = *(_QWORD *)(v11 + 32);
            if ( v15 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(a1 + 424), **(_QWORD **)(v15 + 424)) )
              {
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
                xxxReceiverDied(v11);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21, v16, v17);
              }
            }
            else if ( (v14 & 8) != 0 )
            {
              v18 = *(unsigned int *)(v11 + 104);
              if ( (unsigned int)v18 < 0x400 && (MessageTable[v18] & 0x1C00) == 0 )
              {
                --*(_DWORD *)(a1 + 536);
                v19 = *v12;
                if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v20 = (_QWORD *)v12[1], (_QWORD *)*v20 != v12) )
                  __fastfail(3u);
                *v20 = v19;
                *(_QWORD *)(v19 + 8) = v20;
                *v12 = 0LL;
                if ( (_QWORD *)*v5 == v5 )
                {
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 448LL) + 8LL),
                    0xFFFFFFBF);
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 448LL) + 4LL),
                    0xFFFFFFBF);
                }
                UnlinkSendListSms((__int64 *)v11);
              }
            }
          }
        }
      }
      while ( v6 != v5 );
    }
    *(_DWORD *)(a1 + 1256) |= 0x20u;
  }
}
