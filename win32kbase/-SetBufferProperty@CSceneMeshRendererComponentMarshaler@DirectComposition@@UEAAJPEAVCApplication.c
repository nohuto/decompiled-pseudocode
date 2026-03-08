/*
 * XREFs of ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memcpy_s @ 0x1C00DC688 (memcpy_s.c)
 */

__int64 __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetBufferProperty(
        char **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        rsize_t MaxCount,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rbp
  __int64 Quota; // r14
  char *v11; // rdx
  char *v12; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 && (a4 || !MaxCount) )
  {
    v9 = MaxCount >> 3;
    if ( (unsigned int)(MaxCount >> 3) > *((_DWORD *)this + 20) )
    {
      Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                (NSInstrumentation::CLeakTrackingAllocator *)this,
                260LL,
                MaxCount,
                0x687A4344u);
      if ( !Quota )
        return (unsigned int)-1073741801;
      v11 = this[9];
      if ( v11 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
      this[9] = (char *)Quota;
    }
    v12 = this[9];
    this[10] = (char *)(unsigned int)v9;
    memcpy_s(v12, 8LL * (unsigned int)v9, a4, MaxCount);
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x80u;
    return v6;
  }
  return (unsigned int)-1073741811;
}
