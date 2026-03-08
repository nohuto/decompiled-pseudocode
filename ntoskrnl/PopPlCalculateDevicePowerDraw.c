/*
 * XREFs of PopPlCalculateDevicePowerDraw @ 0x14059ED14
 * Callers:
 *     PopPlNotifyDeviceDState @ 0x1402B9D3C (PopPlNotifyDeviceDState.c)
 *     PopPlNotifyDeviceFState @ 0x1402EFC60 (PopPlNotifyDeviceFState.c)
 *     PopPlRegisterDeviceIterator @ 0x14059F270 (PopPlRegisterDeviceIterator.c)
 *     PopPlUnregisterDevice @ 0x14059F9D0 (PopPlUnregisterDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPlCalculateDevicePowerDraw(__int64 a1, int *a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v4; // r11
  unsigned int v8; // edx
  __int64 v9; // rcx
  unsigned __int64 i; // r8
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx

  v4 = *(_QWORD *)(a1 + 1184);
  if ( v4 )
  {
    if ( !a2 )
      a2 = (int *)(*(_QWORD *)(a1 + 48) + 156LL);
    v9 = *a2;
    v8 = *(_DWORD *)(v4 + 8 * v9 + 32);
    if ( (int)v9 <= 1 )
    {
      for ( i = 0LL; i < *(unsigned int *)(a1 + 828); ++i )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8 * i);
        v12 = *(_QWORD *)(v11 + 432);
        if ( v12 && *(_QWORD *)(v12 + 24) )
        {
          if ( a3 && (!a4 || *a4 == i) )
            v13 = *a3;
          else
            v13 = *(unsigned int *)(v11 + 152);
          if ( (unsigned __int64)(unsigned int)v13 >= *(_QWORD *)(v12 + 24) )
            v13 = (unsigned int)(*(_DWORD *)(v12 + 24) - 1);
          v8 -= *(_DWORD *)(v12 + 8 * v13 + 36);
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v8;
}
