/*
 * XREFs of PopPepUpdateConstraints @ 0x1402B9328
 * Callers:
 *     PopPepDeviceWaitWake @ 0x1402B8FC8 (PopPepDeviceWaitWake.c)
 *     PopPepDeviceDState @ 0x1402B9C4C (PopPepDeviceDState.c)
 *     PopPluginDevicePower @ 0x140306D00 (PopPluginDevicePower.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopPepUpdateIdleState @ 0x140304DB8 (PopPepUpdateIdleState.c)
 *     PopPepCancelActivityRange @ 0x140307328 (PopPepCancelActivityRange.c)
 *     PopPepCountReadyActivities @ 0x140307578 (PopPepCountReadyActivities.c)
 *     PopPepRequestWork @ 0x1403075C4 (PopPepRequestWork.c)
 *     PopPepReleaseActivityLink @ 0x140307608 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x14030768C (PopPepLockActivityLink.c)
 *     PopPepPromoteActivities @ 0x140307780 (PopPepPromoteActivities.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v3; // r12
  char v6; // r13
  unsigned int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned int ready; // eax
  __int64 v11; // r9
  __int64 v12; // r8
  NTSTATUS result; // eax
  unsigned int j; // edi
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int i; // [rsp+70h] [rbp+8h]
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  v18 = 0;
  v6 = PopPepLockActivityLink(a1, 0LL, 4LL, 1LL, &v18);
  v7 = 0;
  for ( i = PopPepCountReadyActivities(a1, 0LL, 3LL); v7 < *(_DWORD *)(a1 + 180); ++v7 )
  {
    v9 = 208LL * v7 + a1 + 192;
    if ( (*(_BYTE *)(v9 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        *(_DWORD *)(v9 + 4 * v3 + 152) = *(_DWORD *)(v9 + 188) - 1;
      }
      else
      {
        PopPepCancelActivityRange(v9 + 56, 1, 1, 1, v9 + 104);
        *(_DWORD *)(v9 + 4 * v3 + 152) = 0;
        KeResetEvent((PRKEVENT)(v9 + 32));
      }
      LOBYTE(v8) = a3;
      PopPepUpdateIdleState(a1, v9, v8);
      if ( !a3 )
      {
        v16 = *(_QWORD *)(v9 + 64);
        if ( *(_DWORD *)v16 )
          *(_BYTE *)(v16 + 16) = 1;
        else
          KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
      }
    }
  }
  PopPepPromoteActivities(a1, 0LL, 3LL);
  ready = PopPepCountReadyActivities(a1, 0LL, 3LL);
  PopPepRequestWork(a1, i, ready);
  LOBYTE(v11) = v18;
  LOBYTE(v12) = v6;
  result = PopPepReleaseActivityLink(a1, 0LL, v12, v11);
  if ( !a3 )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 180); ++j )
    {
      result = j;
      v15 = 208LL * j;
      if ( (*(_BYTE *)(v15 + a1 + 208) & 1) != 0 )
        result = KeWaitForSingleObject((PVOID)(a1 + v15 + 224), Executive, 0, 0, 0LL);
    }
  }
  return result;
}
