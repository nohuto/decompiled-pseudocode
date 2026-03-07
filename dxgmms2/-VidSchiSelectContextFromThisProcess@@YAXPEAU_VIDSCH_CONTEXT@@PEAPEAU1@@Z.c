void __fastcall VidSchiSelectContextFromThisProcess(struct _VIDSCH_CONTEXT *a1, struct _VIDSCH_CONTEXT **a2)
{
  _QWORD **v4; // rdi
  unsigned int i; // esi
  _QWORD *j; // rbx
  struct _VIDSCH_CONTEXT *v7; // rdx
  __int64 v8; // rax
  char v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 32LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL) + 4LL))
                 + 216LL);
  for ( i = 0; i < 2; ++i )
  {
    for ( j = *v4; j != v4; j = (_QWORD *)*j )
    {
      v7 = (struct _VIDSCH_CONTEXT *)(j - 52);
      if ( *(j - 40) == *((_QWORD *)a1 + 12) )
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v7 + 109, (*((_DWORD *)v7 + 46) >> 1) & 1, 3) != 2 )
          goto LABEL_6;
        v8 = *((_QWORD *)v7 + 12);
        v9 = 0;
        DpSynchronizeExecution(
          *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
          VidSchiResetContextQuantumAtISR,
          j - 52,
          *(unsigned int *)(*(_QWORD *)(v8 + 24) + 32LL),
          &v9);
      }
    }
  }
  v7 = a1;
LABEL_6:
  *a2 = v7;
}
