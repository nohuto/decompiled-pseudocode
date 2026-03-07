__int64 __fastcall KiSelectIdealProcessorSetForProcessGroup(
        unsigned __int64 a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax
  int v6; // edx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  WORD4(v8) = a2;
  if ( a2 >= *(_WORD *)(a1 + 80) )
    v5 = 0LL;
  else
    v5 = *(_QWORD *)(a1 + 8LL * a2 + 88);
  v6 = *(unsigned __int16 *)(a1 + 2LL * a2 + 708);
  *(_QWORD *)&v8 = v5;
  return KiSelectIdealProcessorSetForGroup((unsigned int)&v8, v6, a3, a1 >> 12, a4, a5);
}
