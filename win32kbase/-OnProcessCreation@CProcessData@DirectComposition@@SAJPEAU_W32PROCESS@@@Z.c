/*
 * XREFs of ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C006BB5C
 * Callers:
 *     DCompositionProcessCallout @ 0x1C006BB30 (DCompositionProcessCallout.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C006BBE0 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C006BC68 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C0248E24 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CProcessData::OnProcessCreation(struct _W32PROCESS *a1, unsigned __int64 a2)
{
  struct DirectComposition::CProcessData *QuotaZInit; // rax
  struct DirectComposition::CProcessData *v4; // rbx
  unsigned int v5; // edx
  int v6; // edi

  QuotaZInit = (struct DirectComposition::CProcessData *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                           a1,
                                                           a2,
                                                           0x48uLL,
                                                           0x64704344u);
  v4 = QuotaZInit;
  if ( !QuotaZInit )
  {
    v6 = -1073741801;
    goto LABEL_8;
  }
  memset(QuotaZInit, 0, 0x48uLL);
  *((_BYTE *)v4 + 48) = 0;
  v6 = DirectComposition::CConnection::OnProcessCreation(v4);
  if ( v6 >= 0 )
    v6 = DirectComposition::CChannel::OnProcessCreation(v4);
  if ( v6 < 0 )
  {
    DirectComposition::CProcessData::`scalar deleting destructor'(v4, v5);
LABEL_8:
    v4 = 0LL;
  }
  *((_QWORD *)a1 + 32) = v4;
  return (unsigned int)v6;
}
