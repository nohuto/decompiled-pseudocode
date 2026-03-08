/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C005CF5C
 * Callers:
 *     ?SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C005CF00 (-SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0091094 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00BF308 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C026F050 (-SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 * Callees:
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C005CFC8 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0099740 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2,
        struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *QuotaZInit; // rax
  DirectComposition::CEvent *v6; // rdi
  unsigned int v7; // edx
  int v8; // ebx

  QuotaZInit = (DirectComposition::CEvent *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                              a1,
                                              a2,
                                              0x10uLL,
                                              0x76654344u);
  v6 = QuotaZInit;
  if ( QuotaZInit )
  {
    v8 = DirectComposition::CEvent::Initialize(QuotaZInit, a1, 0);
    if ( v8 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v7);
    else
      *a3 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
