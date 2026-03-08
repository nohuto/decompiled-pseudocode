/*
 * XREFs of ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C02498F4
 * Callers:
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C02497EC (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C00998C8 (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C0249998 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetReadyBatches(
        DirectComposition::CConnection *this,
        unsigned __int64 a2,
        struct DirectComposition::CBatch **a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  struct DirectComposition::CBatch *v9; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    DirectComposition::CConnection::GetNewBatches((union _SLIST_HEADER *)this, a3);
    v7 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v7 )
    {
      do
      {
        v8 = v7;
        *(_BYTE *)(v7[1] + 49LL) = 0;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 );
      v9 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = 0LL;
      *v8 = *a3;
      *a3 = v9;
    }
    DirectComposition::CConnection::KeepOrDeferBatches(this, a2, a3);
  }
  return v3;
}
