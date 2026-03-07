__int64 __fastcall ViDdiDispatchWmiRegInfoEx(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int *v4; // r14
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184);
  if ( *(_QWORD *)(v2 + 8) == a1 )
  {
    v4 = *(unsigned int **)(v2 + 32);
    v5 = *(_DWORD *)(v2 + 24);
    v6 = ViDdiBuildWmiRegInfoData(*(_DWORD *)(v2 + 16), 0LL);
    v7 = v6;
    if ( v6 <= v5 )
    {
      ViDdiBuildWmiRegInfoData(*(_DWORD *)(v2 + 16), (__int64)v4);
      result = 0LL;
      *(_QWORD *)(a2 + 56) = v7;
      return result;
    }
    if ( v5 >= 4 )
    {
      *v4 = v6;
      result = 3221225507LL;
      *(_QWORD *)(a2 + 56) = 4LL;
      return result;
    }
  }
  return 3221225659LL;
}
