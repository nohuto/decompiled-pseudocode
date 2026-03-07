__int64 __fastcall RtlpHpVsChunkComputeCost(_DWORD *a1, __int64 a2, unsigned int *a3, unsigned __int64 *a4)
{
  unsigned int v5; // r9d
  unsigned int v6; // ebx
  unsigned int v7; // r11d
  unsigned int v9; // eax
  unsigned __int64 v10; // r8
  __int64 result; // rax

  v5 = ((16 * (((unsigned int)a1 ^ (unsigned int)RtlpHpHeapGlobals ^ *a1) >> 16)
       + (unsigned __int64)((unsigned __int16)a1 & 0xFFF)
       + 4095) >> 12)
     - (((unsigned __int64)(16 * (((unsigned int)a1 ^ (unsigned int)RtlpHpHeapGlobals ^ *a1) >> 16)) + 4095) >> 12);
  v6 = ((_DWORD)a1 - a2 + 4127) & 0xFFFFF000;
  v7 = ((_DWORD)a1 + 16 * (((unsigned int)a1 ^ (unsigned int)RtlpHpHeapGlobals ^ *a1) >> 16) - a2) & 0xFFFFF000;
  if ( v6 < v7 )
  {
    v9 = v7 - v6;
    v10 = *(_QWORD *)(a2 + 16) & (-1LL << (v6 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v7 - 1) >> 12)));
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
  }
  *a3 = v9 >> 12;
  result = v5;
  *a4 = v10;
  return result;
}
