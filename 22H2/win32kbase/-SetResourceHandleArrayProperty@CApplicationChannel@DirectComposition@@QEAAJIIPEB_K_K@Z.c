/*
 * XREFs of ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C020C80C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002C184 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00935A0 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const unsigned __int64 *a4,
        unsigned __int64 a5)
{
  char *Quota; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  int v11; // edi
  unsigned int v12; // edx
  __int64 v13; // rcx
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  v15[0] = 0;
  Quota = 0LL;
  v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v10 )
  {
    if ( a5 )
    {
      Quota = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v9, 260LL, 8 * a5, 0x66624344u);
      if ( !Quota )
        return (unsigned int)-1073741801;
      v12 = 0;
      v13 = 0LL;
      do
      {
        ++v12;
        *(_QWORD *)&Quota[8 * v13] = a4[v13];
        v13 = v12;
      }
      while ( v12 < a5 );
    }
    v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, char *, unsigned __int64, _BYTE *))(*(_QWORD *)v10 + 232LL))(
            v10,
            a3,
            Quota,
            a5,
            v15);
    if ( v11 < 0 )
    {
      if ( Quota )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, Quota);
    }
    else if ( v15[0] )
    {
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v11;
}
