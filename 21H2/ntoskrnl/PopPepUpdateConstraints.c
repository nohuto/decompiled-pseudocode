/*
 * XREFs of PopPepUpdateConstraints @ 0x1403B17EC
 * Callers:
 *     PopPluginDevicePower @ 0x1403562C8 (PopPluginDevicePower.c)
 *     PopPepDeviceWaitWake @ 0x1403B1230 (PopPepDeviceWaitWake.c)
 *     PopPepDeviceDState @ 0x1403B1624 (PopPepDeviceDState.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     PopPepUpdateIdleState @ 0x140354B48 (PopPepUpdateIdleState.c)
 *     PopPepCountReadyActivities @ 0x1403565AC (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1403565F8 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14035666C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1403567F8 (PopPepPromoteActivities.c)
 *     PopPepCancelActivityRange @ 0x1403999AC (PopPepCancelActivityRange.c)
 */

int __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v4; // r15
  KIRQL v6; // al
  unsigned __int8 v7; // r12
  unsigned int v8; // esi
  unsigned int i; // r13d
  __int64 v10; // rdi
  unsigned int ready; // eax
  int result; // eax
  unsigned int j; // edi
  __int64 v14; // rcx
  struct _KEVENT *v15; // rbp
  __int64 v16; // rax

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  v7 = v6;
  v8 = 0;
  for ( i = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3); v8 < *(_DWORD *)(a1 + 180); ++v8 )
  {
    v10 = 208LL * v8 + a1 + 192;
    if ( (*(_BYTE *)(v10 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        v15 = (struct _KEVENT *)(v10 + 32);
        *(_DWORD *)(v10 + 4 * v4 + 152) = *(_DWORD *)(v10 + 188) - 1;
      }
      else
      {
        PopPepCancelActivityRange(v10 + 56, 1, 1, 1, (volatile signed __int32 *)(v10 + 104));
        *(_DWORD *)(v10 + 4 * v4 + 152) = 0;
        v15 = (struct _KEVENT *)(v10 + 32);
        KeResetEvent((PRKEVENT)(v10 + 32));
      }
      PopPepUpdateIdleState(a1, (unsigned int *)v10, a3);
      v16 = *(_QWORD *)(v10 + 64);
      if ( !a3 )
      {
        if ( *(_DWORD *)v16 )
          *(_BYTE *)(v16 + 16) = 1;
        else
          KeSetEvent(v15, 0, 0);
      }
    }
  }
  PopPepPromoteActivities(a1, 0LL, 3);
  ready = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3);
  PopPepRequestWork(i, ready);
  result = PopPepReleaseActivityLink(a1, 0LL, 1, v7);
  if ( !a3 )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 180); ++j )
    {
      result = j;
      v14 = a1 + 208LL * j;
      if ( (*(_BYTE *)(v14 + 208) & 1) != 0 )
        result = KeWaitForSingleObject((PVOID)(v14 + 224), Executive, 0, 0, 0LL);
    }
  }
  return result;
}
