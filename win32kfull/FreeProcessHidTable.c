/*
 * XREFs of FreeProcessHidTable @ 0x1C00F0B38
 * Callers:
 *     DestroyProcessHidRequests @ 0x1C00F0B20 (DestroyProcessHidRequests.c)
 * Callees:
 *     FreeHidProcessRequest @ 0x1C00D58B8 (FreeHidProcessRequest.c)
 */

void __fastcall FreeProcessHidTable(__int64 a1)
{
  __int64 *v1; // rbx
  struct tagPROCESS_HID_REQUEST **v2; // rsi
  struct tagPROCESS_HID_REQUEST **v3; // rdi
  int v4; // ebp
  struct tagPROCESS_HID_REQUEST **i; // rdi
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = *(__int64 **)(a1 + 824);
  *(_QWORD *)(a1 + 824) = 0LL;
  v2 = (struct tagPROCESS_HID_REQUEST **)(v1 + 2);
  if ( *v2 == (struct tagPROCESS_HID_REQUEST *)v2
    && (v3 = (struct tagPROCESS_HID_REQUEST **)(v1 + 4), *v3 == (struct tagPROCESS_HID_REQUEST *)v3)
    && (__int64 *)v1[6] == v1 + 6
    && (*(_DWORD *)(a1 + 812) & 0x8000000) == 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    v3 = (struct tagPROCESS_HID_REQUEST **)(v1 + 4);
  }
  HMAssignmentUnlock(v1 + 9);
  HMAssignmentUnlock(v1 + 8);
  while ( *v2 != (struct tagPROCESS_HID_REQUEST *)v2 )
    FreeHidProcessRequest(*v2, 1, (struct tagPROCESS_HID_TABLE *)v1);
  while ( *v3 != (struct tagPROCESS_HID_REQUEST *)v3 )
    FreeHidProcessRequest(*v3, 2, (struct tagPROCESS_HID_TABLE *)v1);
  for ( i = (struct tagPROCESS_HID_REQUEST **)(v1 + 6);
        *i != (struct tagPROCESS_HID_REQUEST *)i;
        FreeHidProcessRequest(*i, 3, (struct tagPROCESS_HID_TABLE *)v1) )
  {
    ;
  }
  v6 = (__int64 *)*v1;
  if ( *(__int64 **)(*v1 + 8) != v1 || (v7 = (__int64 **)v1[1], *v7 != v1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  Win32FreePool(v1);
  if ( v4 )
  {
    v9 = SGDGetUserSessionState(v8);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v9 + 16840));
  }
}
