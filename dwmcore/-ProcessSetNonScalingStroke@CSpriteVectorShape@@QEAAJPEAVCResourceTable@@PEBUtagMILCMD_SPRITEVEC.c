/*
 * XREFs of ?ProcessSetNonScalingStroke@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE@@@Z @ 0x18024EA84
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetNonScalingStroke(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE *a3)
{
  char v4; // al
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = *((_BYTE *)a3 + 8) != 0;
  if ( v4 != *((_BYTE *)this + 212) )
  {
    *((_BYTE *)this + 212) = v4;
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
    {
      *((_QWORD *)this + 16) = 0LL;
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v5 + 16LL))(v5, a2);
    }
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
    {
      *((_QWORD *)this + 17) = 0LL;
      (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)v6 + 16LL))(v6, a2);
    }
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
