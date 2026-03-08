/*
 * XREFs of AllocateAndLinkHidTLCInfo @ 0x1C00D5964
 * Callers:
 *     ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00D604C (-InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KH.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00D6340 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00D63F0 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 */

__int64 __fastcall AllocateAndLinkHidTLCInfo(__int64 a1, __int16 a2)
{
  __int16 v3; // si
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *i; // rdi
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v3 = a1;
  v4 = SGDGetUserSessionState(a1);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13, (struct RIMLOCK *)(v4 + 288));
  v5 = Win32AllocPoolZInit(48LL, 1416131413LL);
  v7 = v5;
  if ( v5 )
  {
    *(_WORD *)(v5 + 16) = v3;
    *(_WORD *)(v5 + 18) = a2;
    v8 = SGDGetUserSessionState(v6) + 376;
    v9 = *(_QWORD *)v8;
    if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
      __fastfail(3u);
    *(_QWORD *)v7 = v9;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v9 + 8) = v7;
    *(_QWORD *)v8 = v7;
    for ( i = *(__int64 **)(SGDGetUserSessionState(v9) + 392);
          i != (__int64 *)(SGDGetUserSessionState(v10) + 392);
          i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 8) == v3 )
      {
        *(_DWORD *)(v7 + 32) = *((_DWORD *)i + 5);
        break;
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
    return v7;
  }
  else
  {
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
    return 0LL;
  }
}
