__int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 *v6; // rcx
  $115DCDF994C6370D29323EAB0E0C9502 v8; // [rsp+20h] [rbp-48h] BYREF

  memset(&v8, 0, sizeof(v8));
  KiStackAttachProcess(a1, 0, (__int64)&v8);
  v4 = a1[1].Affinity.StaticBitmap[24];
  if ( v4 )
  {
    v5 = 0LL;
    v6 = (__int64 *)a1[1].Affinity.StaticBitmap[30];
    if ( v6 )
      v5 = *v6;
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)(v4 + 80), 0x60u);
      if ( v5 )
        _InterlockedOr((volatile signed __int32 *)(v5 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v4 + 80), 0xFFFFFFBF);
      if ( v5 )
        _InterlockedAnd((volatile signed __int32 *)(v5 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess(&v8);
}
