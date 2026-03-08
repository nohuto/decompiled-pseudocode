/*
 * XREFs of ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C0016DB0
 * Callers:
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ @ 0x1C005809C (-CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01D56C8 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C01D9450 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 *     ?CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@@Z @ 0x1C02EF998 (-CacheIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAKAEAV-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(ReferenceCounted **a1, ReferenceCounted *a2)
{
  ReferenceCounted *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 && a2 != v4 )
    result = ReferenceCounted::Release(v4);
  *a1 = a2;
  return result;
}
