/*
 * XREFs of ?GenerateHandLostInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAXPEAUHandInputInfo@1234@@Z @ 0x1800DFC14
 * Callers:
 *     ?SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugmentedInputGestureType@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E1930 (-SendInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJW4MPCAugm.c)
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800D0244 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::GenerateHandLostInputInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo *a2)
{
  __int128 v4; // xmm0
  char v5; // al
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  memset_0(a2, 0, 0x530uLL);
  *((_DWORD *)a2 + 330) = 4;
  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 47) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 80) = *((_DWORD *)this + 2);
  QueryPerformanceCounter((LARGE_INTEGER *)a2 + 26);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
    this,
    (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v6);
  v4 = v6;
  *((_DWORD *)a2 + 79) = v7;
  *(_OWORD *)((char *)a2 + 300) = v4;
  *((_BYTE *)a2 + 332) = *((_BYTE *)this + 156);
  v5 = *((_BYTE *)this + 157);
  *((_DWORD *)a2 + 82) = -1;
  *((_WORD *)a2 + 46) = 0;
  *((_WORD *)a2 + 62) = 0;
  *((_DWORD *)a2 + 49) = 0;
  *((_BYTE *)a2 + 333) = v5;
  *((_DWORD *)a2 + 46) = 1;
  *((_DWORD *)a2 + 84) = *((_DWORD *)this + 66);
  *((_DWORD *)a2 + 85) = *((_DWORD *)this + 67);
  *((_DWORD *)a2 + 48) = *((_DWORD *)this + 64) == 3;
}
