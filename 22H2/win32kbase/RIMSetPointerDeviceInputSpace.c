/*
 * XREFs of RIMSetPointerDeviceInputSpace @ 0x1C0164CF0
 * Callers:
 *     NtSetPointerDeviceInputSpace @ 0x1C012CFA0 (NtSetPointerDeviceInputSpace.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00455C8 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164B4C (RIMSetDeviceOutputConfig.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C01B31CC (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

__int64 __fastcall RIMSetPointerDeviceInputSpace(__int64 a1, struct _LUID *a2, __int128 *a3)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int128 v9; // xmm0
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  PERESOURCE *v12; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 424);
  v4 = a1 + 88;
  v7 = 0;
  RIMLockExclusive(v3 + 104);
  if ( (*(_DWORD *)(v4 + 200) & 0x80u) != 0 )
  {
    v8 = *(_QWORD *)(v4 + 480);
    if ( *(_DWORD *)(v8 + 24) != 7 )
    {
      RIMLockExclusive(v3 + 568);
      CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v11);
      if ( a2 )
      {
        if ( !InputConfig::GetInputSpace(*a2, (struct CLockedInputSpace *)v11) )
        {
          v7 = -1073741811;
          goto LABEL_12;
        }
        *(_DWORD *)(v8 + 236) = 1;
        *(struct _LUID *)(v8 + 240) = *a2;
        if ( a3 )
        {
          *(_DWORD *)(v8 + 248) = 1;
          v9 = *a3;
          goto LABEL_10;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 236) = 0;
        *(_QWORD *)(v8 + 240) = 0LL;
      }
      *(_DWORD *)(v8 + 248) = 0;
      v9 = 0LL;
LABEL_10:
      *(_OWORD *)(v8 + 252) = v9;
      RIMSetDeviceOutputConfig((struct RIMDEV *)v4, (struct tagHID_POINTER_DEVICE_INFO *)v8, 1u, 0LL);
LABEL_12:
      *(_QWORD *)(v3 + 576) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*v12);
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
