__int64 __fastcall IovUtilIsVerifiedDeviceStack(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax
  unsigned int v4; // ebx
  KIRQL v5; // r14
  __int64 v6; // rbp
  int v7; // ecx
  __int64 v8; // r9
  int v9; // edx
  int v10; // r8d
  unsigned int v11; // edx

  v1 = a1;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL);
  if ( v2 < 0 )
    return ((unsigned int)v2 >> 30) & 1;
  v4 = 0;
  v5 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( 1 )
  {
    v6 = v1;
    v1 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 48LL);
    if ( MmIsDriverVerifying(*(struct _DRIVER_OBJECT **)(v6 + 8)) )
      v4 = 1;
    if ( !v1 )
      break;
    v7 = *(_DWORD *)(*(_QWORD *)(v1 + 312) + 32LL);
    if ( v7 < 0 )
    {
      if ( (v7 & 0x40000000) != 0 )
        v4 = 1;
      goto LABEL_10;
    }
  }
  do
  {
LABEL_10:
    v8 = *(_QWORD *)(v6 + 312);
    v9 = *(_DWORD *)(v8 + 32);
    v10 = v9 | 0x40000000;
    v11 = v9 & 0xBFFFFFFF;
    if ( !v4 )
      v10 = v11;
    *(_DWORD *)(v8 + 32) = v10 | 0x80000000;
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( v6 );
  KeReleaseQueuedSpinLock(0xAuLL, v5);
  return v4;
}
