/*
 * XREFs of ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x1C0109C64
 * Callers:
 *     ndisIfInitializePhase2 @ 0x1C0109810 (ndisIfInitializePhase2.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 ndisIfNsiClientSubsystemInitialize(void)
{
  int v0; // ebx
  char v2[4]; // [rsp+28h] [rbp-58h]
  _QWORD v3[10]; // [rsp+30h] [rbp-50h] BYREF

  memset((char *)v3 + 4, 0, 0x44uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids);
  LODWORD(v3[0]) = 0;
  v3[1] = &NPI_MS_NDIS_MODULEID;
  LOBYTE(v3[4]) = 1;
  v3[3] = ndisNsiClientParameterChangeHandler;
  LODWORD(v3[2]) = 7;
  v3[5] = 7LL;
  v3[8] = &unk_1C00E7148;
  v0 = NsiRegisterChangeNotificationEx(v3);
  if ( v0 >= 0 )
  {
    LODWORD(v3[2]) = 6;
    v3[5] = 6LL;
    v3[8] = &unk_1C00E7140;
    v0 = NsiRegisterChangeNotificationEx(v3);
    if ( v0 >= 0 )
    {
      LODWORD(v3[2]) = 1;
      v3[8] = &unk_1C00E7160;
      v3[5] = 1LL;
      v0 = NsiRegisterChangeNotificationEx(v3);
      if ( v0 >= 0 )
      {
        LODWORD(v3[2]) = 0;
        v3[5] = 0LL;
        v3[8] = &unk_1C00E7158;
        v0 = NsiRegisterChangeNotificationEx(v3);
        if ( v0 >= 0 )
        {
          LODWORD(v3[2]) = 17;
          v3[8] = &unk_1C00E7150;
          v3[5] = 17LL;
          v0 = NsiRegisterChangeNotificationEx(v3);
        }
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v2 = v0;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_a8d5194ea1de362605f2f80c2705a132_Traceguids,
      *(_DWORD *)v2);
  }
  return (unsigned int)v0;
}
