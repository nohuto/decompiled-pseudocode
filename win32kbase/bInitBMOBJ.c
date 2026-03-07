__int64 __fastcall bInitBMOBJ(__int64 a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  struct _LIST_ENTRY *v5; // rbx

  SGDGetSessionState(a1);
  v1 = 0;
  result = GreCreateBitmap(1LL, 1, 1u, 1u, 0LL);
  v3 = result;
  if ( result )
  {
    v4 = HmgShareLockCheck(result, 5);
    v5 = (struct _LIST_ENTRY *)v4;
    if ( v4 )
    {
      HmgSetOwner(*(_QWORD *)(v4 + 32), 0, 5);
      bSetStockObject(v3, 21, 0);
      v5[2].Flink = (struct _LIST_ENTRY *)(v3 | 0x800000);
      WPP_MAIN_CB.Queue.ListEntry.Blink = v5;
      v1 = 1;
      HmgDecrementShareReferenceCountEx((int *)v5, 0LL);
    }
    return v1;
  }
  return result;
}
