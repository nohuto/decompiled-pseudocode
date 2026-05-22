/*
 * XREFs of ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x180084A30
 * Callers:
 *     <none>
 * Callees:
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x180082920 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 */

void __fastcall MPCInputProviderBase::OnSuccessfulDetach(
        MPCInputProviderBase *this,
        struct IMPCTarget *a2,
        unsigned int a3)
{
  bool v4; // [rsp+30h] [rbp+8h] BYREF
  struct IMPCTarget *v5; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF
  struct InputInfo *v7; // [rsp+48h] [rbp+20h] BYREF

  v6 = a3;
  v5 = a2;
  v4 = 0;
  v7 = (MPCInputProviderBase *)((char *)this + 472);
  ISMTracing::MPCInputProviderSourceDetectedLost<IMPCTarget * &,LegacyInputInfo *,bool,unsigned int &>(
    &v5,
    &v7,
    &v4,
    &v6);
  *((_BYTE *)this + 4537) = 1;
}
