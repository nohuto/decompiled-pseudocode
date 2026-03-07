void __fastcall PopPepCompleteComponentIdleState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  char v5; // al
  __int64 v6; // rcx
  char v7; // bp
  int v8; // r8d
  unsigned int ready; // eax
  unsigned int v10; // r9d
  __int64 v11; // [rsp+20h] [rbp-18h]
  KIRQL v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  v3 = 208LL * a2 + a1 + 192;
  v5 = PopPepLockActivityLink(a1, (volatile LONG *)v3, 6u, 1u, &v12);
  v6 = *(_QWORD *)(v3 + 64);
  v7 = v5;
  if ( *(_DWORD *)(v6 + 12) == 1 )
  {
    *(_DWORD *)(v6 + 12) = 2;
    PopPepCountReadyActivities((unsigned int *)a1, v3, 2);
    **(_DWORD **)(v3 + 64) |= 8u;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 104));
    ready = PopPepCountReadyActivities((unsigned int *)a1, v3, v8);
    PopPepRequestWork(a1, v10, ready);
    PopPepReleaseActivityLink(a1, (volatile LONG *)v3, v7, v12);
  }
  else
  {
    PopPepReleaseActivityLink(a1, (volatile LONG *)v3, v5, v12);
    PopPepProcessEvent(a1, v3, 1u, 6LL, v11, 0LL);
    PopPlNotifyDeviceFState(*(_QWORD *)(a1 + 32), a2, *(_DWORD *)(v3 + 180), *(_DWORD *)(v3 + 176), 1);
  }
}
