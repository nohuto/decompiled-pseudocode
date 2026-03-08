/*
 * XREFs of ?ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CREATE@@@Z @ 0x1802A45C8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802A4588 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessCreate(
        CHolographicDisplay *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICDISPLAY_CREATE *a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v6; // rax

  v3 = (RTL_SRWLOCK *)((char *)this + 128);
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 7);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 6);
  v6 = *((_QWORD *)a3 + 1) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = *((_QWORD *)a3 + 2) - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
    *(_OWORD *)((char *)this + 92) = *(_OWORD *)((char *)a3 + 8);
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged(this);
  return 0LL;
}
