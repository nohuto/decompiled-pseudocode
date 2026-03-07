void __fastcall WDFCXDEVICE_INIT::~WDFCXDEVICE_INIT(WDFCXDEVICE_INIT *this)
{
  FxIrpPreprocessInfo *PreprocessInfo; // rcx

  PreprocessInfo = this->PreprocessInfo;
  if ( PreprocessInfo )
    FxIrpPreprocessInfo::`scalar deleting destructor'(PreprocessInfo);
}
