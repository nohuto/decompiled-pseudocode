/*
 * XREFs of VfCtxHookAndConnectInterruptEx @ 0x1409E50A0
 * Callers:
 *     VerifierIoConnectInterruptEx @ 0x1409CA530 (VerifierIoConnectInterruptEx.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ViCtxSetPrivateConnectParameters @ 0x1409E562C (ViCtxSetPrivateConnectParameters.c)
 */

__int64 __fastcall VfCtxHookAndConnectInterruptEx(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  PVOID v4; // rcx
  int v5; // eax
  int v6; // eax
  _QWORD v8[11]; // [rsp+20h] [rbp-58h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  memset(v8, 0, 0x50uLL);
  P = 0LL;
  if ( ViCtxInitializedIsrStateBlocks && (unsigned int)(*(_DWORD *)a1 - 1) <= 2 )
  {
    v2 = ViCtxSetPrivateConnectParameters(v8, a1, &P);
    if ( v2 >= 0 )
    {
      v3 = ((__int64 (__fastcall *)(_QWORD *))pXdvIoConnectInterruptEx)(v8);
      v4 = P;
      v2 = v3;
      if ( P )
      {
        v5 = v8[0];
        *(_DWORD *)a1 = v8[0];
        if ( v2 < 0 )
        {
          ExFreePoolWithTag(v4, 0);
        }
        else
        {
          v6 = v5 - 1;
          if ( !v6 || (unsigned int)(v6 - 1) <= 1 )
            *(_QWORD *)(a1 + 16) = v8[2];
        }
      }
    }
  }
  else
  {
    return (unsigned int)((__int64 (__fastcall *)(__int64))pXdvIoConnectInterruptEx)(a1);
  }
  return (unsigned int)v2;
}
