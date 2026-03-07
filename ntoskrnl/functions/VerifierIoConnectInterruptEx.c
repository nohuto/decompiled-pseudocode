__int64 __fastcall VerifierIoConnectInterruptEx(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  PVOID v4; // rcx
  int v5; // eax
  int v6; // eax
  _QWORD v8[11]; // [rsp+20h] [rbp-58h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  memset(v8, 0, 0x4CuLL);
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks && (unsigned int)(*(_DWORD *)a1 - 1) <= 2 )
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
