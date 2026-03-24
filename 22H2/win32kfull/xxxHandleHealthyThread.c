/*
 * XREFs of xxxHandleHealthyThread @ 0x1C00034F0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C0052B00 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     xxxGetInputEvent @ 0x1C0053050 (xxxGetInputEvent.c)
 *     xxxUpdateInputHangInfo @ 0x1C0057A70 (xxxUpdateInputHangInfo.c)
 *     xxxSleepThread2 @ 0x1C00586B0 (xxxSleepThread2.c)
 * Callees:
 *     xxxHandleHealthyWindow @ 0x1C00035B0 (xxxHandleHealthyWindow.c)
 *     IsWindowGhosted @ 0x1C007E5FC (IsWindowGhosted.c)
 */

__int64 __fastcall xxxHandleHealthyThread(__int64 a1)
{
  int v1; // eax
  unsigned int i; // esi
  __int64 v4; // rbx
  __int64 v6; // rbp

  v1 = *(_DWORD *)(a1 + 488);
  for ( i = 0; v1 < 0; v1 = *(_DWORD *)(a1 + 488) )
  {
    *(_DWORD *)(a1 + 488) = v1 & 0x7FFFFFFF;
    v4 = 0LL;
    do
    {
      if ( *(_BYTE *)(32LL * (unsigned int)v4 + gSharedInfo[1] + 24) == 1 )
      {
        v6 = *(_QWORD *)(gpKernelHandleTable + 24 * v4);
        if ( *(_QWORD *)(v6 + 16) == a1
          && (unsigned int)IsWindowGhosted(*(_QWORD *)(gpKernelHandleTable + 24 * v4))
          && (unsigned int)xxxHandleHealthyWindow(v6) )
        {
          i = 1;
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 <= giheLast );
  }
  return i;
}
