int __fastcall ExpOptimizePushLockList(volatile signed __int64 *a1, signed __int64 a2)
{
  signed __int64 v2; // rax
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  signed __int64 v7; // rtt

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
      if ( !*(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) )
      {
        do
        {
          v5 = v4;
          v4 = (_QWORD *)v4[3];
          v4[5] = v5;
          v6 = v4[4];
        }
        while ( !v6 );
        if ( v4 != (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0uLL) )
          *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v6;
      }
      v7 = v2;
      v2 = _InterlockedCompareExchange64(a1, v2 - 4, v2);
      if ( v7 == v2 )
        break;
      if ( (v2 & 1) == 0 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(v2) = ExpWakePushLock(a1, v2);
  }
  return v2;
}
