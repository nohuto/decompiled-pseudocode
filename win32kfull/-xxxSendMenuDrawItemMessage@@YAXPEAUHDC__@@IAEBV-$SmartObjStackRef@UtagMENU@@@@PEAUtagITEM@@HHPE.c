__int64 **__fastcall xxxSendMenuDrawItemMessage(
        __int64 a1,
        int a2,
        __int64 **a3,
        __int64 a4,
        int a5,
        int a6,
        struct tagWND *a7)
{
  struct tagWND *v7; // rdi
  __int64 v12; // rcx
  int v13; // esi
  int v14; // r15d
  __int64 **result; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int128 v25; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v26; // [rsp+50h] [rbp-A1h]
  _BYTE v27[16]; // [rsp+60h] [rbp-91h] BYREF
  int v28; // [rsp+70h] [rbp-81h]
  _BYTE v29[24]; // [rsp+A0h] [rbp-51h] BYREF
  _BYTE v30[56]; // [rsp+B8h] [rbp-39h] BYREF

  v7 = a7;
  memset_0(v27, 0, 0x90uLL);
  v12 = (__int64)a3[2];
  v26 = 0LL;
  v25 = 0LL;
  v13 = 1;
  if ( !v12 )
    v12 = **a3;
  v14 = MNIsUAHMenu(v12);
  result = (__int64 **)MNInitDrawItemStruct(a1, a2, (__int64 ***)a3, a4, a5, a6, (__int64)v27);
  if ( *(_QWORD *)(**a3 + 80) && ((**(_DWORD **)a4 & 0x100) != 0 || *(_QWORD *)(*(_QWORD *)a4 + 96LL) == -1LL) )
  {
    ThreadLockAlways(*(_QWORD *)(**a3 + 80), &v25);
    xxxSendMessage(*(struct tagWND **)(**a3 + 80), 0x2Bu);
    ThreadUnlock1(v17, v16, v18);
    v19 = (__int64)a3[2];
    if ( !v19 )
      v19 = **a3;
    result = (__int64 **)MNGetpItemIndex(v19, a4);
    if ( (_DWORD)result == -1 )
      v13 = 0;
  }
  if ( v14 )
  {
    if ( a7 || (result = (__int64 **)*a3, (v7 = *(struct tagWND **)(**a3 + 80)) != 0LL) )
    {
      if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) != 0x80000000 )
        v28 &= ~0x100u;
      v20 = a3[2];
      if ( !v20 )
        v20 = (__int64 *)**a3;
      MNInitUAHMenu(v20, a1, v29);
      if ( v13 )
      {
        v21 = a3[2];
        if ( !v21 )
          v21 = (__int64 *)**a3;
        MNInitUAHMenuItem(v21, a4, v30);
      }
      ThreadLockAlways(v7, &v25);
      xxxSendMessage(v7, 0x92u);
      return (__int64 **)ThreadUnlock1(v23, v22, v24);
    }
  }
  return result;
}
