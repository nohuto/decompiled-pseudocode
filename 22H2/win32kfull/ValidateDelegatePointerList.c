/*
 * XREFs of ValidateDelegatePointerList @ 0x1C01EF6C0
 * Callers:
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F59E4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C01EFAB4 (WPP_RECORDER_SF_LLL.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F0F0C (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 */

__int64 __fastcall ValidateDelegatePointerList(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v7; // ebx
  unsigned int i; // edi
  int *v9; // rdx
  int v10; // esi
  unsigned int *v11; // rdx
  int v12; // ecx
  unsigned int v13; // r14d
  int v15; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+B0h] [rbp+18h]

  v17 = a3;
  v5 = a2;
  v7 = 1;
  for ( i = 0; i < a1; ++i )
  {
    v9 = (int *)(v5 + 4LL * i);
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (int *)MmUserProbeAddress;
    v10 = *v9;
    v11 = (unsigned int *)(a3 + 4LL * i);
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)v11 >= MmUserProbeAddress )
      v11 = (unsigned int *)MmUserProbeAddress;
    v13 = *v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_LLL(MmUserProbeAddress, (_DWORD)v11, a3, 10, v15, i, v10, v13);
    if ( !v10 || HIWORD(v10) || !v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_LLL(v12, (_DWORD)v11, a3, 11, v15, i, v10, v13);
      return 0;
    }
    PointerDelegateGetClient(v10, v13, (struct tagDELEGATEPOINTERMAP *)(((unsigned __int64)i << 7) + a4));
    a3 = v17;
    v5 = a2;
  }
  return v7;
}
