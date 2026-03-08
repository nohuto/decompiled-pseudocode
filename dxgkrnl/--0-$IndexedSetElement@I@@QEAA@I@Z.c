/*
 * XREFs of ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C0005F3C
 * Callers:
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C00056EC (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0005B4C (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C002061C (--0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY.c)
 *     ??0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z @ 0x1C00211B4 (--0DMMVIDEOPRESENTSOURCE@@QEAA@QEAVDMMVIDEOPRESENTSOURCESET@@I@Z.c)
 *     ??0DMMVIDPNSOURCEMODE@@QEAA@I@Z @ 0x1C0066F58 (--0DMMVIDPNSOURCEMODE@@QEAA@I@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x1C0066FBC (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>(__int64 a1, int a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &SetElement::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry1(1LL, 240LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0,
          2,
          -1,
          (__int64)L"i_Id != D3DDDI_ID_UNINITIALIZED",
          240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return a1;
}
