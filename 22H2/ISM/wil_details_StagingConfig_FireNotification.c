/*
 * XREFs of wil_details_StagingConfig_FireNotification @ 0x18003E6E0
 * Callers:
 *     wil_StagingConfig_RecordFeatureUsage @ 0x18003E190 (wil_StagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     wil_details_NtQueryWnfStateData @ 0x18003E220 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18003E2A8 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x18004B180 (_alloca_probe.c)
 */

__int64 __fastcall wil_details_StagingConfig_FireNotification(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int16 v6; // r14
  int v7; // esi
  unsigned int WnfStateData; // r10d
  unsigned int i; // ebx
  __int64 v11; // r9
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rcx
  _WORD *v15; // rax
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v22[2046]; // [rsp+54h] [rbp-ACh] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v6 = a3;
  v7 = a2;
  WnfStateData = 0;
  for ( i = 0; i < *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL); ++i )
  {
    if ( *(_DWORD *)(v4 + 16LL * i) == v7
      && *(_WORD *)(v4 + 16LL * i + 12) == v6
      && ((*(_DWORD *)(v4 + 16LL * i + 12) & 0x10000) == 0 || a4) )
    {
      v20[0] = *(_DWORD *)(v4 + 16LL * i + 4);
      v20[1] = *(_DWORD *)(v4 + 16LL * i + 8);
      do
      {
        v18 = 4096;
        WnfStateData = wil_details_NtQueryWnfStateData(
                         (__int64)v20,
                         a2,
                         a3,
                         (__int64)&v19,
                         (__int64)&v21,
                         (__int64)&v18);
        if ( !WnfStateData )
        {
          v12 = v18;
          v13 = 0;
          if ( (v18 & 7) != 0 )
            v12 = 0;
          v18 = v12;
          v14 = v12 >> 3;
          if ( (_DWORD)v14 )
          {
            v15 = v22;
            while ( *((_DWORD *)v15 - 1) != v7 || *v15 != v6 )
            {
              ++v13;
              v15 += 4;
              if ( v13 >= (unsigned int)v14 )
                goto LABEL_15;
            }
          }
          else
          {
LABEL_15:
            if ( (unsigned __int64)v12 + 8 <= 0x1000 )
            {
              v12 += 8;
              *(_DWORD *)&v22[4 * v14 - 2] = v7;
              v18 = v12;
              v22[4 * v14] = v6;
            }
          }
          WnfStateData = wil_details_NtUpdateWnfStateData((__int64)v20, (__int64)&v21, v12, v11, v17, v19, 1);
        }
      }
      while ( WnfStateData == -1073741823 );
    }
  }
  return WnfStateData;
}
