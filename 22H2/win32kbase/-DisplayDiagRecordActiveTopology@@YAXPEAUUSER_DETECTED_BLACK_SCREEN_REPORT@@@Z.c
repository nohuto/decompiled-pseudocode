/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C011E890
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C011ECA0 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C00203A0 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0020490 (DrvQueryDisplayConfig.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  __int64 v2; // rbx
  int DisplayConfigBufferSizes; // eax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  v2 = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2u, (__int64)&v6);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v4 = v6;
    *((_DWORD *)a1 + 5) = v6;
    if ( (_DWORD)v4 )
      v2 = Win32AllocPool(200 * v4, 0x69647355u);
    if ( v2 )
    {
      v5 = DrvQueryDisplayConfig(2u, &v6, v2, 0LL);
      *((_DWORD *)a1 + 4) = v5;
      if ( v5 >= 0 )
      {
        *((_QWORD *)a1 + 3) = v2;
        v2 = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 4) = 14;
    }
    if ( v2 )
      Win32FreePool(v2);
  }
}
