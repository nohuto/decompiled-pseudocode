void __fastcall UnlockAndFreeCPDs(struct _CALLPROCDATA **a1)
{
  __int64 i; // rdx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = (__int64)*a1; ; i = (__int64)*a1 )
  {
    v3 = i;
    if ( !i )
      break;
    *a1 = *(struct _CALLPROCDATA **)(i + 56);
    *(_QWORD *)(i + 56) = 0LL;
    if ( (*(_BYTE *)(_HMPheFromObject(v3) + 25) & 1) == 0 )
      HMMarkObjectDestroy(v3);
    HMAssignmentUnlock(&v3);
  }
}
