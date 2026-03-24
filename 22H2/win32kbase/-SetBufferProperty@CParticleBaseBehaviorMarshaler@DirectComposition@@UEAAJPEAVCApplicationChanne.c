/*
 * XREFs of ?SetBufferProperty@CParticleBaseBehaviorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01DC880
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C002AA40 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     memcpy_s @ 0x1C00C70E4 (memcpy_s.c)
 */

__int64 __fastcall DirectComposition::CParticleBaseBehaviorMarshaler::SetBufferProperty(
        DirectComposition::CParticleBaseBehaviorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        rsize_t MaxCount,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rcx

  v6 = 0;
  *a6 = 0;
  if ( !a3 && (a4 || !MaxCount) )
  {
    v9 = MaxCount / 0x18;
    if ( (unsigned int)(MaxCount / 0x18) > *((_DWORD *)this + 16) )
    {
      v10 = Win32AllocPoolWithQuota(MaxCount, 0x61714344u);
      if ( !v10 )
        return (unsigned int)-1073741801;
      v11 = *((_QWORD *)this + 7);
      if ( v11 )
        Win32FreePool(v11);
      *((_QWORD *)this + 7) = v10;
    }
    *((_QWORD *)this + 8) = (unsigned int)v9;
    memcpy_s(*((void **)this + 7), 24LL * (unsigned int)v9, a4, MaxCount);
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x20u;
    return v6;
  }
  return (unsigned int)-1073741811;
}
