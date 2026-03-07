__int64 __fastcall DrvDisableMDEVChildren(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // esi
  __int64 v10; // rbp
  HDEV *v11; // rdi

  WdLogSingleEntry2(5LL, a1);
  v7 = 0LL;
  v8 = 1;
  if ( *((_DWORD *)a1 + 5) )
  {
    do
    {
      if ( a2 )
      {
        v10 = 56LL * (unsigned int)v7;
        v8 = DrvDisableDisplay(*(HSEMAPHORE **)((char *)a1 + v10 + 40), 0);
        if ( !v8 )
          goto LABEL_8;
        DrvDxgkDisplayOnOff(*(_QWORD *)((char *)a1 + v10 + 40), 0LL, a3);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *((_DWORD *)a1 + 5) );
    if ( v8 )
      goto LABEL_5;
LABEL_8:
    if ( (_DWORD)v7 )
    {
      v11 = (HDEV *)((char *)a1 + 40);
      do
      {
        if ( a2 )
        {
          LOBYTE(v6) = 1;
          DrvDxgkDisplayOnOff(*v11, v6, a3);
          while ( !(unsigned int)DrvEnableDisplay(*v11) )
            ;
        }
        v11 += 7;
        --v7;
      }
      while ( v7 );
    }
  }
LABEL_5:
  WdLogSingleEntry1(5LL, v8);
  return (unsigned int)v8;
}
