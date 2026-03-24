/*
 * XREFs of ACPIPepWorker @ 0x1C00B1420
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00B1188 (ACPIPepPlatformEntryExitNotify.c)
 */

void __fastcall ACPIPepWorker(__int64 a1, char a2)
{
  struct _FAST_MUTEX *v2; // rsi
  int v5; // ecx
  char v6; // bp
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // eax
  __int128 InputBuffer; // [rsp+30h] [rbp-38h] BYREF

  v2 = (struct _FAST_MUTEX *)(a1 + 184);
  InputBuffer = 0LL;
LABEL_2:
  ExAcquireFastMutex(v2);
  while ( 1 )
  {
    v5 = *(_DWORD *)(a1 + 248);
    if ( v5 == *(_DWORD *)(a1 + 252) )
      break;
    if ( v5 >= *(_DWORD *)(a1 + 252) )
    {
      v6 = 0;
      v7 = v5 - 1;
    }
    else
    {
      ++v5;
      v6 = 1;
      v7 = v5;
    }
    *(_DWORD *)(a1 + 248) = v7;
    v8 = v5 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          v10 = 0;
        else
          v10 = -1;
      }
      else
      {
        v10 = 2;
      }
    }
    else
    {
      v10 = 1;
    }
    v11 = *(_DWORD *)(a1 + 244);
    if ( _bittest(&v11, v10) )
    {
      ExReleaseFastMutex(v2);
      ACPIPepPlatformEntryExitNotify(a1, v10, v6);
      goto LABEL_2;
    }
  }
  if ( *(_BYTE *)(a1 + 256) )
  {
    DWORD2(InputBuffer) = 0;
    *(_BYTE *)(a1 + 256) = 0;
    LODWORD(InputBuffer) = 40;
    BYTE12(InputBuffer) = 0;
    ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x10u, 0LL, 0);
  }
  ExReleaseFastMutex(v2);
  if ( (a2 & 1) != 0 )
    KeSetEvent((PRKEVENT)(a1 + 304), 0, 0);
}
