/*
 * XREFs of NtUserGetImeHotKey @ 0x1C01D2B10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1C01FE59C (-GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z.c)
 */

__int64 __fastcall NtUserGetImeHotKey(__int64 a1, unsigned int *a2, unsigned int *a3, HKL *a4)
{
  unsigned int v7; // ebx
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx
  _QWORD *v10; // rdx
  HKL *v11; // rsi
  __int64 v12; // rcx
  int ImeHotKey; // ebx
  unsigned int v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+24h] [rbp-34h] BYREF
  HKL *v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF

  v7 = a1;
  v15 = 0;
  v16 = 0;
  v18 = 0LL;
  v17 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (_DWORD *)MmUserProbeAddress;
  *v8 = *v8;
  v9 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v9 = (_DWORD *)MmUserProbeAddress;
  *v9 = *v9;
  if ( a4 )
  {
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_QWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v17 = (HKL *)&v18;
  }
  v11 = v17;
  ImeHotKey = GetImeHotKey(v7, &v15, &v16, v17);
  if ( ImeHotKey )
  {
    *a2 = v15;
    v12 = v16;
    *a3 = v16;
    if ( a4 )
      *a4 = *v11;
  }
  UserSessionSwitchLeaveCrit(v12);
  return ImeHotKey;
}
