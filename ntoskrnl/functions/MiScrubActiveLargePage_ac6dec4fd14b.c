void __fastcall MiScrubActiveLargePage(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  _KPROCESS *v8; // r9
  $115DCDF994C6370D29323EAB0E0C9502 v9; // [rsp+20h] [rbp-68h] BYREF

  v3 = *a1;
  v4 = 0LL;
  memset(&v9, 0, sizeof(v9));
  if ( *(_QWORD *)(v3 + 64) )
  {
    do
    {
      if ( MiScrubInterrupted((__int64)a1) )
        break;
      KiStackAttachProcess(v8, 0, (__int64)&v9);
      MiScrubProcessLargePage(a1, a2, a3);
      KiUnstackDetachProcess(&v9);
      ++v4;
    }
    while ( v4 < *(_QWORD *)(v3 + 64) );
  }
}
