/*
 * XREFs of ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x1802A88CC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x180017AC0 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1802A86E0 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessInitialize(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICVIEWER_INITIALIZE *a3)
{
  if ( *((_DWORD *)this + 44) )
    return 2147483661LL;
  *((_DWORD *)this + 21) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 3);
  *(_QWORD *)((char *)this + 92) = *((_QWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 100) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)this + 29) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 32) = CResource::GetOwningProcessId(this);
  *((_QWORD *)this + 18) = *((_QWORD *)a3 + 6);
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 14);
  _InterlockedExchange((volatile __int32 *)this + 44, 1);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
