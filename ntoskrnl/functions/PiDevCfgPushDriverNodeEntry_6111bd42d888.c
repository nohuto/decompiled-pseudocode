__int64 __fastcall PiDevCfgPushDriverNodeEntry(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _QWORD *Pool2; // rax
  _QWORD *v6; // rcx

  v4 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1667526736LL);
  if ( Pool2 )
  {
    Pool2[2] = a2;
    v6 = *(_QWORD **)(a1 + 8);
    if ( *v6 != a1 )
      __fastfail(3u);
    *Pool2 = a1;
    Pool2[1] = v6;
    *v6 = Pool2;
    *(_QWORD *)(a1 + 8) = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
