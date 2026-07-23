/*
 * XREFs of PspQueryProcessInterferenceCountCallback @ 0x140909290
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspQueryProcessInterferenceCountCallback(__int64 Object, __int64 a2)
{
  int v2; // eax
  int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v2 = *(_DWORD *)(Object + 1120);
  v7 = 0LL;
  if ( (v2 & 1) != 0 || !ObReferenceObjectSafeWithTag(Object) )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(Object + 1112)) )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 480LL);
      if ( v9 <= 0xFFFFFFFD )
      {
        *(_QWORD *)&v7 = Object;
        *((_QWORD *)&v7 + 1) = &v8;
        v5 = PsInvokeWin32Callout(24, (__int64)&v7, 1, &v9);
        if ( v5 >= 0 )
          **(_QWORD **)a2 += v8;
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(Object + 1112));
    }
    ObfDereferenceObjectWithTag((PVOID)Object, 0x624A7350u);
  }
  return (unsigned int)v5;
}
