__int64 __fastcall MiFindPlaceholderVadToReplace(unsigned __int64 a1, __int64 a2, char a3, int *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 **Address; // rax
  __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // eax

  CurrentThread = KeGetCurrentThread();
  Address = MiLocateAddress(a1);
  v10 = (__int64)Address;
  if ( !Address )
    goto LABEL_11;
  MiLockVad((__int64)CurrentThread, (__int64)Address);
  v11 = *(_DWORD *)(v10 + 48);
  if ( (v11 & 4) != 0
    || (v12 = *(unsigned int *)(v10 + 52),
        LODWORD(v12) = v12 & 0x7FFFFFFF,
        (v12 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) != 0x7FFFFFFFDLL)
    || (v13 = *(unsigned int *)(v10 + 24), (v13 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12 != a1)
    || (v14 = *(unsigned int *)(v10 + 28),
        (((v14 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF) != a2) )
  {
    MiUnlockVad((__int64)CurrentThread, v10);
LABEL_11:
    *a4 = -1073741800;
    return 0LL;
  }
  if ( (v11 & 8) == 0
    || (v15 = MiCheckSecuredVad(v10, (_DWORD)v13 << 12, ((int)v14 - (int)v13 + 1) << 12, 85, a3), *a4 = v15, v15 >= 0) )
  {
    *a4 = 0;
    return v10;
  }
  MiUnlockVad((__int64)CurrentThread, v10);
  return 0LL;
}
