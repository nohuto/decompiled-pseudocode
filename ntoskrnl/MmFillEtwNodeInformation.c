/*
 * XREFs of MmFillEtwNodeInformation @ 0x140463310
 * Callers:
 *     EtwpLogMemNodeInfo @ 0x14045F526 (EtwpLogMemNodeInfo.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiGetPartitionNodeInformation @ 0x140657AE0 (MiGetPartitionNodeInformation.c)
 */

__int64 __fastcall MmFillEtwNodeInformation(unsigned __int16 **a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  unsigned __int16 *v4; // rbp
  unsigned int v8; // ebx
  _QWORD *v9; // rdi
  _QWORD v11[10]; // [rsp+20h] [rbp-58h] BYREF

  v4 = *a1;
  memset(v11, 0, 0x48uLL);
  if ( a3 > (unsigned __int16)KeNumberNodes )
    a3 = (unsigned __int16)KeNumberNodes;
  v8 = 0;
  if ( a3 )
  {
    v9 = (_QWORD *)(a2 + 20);
    do
    {
      MiGetPartitionNodeInformation(v4, v8++, v11);
      *(v9 - 2) = v11[0];
      *v9 = v11[2];
      *(v9 - 1) = v11[1];
      v9[2] = v11[4];
      v9[1] = v11[3];
      v9[4] = v11[6];
      v9[3] = v11[5];
      v9[6] = v11[8];
      v9[5] = v11[7];
      *((_DWORD *)v9 - 5) = v8;
      v9 = (_QWORD *)((char *)v9 + 76);
    }
    while ( v8 < a3 );
  }
  *a4 = *v4;
  return v8;
}
