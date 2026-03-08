/*
 * XREFs of PopPluginQueryComponentPerfSet @ 0x14058A24C
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x140982744 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfSet(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v8; // rax
  ULONG_PTR v10; // rbx
  __int64 result; // rax
  __int64 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+28h] [rbp-28h]
  int v14; // [rsp+2Ch] [rbp-24h]
  __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+48h] [rbp-8h]

  v8 = *(_QWORD *)(a1 + 72);
  v10 = *(_QWORD *)(a1 + 64);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v15 = 0LL;
  v13 = a2;
  v12 = v8;
  v14 = a3;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v10 + 96))(29LL, &v12) )
    PopFxBugCheck(0x605uLL, 0x1DuLL, v10, 0LL);
  *a4 = v16;
  *a5 = HIDWORD(v16);
  *a6 = v17;
  *a7 = v17;
  result = v18;
  *a8 = v18;
  return result;
}
