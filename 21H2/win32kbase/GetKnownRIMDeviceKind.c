/*
 * XREFs of GetKnownRIMDeviceKind @ 0x1C00B614C
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0048B2C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C00B5BF0 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C00B60C8 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKnownRIMDeviceKind(__int64 a1)
{
  int v1; // r8d
  unsigned int v2; // edx
  int v4; // r8d
  __int64 v5; // rcx
  int v6; // ecx

  v1 = *(unsigned __int8 *)(a1 + 48);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 48) )
  {
    v4 = v1 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v5 = *(_QWORD *)(a1 + 32);
        if ( (*(_DWORD *)(v5 + 288) & 0x80u) != 0 )
        {
          v6 = *(_DWORD *)(*(_QWORD *)(v5 + 560) + 24LL);
          if ( v6 > 0 )
          {
            if ( v6 <= 4 )
            {
              return 3;
            }
            else if ( v6 <= 6 )
            {
              return 5;
            }
            else if ( v6 == 7 )
            {
              return 4;
            }
          }
        }
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return (unsigned int)(v1 + 1);
  }
  return v2;
}
