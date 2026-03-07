void __fastcall xxxImmActivateLayout(struct tagTHREADINFO *a1, struct tagKL *a2)
{
  char *v2; // rsi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  __int128 *v7; // r9
  struct tagWND *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-28h] BYREF

  v13[2] = 0LL;
  v2 = (char *)a1 + 440;
  if ( *((struct tagKL **)a1 + 55) != a2 )
  {
    if ( *((_QWORD *)a1 + 98) )
    {
      v5 = PtiCurrentShared((__int64)a1);
      v6 = *((_QWORD *)a1 + 98);
      v13[0] = *((_QWORD *)v5 + 52);
      *((_QWORD *)v5 + 52) = v13;
      v13[1] = v6;
      HMLockObject(v6);
      v7 = (__int128 *)*((_QWORD *)a2 + 5);
      v8 = (struct tagWND *)*((_QWORD *)a1 + 98);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v8, 0x287u, 0x19uLL, v7, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v10, v9, v11);
    }
    v12[0] = v2;
    v12[1] = a2;
    HMAssignmentLock(v12, 0LL);
  }
}
