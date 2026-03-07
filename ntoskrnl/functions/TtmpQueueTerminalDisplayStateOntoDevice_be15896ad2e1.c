void __fastcall TtmpQueueTerminalDisplayStateOntoDevice(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rsi
  _QWORD *v5; // r8
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 Pool2; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax

  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    v5 = (_QWORD *)(a1 + 16 * (a3 + 8LL));
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      while ( 1 )
      {
        if ( v6[3] == *(_QWORD *)(a2 + 24) && *((_DWORD *)v6 + 8) == *(_DWORD *)(a2 + 32) )
        {
          v7 = 2867LL;
          v8 = 3221226026LL;
          goto LABEL_9;
        }
        if ( v6[2] >= v3 )
          break;
        v6 = (_QWORD *)*v6;
        if ( v6 == v5 )
          goto LABEL_11;
      }
      v6 = (_QWORD *)v6[1];
    }
LABEL_11:
    Pool2 = ExAllocatePool2(256LL, 40LL, 1148023892LL);
    v10 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 16) = v3;
      *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a2 + 32);
      v11 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        __fastfail(3u);
      *v10 = v11;
      v10[1] = v6;
      *(_QWORD *)(v11 + 8) = v10;
      *v6 = v10;
    }
    else
    {
      v7 = 2902LL;
      v8 = 3221225626LL;
LABEL_9:
      TtmiLogError("TtmpQueueTerminalDisplayStateOntoDevice", v7, v8, 0xFFFFFFFFLL);
    }
  }
}
