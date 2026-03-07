_QWORD *__fastcall KiIntSteerCalculateUniformDistribution(_QWORD **a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *result; // rax
  __int64 v7; // r8
  _QWORD *v8; // rsi
  int NextProcessorTarget; // eax
  unsigned int v10; // ecx
  _QWORD *v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *a2;
  v12 = 0LL;
  result = (_QWORD *)*((unsigned __int16 *)a2 + 4);
  WORD4(v12) = *((_WORD *)a2 + 4);
  *(_QWORD *)&v12 = v3;
  if ( v2 != a1 )
  {
    v7 = v3;
    do
    {
      v8 = v2 - 26;
      if ( (v7 & *(v2 - 18)) != 0 )
      {
        NextProcessorTarget = KiIntSteerGetNextProcessorTarget((__int64)(v2 - 26), (__int64)&v12);
        if ( NextProcessorTarget == -1 )
        {
          v3 |= v8[8] & *a2;
          *(_QWORD *)&v12 = v3;
          NextProcessorTarget = KiIntSteerGetNextProcessorTarget((__int64)(v2 - 26), (__int64)&v12);
        }
        v10 = KiProcessorIndexToNumberMappingTable[NextProcessorTarget];
        v3 &= ~(1LL << (v10 & 0x3F));
        *(_DWORD *)((char *)v8 + 186) = 0;
        *((_WORD *)v8 + 95) = 0;
        *((_WORD *)v8 + 92) = v10 >> 6;
        v8[22] = 1LL << (v10 & 0x3F);
        v11 = (_QWORD *)*v2;
        *(_QWORD *)&v12 = v3;
        if ( (_QWORD *)v11[1] != v2 || (result = (_QWORD *)v2[1], (_QWORD *)*result != v2) )
          __fastfail(3u);
        *result = v11;
        v11[1] = result;
        v7 = *a2;
      }
      v2 = (_QWORD *)*v2;
    }
    while ( v2 != a1 );
  }
  return result;
}
