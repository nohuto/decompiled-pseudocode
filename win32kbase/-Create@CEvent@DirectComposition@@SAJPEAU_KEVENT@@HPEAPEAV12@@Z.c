/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJPEAU_KEVENT@@HPEAPEAV12@@Z @ 0x1C024AC18
 * Callers:
 *     ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C024B898 (-VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        NSInstrumentation::CLeakTrackingAllocator *Object,
        unsigned __int64 a2,
        struct DirectComposition::CEvent **a3)
{
  unsigned int v4; // edi
  struct DirectComposition::CEvent *QuotaZInit; // rax

  v4 = 0;
  QuotaZInit = (struct DirectComposition::CEvent *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                     Object,
                                                     a2,
                                                     0x10uLL,
                                                     0x76654344u);
  *a3 = QuotaZInit;
  if ( QuotaZInit )
  {
    *((_QWORD *)QuotaZInit + 1) = Object;
    ObfReferenceObject(Object);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
