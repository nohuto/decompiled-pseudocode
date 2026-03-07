__int64 __fastcall SynchronizeContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( grpdeskRitInput )
  {
    v4 = *((_QWORD *)grpdeskRitInput + 1);
    v5 = *(_QWORD *)(v4 + 176);
    *(_QWORD *)&v7 = **(_QWORD **)v4;
    if ( v5 )
      DWORD2(v7) = *(_DWORD *)(v5 + 56);
    else
      DWORD2(v7) = 0;
  }
  return SendMessageTo(20LL, (__int64)&v7, 16LL, a4);
}
