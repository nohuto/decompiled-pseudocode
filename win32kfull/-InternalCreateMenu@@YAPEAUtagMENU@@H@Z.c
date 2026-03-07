struct tagMENU *__fastcall InternalCreateMenu(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi

  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *(_QWORD *)(gptiCurrent + 592LL)
    && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 896LL), 4LL) )
  {
    return 0LL;
  }
  LOBYTE(a3) = 2;
  v5 = HMAllocObject(gptiCurrent, v4, a3);
  v6 = v5;
  v7 = v5;
  if ( v5 )
  {
    if ( (unsigned __int8)InitLookAsideRef<tagMENU>(v5) )
    {
      if ( a1 )
      {
        *(_DWORD *)(*(_QWORD *)(v7 + 40) + 40LL) = 1;
        *(_OWORD *)(v7 + 128) = 0LL;
        *(_DWORD *)(v7 + 144) = 0;
      }
    }
    else
    {
      HMFreeObject(v6);
      return 0LL;
    }
  }
  return (struct tagMENU *)v6;
}
