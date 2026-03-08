/*
 * XREFs of GetSrbScsiData @ 0x1C0012B7C
 * Callers:
 *     MdlToPrp @ 0x1C0001570 (MdlToPrp.c)
 *     SrbAssignQueueId @ 0x1C0001960 (SrbAssignQueueId.c)
 *     NVMeGetFeaturesCurrentCacheValueCompletion @ 0x1C0015980 (NVMeGetFeaturesCurrentCacheValueCompletion.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0016990 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C00181D0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeMapError @ 0x1C00200A8 (NVMeMapError.c)
 *     NVMeSetSenseData @ 0x1C0024238 (NVMeSetSenseData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSrbScsiData(__int64 a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _BYTE *a5)
{
  __int64 v5; // rdi
  char v6; // bp
  __int64 i; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx

  v5 = 0LL;
  v6 = 0;
  if ( *(_BYTE *)(a1 + 2) == 40 && !*(_DWORD *)(a1 + 20) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 56); i = (unsigned int)(i + 1) )
    {
      v10 = *(unsigned int *)(a1 + 4 * i + 120);
      if ( (unsigned int)v10 >= 0x80 && (unsigned int)v10 <= *(_DWORD *)(a1 + 16) )
      {
        v11 = a1 + v10;
        v12 = *(_DWORD *)(a1 + v10) - 64;
        if ( !v12 || (v13 = v12 - 1) == 0 )
        {
          v6 = 1;
          if ( a2 )
            *a2 = *(unsigned __int8 *)(v11 + 10);
          v16 = v11 + 24;
          if ( !*(_BYTE *)(v11 + 10) )
            v16 = v5;
          v5 = v16;
          if ( a3 )
            *a3 = v11 + 8;
          if ( a4 )
          {
            v15 = *(_QWORD *)(v11 + 16);
LABEL_25:
            *a4 = v15;
          }
LABEL_26:
          if ( a5 )
            *a5 = *(_BYTE *)(v11 + 9);
          continue;
        }
        if ( v13 == 1 )
        {
          v6 = 1;
          if ( a2 )
            *a2 = *(_DWORD *)(v11 + 12);
          v14 = v11 + 32;
          if ( !*(_DWORD *)(v11 + 12) )
            v14 = v5;
          v5 = v14;
          if ( a3 )
            *a3 = v11 + 8;
          if ( a4 )
          {
            v15 = *(_QWORD *)(v11 + 24);
            goto LABEL_25;
          }
          goto LABEL_26;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 2) )
  {
    v17 = v5;
    if ( !v6 )
    {
      if ( a2 )
        *a2 = 0;
      if ( a3 )
        *a3 = 0LL;
      if ( a4 )
        *a4 = 0LL;
      if ( a5 )
        *a5 = 0;
    }
  }
  else
  {
    if ( a2 )
      *a2 = *(unsigned __int8 *)(a1 + 10);
    v17 = a1 + 72;
    if ( !*(_BYTE *)(a1 + 10) )
      v17 = v5;
    if ( a3 )
      *a3 = a1 + 4;
    if ( a4 )
      *a4 = *(_QWORD *)(a1 + 32);
    if ( a5 )
      *a5 = *(_BYTE *)(a1 + 11);
  }
  return v17;
}
