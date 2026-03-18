/*
 * XREFs of ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0085808
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0085EE4 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned __int64 a5)
{
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  _QWORD *Quota; // rdi
  DirectComposition::CApplicationChannel *v10; // rsi
  __int64 v11; // rax
  struct DirectComposition::CResourceMarshaler *v12; // r14
  unsigned __int64 v13; // rbp
  signed int v14; // ebx
  __int64 v15; // r8
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  char v20; // [rsp+78h] [rbp+10h] BYREF

  v20 = 0;
  v6 = 0LL;
  v7 = (unsigned int)(a2 - 1);
  Quota = 0LL;
  v10 = this;
  if ( a2 && v7 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v11 = *((_QWORD *)this + 7);
    this = (DirectComposition::CApplicationChannel *)(v7 * *((_QWORD *)this + 11));
    v12 = *(struct DirectComposition::CResourceMarshaler **)((char *)this + v11);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = a5;
  v14 = v12 == 0LL ? 0xC0000022 : 0;
  if ( a5 )
  {
    if ( v12 )
    {
      v6 = 8 * a5;
      if ( is_mul_ok(a5, 8uLL) )
      {
        v14 = 0;
      }
      else
      {
        v6 = -1LL;
        v14 = -1073741675;
      }
    }
    if ( v14 >= 0 )
    {
      Quota = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, v6, 1717715780);
      if ( !Quota )
        return (unsigned int)-1073741801;
    }
    v15 = 0LL;
    if ( v14 < 0 )
      goto LABEL_27;
    while ( (unsigned int)v15 < v13 )
    {
      v16 = a4[v15];
      v17 = v16 - 1;
      if ( v16 && v17 < *((_QWORD *)v10 + 10) )
        v18 = *(_QWORD *)(v17 * *((_QWORD *)v10 + 11) + *((_QWORD *)v10 + 7));
      else
        v18 = 0LL;
      Quota[v15] = v18;
      if ( !v18 )
      {
        v14 = -1073741811;
        goto LABEL_27;
      }
      v15 = (unsigned int)(v15 + 1);
    }
  }
  else if ( !v12 )
  {
    return (unsigned int)v14;
  }
  v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, _QWORD *, unsigned __int64, char *))(*(_QWORD *)v12 + 160LL))(
          v12,
          v10,
          a3,
          Quota,
          v13,
          &v20);
  if ( v14 < 0 )
  {
LABEL_27:
    if ( Quota )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        Quota);
    return (unsigned int)v14;
  }
  if ( v20 )
    DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(v10, v12);
  return (unsigned int)v14;
}
