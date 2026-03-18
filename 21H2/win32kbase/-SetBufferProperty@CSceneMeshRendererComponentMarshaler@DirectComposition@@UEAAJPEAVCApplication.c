/*
 * XREFs of ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0237B30
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memcpy_s @ 0x1C00D7B98 (memcpy_s.c)
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
  unsigned __int64 v9; // rsi
  __int64 Quota; // r15
  char *v11; // rdx
  char *v12; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 && (a4 || !MaxCount) )
  {
    v9 = MaxCount >> 3;
    if ( (unsigned int)(MaxCount >> 3) > *((_DWORD *)this + 22) )
    {
      Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                (NSInstrumentation::CLeakTrackingAllocator *)this,
                260LL,
                MaxCount,
                1752843076);
      if ( !Quota )
        return (unsigned int)-1073741801;
      v11 = this[10];
      if ( v11 )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v11);
      this[10] = (char *)Quota;
    }
    v12 = this[10];
    this[11] = (char *)(unsigned int)v9;
    memcpy_s(v12, 8LL * (unsigned int)v9, a4, MaxCount);
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x80u;
    return v6;
  }
  return (unsigned int)-1073741811;
}
