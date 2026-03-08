/*
 * XREFs of ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801A3D00
 * Callers:
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C094 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x180129132 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x1801A4294 (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 */

const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Update(struct CManipulationFrame *this)
{
  unsigned int v1; // edx
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  char v5; // r8
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 4) )
  {
    v3 = (_DWORD *)((char *)this + 380);
    do
    {
      if ( (*v3 & 0x10004) != 4 )
        break;
      ++v1;
      v3 += 62;
    }
    while ( v1 < *((_DWORD *)this + 4) );
  }
  if ( CManipulationFrame::IsMousewheelFrame(this) )
    CPointerDeviceCache::s_rcMouseRegion = *(struct tagRECT *)((char *)this + 584);
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 48);
    std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
      v4,
      &v7);
  }
  return CPointerDeviceCache::Query(*((_QWORD *)this + 48));
}
