/*
 * XREFs of PspSetJobFreezeCountCallback @ 0x140300810
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x14040BA70 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage.c)
 *     PspComputeExecutionState @ 0x1406FF3AC (PspComputeExecutionState.c)
 */

__int64 __fastcall PspSetJobFreezeCountCallback(_DWORD *a1, _BYTE *a2)
{
  int IsEnabledDeviceUsage; // eax
  _DWORD *v5; // rcx
  BOOL v6; // r8d
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax

  IsEnabledDeviceUsage = Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage();
  v5 = *(_DWORD **)a2;
  v6 = IsEnabledDeviceUsage != 0;
  v7 = **(_DWORD **)a2 & 1;
  if ( v6 )
  {
    if ( v7 )
    {
      v8 = a1[262];
      v9 = v8 - 1;
      v10 = v8 + 1;
      if ( !*((_BYTE *)v5 + 4) )
        v10 = v9;
      a1[262] = v10;
      if ( (**(_DWORD **)a2 & 8) == 0 )
      {
        v11 = a1[263];
        if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
          v12 = v11 + 1;
        else
          v12 = v11 - 1;
        a1[263] = v12;
      }
    }
  }
  else if ( v7 )
  {
    v15 = a1[262];
    if ( *((_BYTE *)v5 + 4) )
      v16 = v15 + 1;
    else
      v16 = v15 - 1;
    a1[262] = v16;
  }
  if ( (**(_DWORD **)a2 & 4) != 0 )
  {
    v13 = a1[265];
    if ( *(_BYTE *)(*(_QWORD *)a2 + 5LL) )
      v14 = v13 + 1;
    else
      v14 = v13 - 1;
    a1[265] = v14;
  }
  a2[8] = PspComputeExecutionState(a1);
  return 0LL;
}
