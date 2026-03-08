/*
 * XREFs of PfTFreeBufferList @ 0x1407E5940
 * Callers:
 *     PfTCreateTraceDump @ 0x1407E51A0 (PfTCreateTraceDump.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PfTLbInitialize @ 0x1407E5A08 (PfTLbInitialize.c)
 */

__int64 __fastcall PfTFreeBufferList(unsigned int *a1)
{
  _QWORD *v1; // rsi
  unsigned int v2; // ebp
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  __int64 result; // rax

  v1 = a1 + 6;
  v2 = *a1 >> 4;
  while ( 1 )
  {
    v4 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v1 == v4 )
      break;
    if ( (_QWORD *)*v4 != v1 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    v1[1] = v5;
    *v5 = v1;
    if ( (*a1 & 0xF) != 0 )
    {
      memset(v4, 0, v2);
      v4[1] = v4;
      *v4 = v4;
      *((_DWORD *)v4 + 8) = 2048;
    }
    else
    {
      PfTLbInitialize(v4, v2, 1LL);
    }
    *v4 = *((_QWORD *)a1 + 2);
    ++*((_WORD *)a1 + 5);
    *((_QWORD *)a1 + 2) = v4;
  }
  result = *a1;
  if ( (result & 0xF) == 0 )
    return PfTLbInitialize(*v1, v2, 1LL);
  return result;
}
