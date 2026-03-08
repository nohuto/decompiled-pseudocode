/*
 * XREFs of CleanupHidRequestList @ 0x1C01AAEF0
 * Callers:
 *     <none>
 * Callees:
 *     FreeHidTLCInfo @ 0x1C00D54F4 (FreeHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00D6340 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D63F0 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

void __fastcall CleanupHidRequestList(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  void ***v8; // rcx
  void **v9; // rdx
  void **v10; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = SGDGetUserSessionState(a1);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11, (struct _KTHREAD **)(v1 + 288));
  v4 = *(_QWORD **)(SGDGetUserSessionState(v2) + 376);
  while ( v4 != (_QWORD *)(SGDGetUserSessionState(v3) + 376) )
  {
    v3 = v4;
    v4 = (_QWORD *)*v4;
    *((_DWORD *)v3 + 10) = 0;
    *((_DWORD *)v3 + 9) = 0;
    *((_DWORD *)v3 + 8) = 0;
    *((_DWORD *)v3 + 6) = 0;
    if ( !*((_DWORD *)v3 + 5) )
      FreeHidTLCInfo(v3);
  }
  while ( 1 )
  {
    v6 = SGDGetUserSessionState(v5);
    if ( *(_QWORD *)(v6 + 392) == v6 + 392 )
      break;
    v8 = *(void ****)(SGDGetUserSessionState(v7) + 392);
    *((_DWORD *)v8 + 5) = 0;
    v9 = *v8;
    if ( (*v8)[1] != v8 || (v10 = v8[1], *v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = v10;
    Win32FreePool(v8);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v11);
}
