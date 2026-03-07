void __fastcall Control_EP_StopMapping(__int64 a1)
{
  KIRQL v2; // al
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v3 = *(_DWORD *)(a1 + 108);
  *(_BYTE *)(a1 + 104) = v2;
  *(_DWORD *)(a1 + 108) = v3 == 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( v3 != 3 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v4 + 37)
      || (v5 = *(_QWORD *)(v4 + 136), _InterlockedIncrement((volatile signed __int32 *)(v5 + 20)) == *(_DWORD *)(v5 + 8)) )
    {
      ESM_AddEvent((KSPIN_LOCK *)(v4 + 296), 20);
    }
  }
}
