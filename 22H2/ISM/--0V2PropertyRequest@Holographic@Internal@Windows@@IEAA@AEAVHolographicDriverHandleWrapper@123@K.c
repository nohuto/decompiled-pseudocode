/*
 * XREFs of ??0V2PropertyRequest@Holographic@Internal@Windows@@IEAA@AEAVHolographicDriverHandleWrapper@123@KIPEBX_KAEAU_LUID@@P6AJ1_K@Z@Z @ 0x1801573C0
 * Callers:
 *     ??0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@KIAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x1801571A0 (--0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper.c)
 *     ??0V2NodePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@AEBUSPATIAL_NODE_ID@@IAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2NodePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x1801572A8 (--0V2NodePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@1.c)
 * Callees:
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800A6118 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 */

Windows::Internal::Holographic::V2PropertyRequest *__fastcall Windows::Internal::Holographic::V2PropertyRequest::V2PropertyRequest(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *a2,
        int a3,
        int a4,
        const void *a5,
        unsigned __int64 a6,
        struct _LUID *a7,
        int (*a8)(const void *, unsigned __int64))
{
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)this = &Windows::Internal::Holographic::V2PropertyRequest::`vftable';
  *((_QWORD *)this + 7) = a5;
  *((_QWORD *)this + 8) = a6;
  *((_QWORD *)this + 9) = a7;
  *((_DWORD *)this + 12) = a3;
  *((_DWORD *)this + 13) = a4;
  std::vector<unsigned char>::vector<unsigned char>((_QWORD *)this + 10, 0xCuLL);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 14) = a8;
  return this;
}
