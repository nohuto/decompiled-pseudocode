struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  struct tagSHADOW *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int128 v7; // [rsp+50h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]
  struct tagPOINT v9; // [rsp+88h] [rbp+10h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v9 = *(struct tagPOINT *)(*(_QWORD *)(v2 + 40) + 88LL);
    ThreadLock(*((_QWORD *)result + 1), &v7);
    zzzUpdateLayeredWindow(*((struct tagWND **)v3 + 1), 0LL, &v9, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v5, v4, v6);
  }
  return result;
}
