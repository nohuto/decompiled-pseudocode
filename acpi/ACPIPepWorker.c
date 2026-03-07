void __fastcall ACPIPepWorker(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v2; // rdi
  int v5; // esi
  int v6; // eax
  char v7[4]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+34h] [rbp-24h] BYREF
  __int128 InputBuffer; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  v2 = (struct _FAST_MUTEX *)(a1 + 184);
  v7[0] = 0;
  InputBuffer = 0LL;
LABEL_2:
  ExAcquireFastMutex(v2);
  while ( ACPIPepGetNextPlatformNotification(a1, &v8, v7) )
  {
    v5 = v8;
    v6 = *(_DWORD *)(a1 + 244);
    if ( _bittest(&v6, v8) )
    {
      ExReleaseFastMutex(v2);
      ACPIPepPlatformEntryExitNotify(a1, v5, v7[0]);
      goto LABEL_2;
    }
  }
  if ( *(_BYTE *)(a1 + 257) )
  {
    DWORD2(InputBuffer) = 0;
    *(_BYTE *)(a1 + 257) = 0;
    LODWORD(InputBuffer) = 40;
    BYTE12(InputBuffer) = 0;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, 0LL, 0);
  }
  ExReleaseFastMutex(v2);
  if ( (a2 & 1) != 0 )
    KeSetEvent((PRKEVENT)(a1 + 312), 0, 0);
}
