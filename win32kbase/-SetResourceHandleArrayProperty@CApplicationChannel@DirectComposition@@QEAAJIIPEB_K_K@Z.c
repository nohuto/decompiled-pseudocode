/*
 * XREFs of ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C024B24C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C005C4B4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const unsigned __int64 *a4,
        unsigned __int64 a5)
{
  char *Quota; // rbx
  unsigned __int64 v6; // rsi
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  unsigned __int64 v11; // rdi
  int v12; // edi
  unsigned int v13; // edx
  __int64 v14; // rcx
  char v16; // [rsp+58h] [rbp+10h] BYREF

  Quota = 0LL;
  v16 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( !a2 )
    return (unsigned int)-1073741790;
  if ( v6 >= *((_QWORD *)this + 10) )
    return (unsigned int)-1073741790;
  _mm_lfence();
  if ( (v10 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 11) * v6 + *((_QWORD *)this + 7))) == 0LL )
    return (unsigned int)-1073741790;
  v11 = a5;
  if ( a5 )
  {
    Quota = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, 8 * a5, 0x66624344u);
    if ( !Quota )
      return (unsigned int)-1073741801;
    v13 = 0;
    v14 = 0LL;
    do
    {
      ++v13;
      *(_QWORD *)&Quota[8 * v14] = a4[v14];
      v14 = v13;
    }
    while ( v13 < v11 );
  }
  v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *, unsigned __int64, char *))(*(_QWORD *)v10 + 232LL))(
          v10,
          a3,
          Quota,
          v11,
          &v16);
  if ( v12 < 0 )
  {
    if ( Quota )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Quota);
  }
  else if ( v16 )
  {
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
  }
  return (unsigned int)v12;
}
