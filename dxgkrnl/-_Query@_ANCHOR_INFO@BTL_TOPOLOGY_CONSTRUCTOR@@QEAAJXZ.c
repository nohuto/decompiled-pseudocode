/*
 * XREFs of ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C01BF620
 * Callers:
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01BF528 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C03BBD8C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query(BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int128 v4; // [rsp+20h] [rbp-40h]
  __int128 v5; // [rsp+30h] [rbp-30h]
  __int128 v6; // [rsp+40h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v4 + 1) = -1LL;
  HIDWORD(v5) = -1;
  *(_QWORD *)&v6 = 0x100000000LL;
  WORD4(v6) = 0;
  *(_QWORD *)&v4 = 0LL;
  LODWORD(v5) = -2;
  *(_QWORD *)((char *)&v5 + 4) = 4294967294LL;
  *(_OWORD *)this = v4;
  BYTE10(v6) = 0;
  *((_OWORD *)this + 1) = v5;
  HIDWORD(v6) = 4;
  LOWORD(v7) = 256;
  *((_OWORD *)this + 2) = v6;
  *((_DWORD *)this + 12) = v7;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_,
             (__int64)this,
             4);
  if ( (_DWORD)result == -2147483622 )
  {
    result = 0LL;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( *((_DWORD *)this + 3) == -1 )
    return 3221225473LL;
  return result;
}
