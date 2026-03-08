/*
 * XREFs of PopPluginQueryComponentPerfStates @ 0x14058A384
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x140982744 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfStates(__int64 a1, int a2, int a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = a2;
  v8 = a3;
  v9 = a4;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(v4 + 96))(31LL, &v6);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x605uLL, 0x1FuLL, v4, 0LL);
  return result;
}
