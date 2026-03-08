/*
 * XREFs of ??_GCInternalMilCmdConnection@@UEAAPEAXI@Z @ 0x1801B03B0
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800CA9F0 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAA@XZ @ 0x18010E2F0 (--1-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@std@@.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1801B04C0 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1CInternalMilCmdConnection@@UEAA@XZ @ 0x1801B25E8 (--1CInternalMilCmdConnection@@UEAA@XZ.c)
 */

CInternalMilCmdConnection *__fastcall CInternalMilCmdConnection::`scalar deleting destructor'(
        CInternalMilCmdConnection *this,
        char a2)
{
  CInternalMilCmdConnection::~CInternalMilCmdConnection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
