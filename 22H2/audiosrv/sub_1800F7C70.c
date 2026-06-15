/*
 * XREFs of sub_1800F7C70 @ 0x1800F7C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_1800F759C @ 0x1800F759C (sub_1800F759C.c)
 *     sub_1800F7938 @ 0x1800F7938 (sub_1800F7938.c)
 *     sub_180112490 @ 0x180112490 (sub_180112490.c)
 */

__int64 __fastcall sub_1800F7C70(__int64 a1, const wchar_t *a2, unsigned int a3)
{
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  DWORD LastError; // ebx
  __int64 v12; // rcx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  WINBOOL v15; // [rsp+98h] [rbp+20h] BYREF

  v5 = sub_180008448(a1, sub_1800B6240);
  sub_1800085F0(pv, (struct _TP_TIMER *)v5[1], v6, (struct _TP_TIMER *)L"s_mmeNotifyDeviceStateChanged");
  LastError = 0;
  if ( (unsigned int)sub_1800F759C(v8, v7, &v15) )
  {
    if ( !v15 || (sub_1800F7938(a2), sub_180112490(v12, a2, a3), !v15) )
      LastError = 5;
  }
  else
  {
    LastError = GetLastError();
  }
  sub_18000F690((__int64)pv, v9, v10);
  return LastError;
}
