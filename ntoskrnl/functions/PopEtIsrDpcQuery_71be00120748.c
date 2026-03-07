__int64 __fastcall PopEtIsrDpcQuery(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-29h] BYREF
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-21h] BYREF
  __int16 v10; // [rsp+38h] [rbp-11h]
  int v11; // [rsp+3Ah] [rbp-Fh]
  __int16 v12; // [rsp+3Eh] [rbp-Bh]
  _QWORD v13[8]; // [rsp+40h] [rbp-9h] BYREF

  v2 = *(_OWORD **)(a1 + 2280);
  memset(v13, 0, sizeof(v13));
  v11 = 0;
  v12 = 0;
  v8 = 0;
  memset(a2, 0, 0x1B0uLL);
  v9[1] = (unsigned __int16 *)qword_140D1EFE8[0];
  v9[0] = (unsigned __int16 *)KeActiveProcessors;
  v10 = 0;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v8, v9);
    if ( (_DWORD)result )
      break;
    KeQueryCycleTimeStatsProcessor(KiProcessorBlock[v8], v13);
    v5 = a2;
    v6 = 4LL;
    do
    {
      v7 = 2LL;
      do
      {
        *v5 += *(_QWORD *)((char *)v5 + (char *)v13 - (char *)a2);
        ++v5;
        --v7;
      }
      while ( v7 );
      --v6;
    }
    while ( v6 );
  }
  *v2 = *a2;
  v2[1] = a2[1];
  v2[2] = a2[2];
  v2[3] = a2[3];
  return result;
}
