/*
 * XREFs of KiInitSupervisorStateExtensionHost @ 0x140B42244
 * Callers:
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     ExRegisterHost @ 0x14080EEF0 (ExRegisterHost.c)
 */

void __fastcall KiInitSupervisorStateExtensionHost(__int64 a1, __int64 a2)
{
  _DWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+28h] [rbp-30h]
  __int64 (__fastcall **v4)(); // [rsp+30h] [rbp-28h]
  __int64 v5; // [rsp+38h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-18h]

  if ( (KeFeatureBits & 0x800000) != 0 && KeEnabledSupervisorXStateFeatures || (_DWORD)KiIptMsrMask )
  {
    v2[1] = 6;
    v4 = off_140005790;
    v3 = 512LL;
    v2[0] = 65548;
    v5 = 0LL;
    v6 = 0LL;
    if ( (int)ExRegisterHost(&KiSupervisorStateExtensionHost, a2, (unsigned __int16 *)v2) < 0 )
      KiSupervisorStateExtensionHost = 0LL;
  }
}
