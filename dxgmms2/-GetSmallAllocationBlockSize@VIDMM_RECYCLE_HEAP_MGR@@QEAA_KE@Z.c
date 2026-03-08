/*
 * XREFs of ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0011FEC
 * Callers:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0012020 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00A9448 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(VIDMM_RECYCLE_HEAP_MGR *this, char a2)
{
  int v2; // eax
  int v4; // eax

  if ( (unsigned __int64)qword_1C0076288 <= 0x53333333 )
  {
    if ( !a2 )
    {
      v2 = dword_1C0076498;
      return (unsigned int)(v2 << 20);
    }
    v4 = dword_1C007649C;
  }
  else
  {
    if ( !a2 )
    {
      v2 = dword_1C0076488;
      return (unsigned int)(v2 << 20);
    }
    v4 = dword_1C007648C;
  }
  return (unsigned int)(v4 << 10);
}
