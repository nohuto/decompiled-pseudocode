/*
 * XREFs of SuspendThreadQueue @ 0x1C0117790
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C006684C (DelQEntry.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UnlinkSendListSms @ 0x1C006A330 (UnlinkSendListSms.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C1800 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     xxxReceiverDied @ 0x1C00DADBC (xxxReceiverDied.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C010D880 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0121FC8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 */

void __fastcall SuspendThreadQueue(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rbx
  __int64 *v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 *v9; // rbp
  __int64 *v10; // rbp
  __int64 v12; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rdx
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v27 = a1;
  v1 = a1;
  if ( (*(_DWORD *)(a1 + 488) & 0x1000001) == 0x1000000 )
  {
    v2 = *(_QWORD *)(a1 + 432);
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)&v26, v2);
    v5 = *(__int64 **)(v2 + 24);
    if ( v5 )
    {
      do
      {
        v9 = (__int64 *)*v5;
        if ( *((_DWORD *)v5 + 24) == 9
          && v5 != *(__int64 **)(v2 + 80)
          && v5 != *(__int64 **)(v2 + 72)
          && (*((_DWORD *)v5 + 25) & 0x100) == 0 )
        {
          v12 = *((unsigned int *)v5 + 6);
          if ( !((unsigned int)v12 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v12] >> 10) & 7) )
          {
            CleanEventMessage((struct tagQMSG *)v5);
            DelQEntry((unsigned int **)(v2 + 24), (unsigned int *)v5, 1);
          }
        }
        v5 = v9;
      }
      while ( v9 );
      v1 = v27;
    }
    v6 = *(__int64 **)(v1 + 808);
    if ( v6 )
    {
      do
      {
        v10 = (__int64 *)*v6;
        if ( v6 != *(__int64 **)(v2 + 80) && v6 != *(__int64 **)(v2 + 72) && (*((_DWORD *)v6 + 25) & 0x100) == 0 )
        {
          v3 = *((unsigned int *)v6 + 6);
          if ( !((unsigned int)v3 < 0x400 ? ((unsigned __int16)MessageTable[v3] >> 10) & 7 : 1) )
          {
            CleanInputMessage(v3, (struct tagQMSG *)v6);
            DelQEntry((unsigned int **)(v1 + 808), (unsigned int *)v6, 1);
          }
        }
        v6 = v10;
      }
      while ( v10 );
      v1 = v27;
    }
    v7 = (_QWORD *)(v1 + 520);
    v8 = *(_QWORD **)(v1 + 520);
    if ( v8 != (_QWORD *)(v1 + 520) )
    {
      do
      {
        v14 = (__int64)(v8 - 2);
        v15 = v8;
        v16 = v8[6] == 0LL;
        v8 = (_QWORD *)*v8;
        if ( v16 )
        {
          v17 = *(_DWORD *)(v14 + 84);
          if ( (v17 & 0x4000) == 0 )
          {
            v18 = *(_QWORD *)(v14 + 32);
            if ( v18 )
            {
              if ( !PsGetProcessCommonJob(**(_QWORD **)(v1 + 424), **(_QWORD **)(v18 + 424)) )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v27);
                xxxReceiverDied(v14, v21, v22, v23);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v27);
              }
            }
            else if ( (v17 & 8) != 0 )
            {
              v19 = *(unsigned int *)(v14 + 104);
              if ( !((unsigned int)v19 >= 0x400 ? 1 : ((unsigned __int16)MessageTable[v19] >> 10) & 7) )
              {
                --*(_DWORD *)(v1 + 536);
                v24 = *v15;
                if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v25 = (_QWORD *)v15[1], (_QWORD *)*v25 != v15) )
                  __fastfail(3u);
                *v25 = v24;
                *(_QWORD *)(v24 + 8) = v25;
                *v15 = 0LL;
                if ( (_QWORD *)*v7 == v7 )
                {
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 448LL) + 6LL) &= ~0x40u;
                  *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 448LL) + 4LL) &= ~0x40u;
                }
                UnlinkSendListSms((__int64 *)v14, (__int64)v15, v3, v4);
              }
            }
          }
        }
      }
      while ( v8 != v7 );
    }
    *(_DWORD *)(v1 + 1232) |= 0x20u;
  }
}
