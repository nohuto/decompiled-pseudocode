/*
 * XREFs of ??1CCompClockInfo@DirectComposition@@AEAA@XZ @ 0x1C0247E24
 * Callers:
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1C0247E50 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCompClockInfo::~CCompClockInfo(DirectComposition::CCompClockInfo *this)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 4) )
  {
    v1 = *((_DWORD *)this + 4);
    DxgkCloseAdapterInternal(&v1);
  }
}
