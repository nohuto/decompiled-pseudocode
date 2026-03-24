/*
 * XREFs of UpdateTopLevelWindowDPITransform @ 0x1C0042670
 * Callers:
 *     UpdateWindowMonitor @ 0x1C00701D0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0075140 (xxxCreateWindowEx.c)
 * Callees:
 *     GetMonitorTransform @ 0x1C00426E4 (GetMonitorTransform.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

void __fastcall UpdateTopLevelWindowDPITransform(__int64 a1, __int64 a2)
{
  int v4; // ecx
  void *v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
  if ( ((v4 & 0xF) != 2 || (v4 & 0x20000000) != 0)
    && (memset(v10, 0, sizeof(v10)), (unsigned int)GetMonitorTransform(a2, a1, v10))
    && ((v6 = *(_OWORD **)(a1 + 216)) != 0LL
     || (v6 = (_OWORD *)Win32AllocPoolWithQuota(64LL, 2020438869LL), (*(_QWORD *)(a1 + 216) = v6) != 0LL)) )
  {
    v7 = v10[1];
    *v6 = v10[0];
    v8 = v10[2];
    v6[1] = v7;
    v9 = v10[3];
    v6[2] = v8;
    v6[3] = v9;
  }
  else
  {
    v5 = *(void **)(a1 + 216);
    if ( v5 )
    {
      Win32FreePool(v5);
      *(_QWORD *)(a1 + 216) = 0LL;
    }
  }
}
