/*
 * XREFs of ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00B1CD4
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_45072801a0d31dffc7965423336b068f_::operator() @ 0x1C00C8860 (_lambda_45072801a0d31dffc7965423336b068f_--operator().c)
 * Callees:
 *     EngFreeUserMem @ 0x1C0048AD0 (EngFreeUserMem.c)
 */

void __fastcall PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(PDEVOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 40) & 0x400000) != 0 )
  {
    EngFreeUserMem(*(PVOID *)(v2 + 2416));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2424LL));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2432LL));
  }
}
