/*
 * XREFs of SuspendThreadQueue @ 0x1C00DE9B0
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxReceiverDied @ 0x1C00949E0 (xxxReceiverDied.c)
 *     UnlinkSendListSms @ 0x1C0094A8C (UnlinkSendListSms.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00E66E8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  char v21; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 488) & 0x1000001) == 0x1000000 )
  {
    v4 = *(_QWORD **)(a1 + 432);
    v5 = v4[3];
    if ( v5 )
    {
      do
      {
        v9 = *(_QWORD *)v5;
        if ( *(_DWORD *)(v5 + 96) == 9
          && v5 != v4[11]
          && v5 != v4[10]
          && !_bittest((const signed __int32 *)(v5 + 100), 8u) )
        {
          v10 = *(unsigned int *)(v5 + 24);
          if ( (unsigned int)v10 < 0x400 && (MessageTable[v10] & 0x1C00) == 0 )
          {
            CleanEventMessage((void **)v5, (__int64)MessageTable, a3, 7168LL);
            DelQEntry((__int64)(v4 + 3), v5, 1);
          }
        }
        v5 = v9;
      }
      while ( v9 );
    }
    v6 = *(_QWORD *)(a1 + 808);
    if ( v6 )
    {
      do
      {
        v11 = *(_QWORD *)v6;
        if ( v6 != v4[11] && v6 != v4[10] && !_bittest((const signed __int32 *)(v6 + 100), 8u) )
        {
          v12 = *(unsigned int *)(v6 + 24);
          if ( (unsigned int)v12 < 0x400 && (MessageTable[v12] & 0x1C00) == 0 )
          {
            CleanInputMessage(v12, (struct tagQMSG *)v6);
            DelQEntry(a1 + 808, v6, 1);
          }
        }
        v6 = v11;
      }
      while ( v11 );
    }
    v7 = (_QWORD *)(a1 + 520);
    v8 = *(_QWORD **)(a1 + 520);
    if ( v8 != (_QWORD *)(a1 + 520) )
    {
      do
      {
        v13 = (__int64)(v8 - 2);
        v14 = v8;
        v15 = v8[6] == 0LL;
        v8 = (_QWORD *)*v8;
        if ( v15 )
        {
          v16 = *(_DWORD *)(v13 + 84);
          if ( (v16 & 0x4000) == 0 )
          {
            v17 = *(_QWORD *)(v13 + 32);
            if ( v17 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(a1 + 424), **(_QWORD **)(v17 + 424)) )
              {
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
                xxxReceiverDied(v13);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
              }
            }
            else if ( (v16 & 8) != 0 )
            {
              v18 = *(unsigned int *)(v13 + 104);
              if ( (unsigned int)v18 < 0x400 && (MessageTable[v18] & 0x1C00) == 0 )
              {
                --*(_DWORD *)(a1 + 536);
                v19 = *v14;
                if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v20 = (_QWORD *)v14[1], (_QWORD *)*v20 != v14) )
                  __fastfail(3u);
                *v20 = v19;
                *(_QWORD *)(v19 + 8) = v20;
                *v14 = 0LL;
                if ( (_QWORD *)*v7 == v7 )
                {
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 448LL) + 8LL),
                    0xFFFFFFBF);
                  _InterlockedAnd(
                    (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 448LL) + 4LL),
                    0xFFFFFFBF);
                }
                UnlinkSendListSms((__int64 *)v13);
              }
            }
          }
        }
      }
      while ( v8 != v7 );
    }
    *(_DWORD *)(a1 + 1272) |= 0x20u;
  }
}
