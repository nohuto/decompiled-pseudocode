/*
 * XREFs of _lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator() @ 0x1801CEEA8
 * Callers:
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x1801CEF2C (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 * Callees:
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800FF310 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 */

char __fastcall lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator()(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 160) && !*(_QWORD *)(a2 + 112) )
  {
    v2 = 1;
    CProcessAttributionManager::Record::`scalar deleting destructor'((CProcessAttributionManager::Record *)a2);
  }
  return v2;
}
