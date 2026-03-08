/*
 * XREFs of ??1WDFCXDEVICE_INIT@@QEAA@XZ @ 0x1C003FBFC
 * Callers:
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C003BA20 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C003BB8C (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 */

void __fastcall WDFCXDEVICE_INIT::~WDFCXDEVICE_INIT(WDFCXDEVICE_INIT *this)
{
  FxIrpPreprocessInfo *PreprocessInfo; // rcx

  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo);
}
