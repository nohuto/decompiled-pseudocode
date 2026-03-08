/*
 * XREFs of DpiFdoIsDevicePresent @ 0x1C0397F70
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C03977F0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall DpiFdoIsDevicePresent(__int64 a1, char *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  char v6; // di
  _WORD *v7; // rcx
  _WORD v9[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = 0;
  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 1120);
  v6 = 1;
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) > 2 && !*(_BYTE *)(a1 + 1159) )
      return (unsigned int)-1073741637;
    goto LABEL_7;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _WORD *, _QWORD, int))(a1 + 616))(
         *(_QWORD *)(a1 + 568),
         0LL,
         v9,
         0LL,
         64) == 64 )
  {
    v7 = *(_WORD **)(a1 + 1112);
    if ( v9[0] != *v7 || v9[1] != v7[1] )
      v6 = 0;
LABEL_7:
    *a2 = v6;
    return v4;
  }
  v4 = -1073741823;
  WdLogSingleEntry2(2LL, *(_QWORD *)(a1 + 616), -1073741823LL);
  return v4;
}
