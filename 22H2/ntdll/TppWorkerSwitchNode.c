/*
 * XREFs of TppWorkerSwitchNode @ 0x18004E904
 * Callers:
 *     TppWorkerFindTask @ 0x18004E664 (TppWorkerFindTask.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009D680 (NtSetInformationThread.c)
 *     TppETWWorkerNodeSwitch @ 0x180112C78 (TppETWWorkerNodeSwitch.c)
 */

__int64 __fastcall TppWorkerSwitchNode(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r14
  int v5; // edi
  __int64 result; // rax
  __int64 v8; // rcx
  __int16 v9; // si
  unsigned __int16 v10; // bp
  __int64 v11; // rcx
  int v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF

  v4 = *(unsigned int *)(a2 + 344);
  v5 = a1;
  result = *(unsigned int *)(a1 + 428);
  v12 = a4;
  if ( a3 == (_DWORD)v4 )
  {
    if ( (_DWORD)result == -1 && !*(_BYTE *)(a2 + 352) )
    {
      *(_BYTE *)(a2 + 352) = 1;
      result = *(_QWORD *)(a1 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(result + 4LL * a3));
    }
  }
  else
  {
    if ( (_DWORD)result == -1 )
    {
      if ( *(_BYTE *)(a2 + 352) )
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v4));
      else
        *(_BYTE *)(a2 + 352) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * a3));
    }
    *(_DWORD *)(a2 + 344) = a3;
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_WORD *)(v8 + 16LL * a3 + 8);
    v10 = *(_WORD *)(v8 + 16 * v4 + 8);
    result = (__int64)RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (__int64)NtCurrentPeb();
      v11 = *(_QWORD *)(result + 144) + 556LL;
    }
    else
    {
      v11 = 2147353478LL;
    }
    if ( *(_BYTE *)v11 )
      result = TppETWWorkerNodeSwitch(v5, v4, a3, v10, v9);
    if ( v10 != v9 )
    {
      v13 = 0LL;
      WORD4(v13) = v9;
      NtSetInformationThread(-2LL, 30LL, &v13, 16LL);
      return NtSetInformationThread(-2LL, 13LL, &v12, 4LL);
    }
  }
  return result;
}
