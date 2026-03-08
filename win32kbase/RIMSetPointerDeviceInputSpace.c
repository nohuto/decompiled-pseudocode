/*
 * XREFs of RIMSetPointerDeviceInputSpace @ 0x1C01BDD0C
 * Callers:
 *     NtSetPointerDeviceInputSpace @ 0x1C016CDB0 (NtSetPointerDeviceInputSpace.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00157DC (--0CLockedInputSpace@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01BDB78 (RIMSetDeviceOutputConfig.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C0213630 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

__int64 __fastcall RIMSetPointerDeviceInputSpace(__int64 a1, struct _LUID *a2, __int128 *a3)
{
  __int64 v3; // rbp
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int128 v10; // xmm0
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  PERESOURCE *v13; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 408);
  v7 = 0;
  RIMLockExclusive(v3 + 104);
  v8 = (a1 + 72) & -(__int64)(a1 != 0);
  if ( (*(_DWORD *)(v8 + 0xC8) & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(((a1 + 72) & -(__int64)(a1 != 0)) + 0x1D8);
    if ( *(_DWORD *)(v9 + 24) != 7 )
    {
      RIMLockExclusive(v3 + 760);
      CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v12);
      if ( a2 )
      {
        if ( !InputConfig::GetInputSpace(*a2, (struct CLockedInputSpace *)v12) )
        {
          v7 = -1073741811;
          goto LABEL_12;
        }
        *(_DWORD *)(v9 + 236) = 1;
        *(struct _LUID *)(v9 + 240) = *a2;
        if ( a3 )
        {
          *(_DWORD *)(v9 + 248) = 1;
          v10 = *a3;
          goto LABEL_10;
        }
      }
      else
      {
        *(_DWORD *)(v9 + 236) = 0;
        *(_QWORD *)(v9 + 240) = 0LL;
      }
      *(_DWORD *)(v9 + 248) = 0;
      v10 = 0LL;
LABEL_10:
      *(_OWORD *)(v9 + 252) = v10;
      RIMSetDeviceOutputConfig((struct RIMDEV *)v8, (struct tagHID_POINTER_DEVICE_INFO *)v9, 1u, 0LL);
LABEL_12:
      *(_QWORD *)(v3 + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 760, 0LL);
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*v13);
      KeLeaveCriticalRegion();
      goto LABEL_13;
    }
  }
  v7 = -1073741811;
LABEL_13:
  *(_QWORD *)(v3 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
