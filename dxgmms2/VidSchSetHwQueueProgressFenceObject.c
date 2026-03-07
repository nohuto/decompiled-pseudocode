void __fastcall VidSchSetHwQueueProgressFenceObject(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  unsigned int *v5; // r8
  __int64 v6; // rdx

  if ( a3 >= 2 )
  {
    *(_QWORD *)(a1 + 104) = a2;
  }
  else
  {
    v3 = a3;
    v4 = 3LL * a3;
    *(_QWORD *)(a1 + 24LL * a3 + 56) = a2;
    v5 = *(unsigned int **)(a2 + 64);
    if ( *(_BYTE *)(a2 + 29) )
      v6 = *(_QWORD *)v5;
    else
      v6 = *v5;
    *(_QWORD *)(a1 + 8 * v4 + 64) = v6;
    *(_QWORD *)(a1 + 24 * v3 + 72) = v6;
  }
}
