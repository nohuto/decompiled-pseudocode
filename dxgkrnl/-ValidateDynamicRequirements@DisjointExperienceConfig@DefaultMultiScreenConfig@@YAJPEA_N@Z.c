__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::ValidateDynamicRequirements(
        DefaultMultiScreenConfig::DisjointExperienceConfig *this,
        bool *a2)
{
  int ControllerInstallKey; // ebx
  unsigned __int16 *v4; // rdx
  unsigned int *v5; // r9
  _BYTE v7[4]; // [rsp+20h] [rbp-238h] BYREF
  unsigned int v8[3]; // [rsp+24h] [rbp-234h] BYREF
  _BYTE v9[528]; // [rsp+30h] [rbp-228h] BYREF

  *(_BYTE *)this = 0;
  ControllerInstallKey = 0;
  v7[0] = 0;
  DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryIsUnsupportedLanguage(
    (DefaultMultiScreenConfig::DisjointExperienceConfig *)v7,
    a2);
  if ( !v7[0] )
  {
    v8[0] = 0;
    ControllerInstallKey = DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryControllerInstallKey(
                             (DefaultMultiScreenConfig::DisjointExperienceConfig *)v9,
                             v4,
                             v8,
                             v5);
    if ( ControllerInstallKey >= 0 )
      *(_BYTE *)this = v8[0] != 0;
  }
  return (unsigned int)ControllerInstallKey;
}
