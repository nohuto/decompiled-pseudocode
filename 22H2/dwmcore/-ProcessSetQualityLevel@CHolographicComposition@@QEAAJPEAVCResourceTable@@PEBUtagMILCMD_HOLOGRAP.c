/*
 * XREFs of ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x180255FD4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x18025A660 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicComposition::ProcessSetQualityLevel(
        struct IUnknown *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL *a3)
{
  struct IUnknownVtbl *lpVtbl; // rdx
  CHolographicInteropTaskQueue *QueryInterface; // rax

  lpVtbl = this[10].lpVtbl;
  if ( lpVtbl )
  {
    if ( BYTE5(this[13].lpVtbl) )
    {
      LODWORD(this[13].lpVtbl) = *((_DWORD *)a3 + 2);
      if ( BYTE4(this[13].lpVtbl) )
      {
        QueryInterface = (CHolographicInteropTaskQueue *)lpVtbl[2].QueryInterface;
        if ( QueryInterface )
        {
          if ( LOBYTE(lpVtbl[10].QueryInterface) )
            CHolographicInteropTaskQueue::PostMessageW(QueryInterface, 0xBu, this + 8, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  return 0LL;
}
