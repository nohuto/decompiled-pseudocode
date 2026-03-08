/*
 * XREFs of KiTryPopulateLogicalProcessorInformation @ 0x1402A9990
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x1402AA2C0 (KeQueryLogicalProcessorRelationship.c)
 * Callees:
 *     KiOrAffinityEx @ 0x14022B190 (KiOrAffinityEx.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 */

__int64 __fastcall KiTryPopulateLogicalProcessorInformation(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        char a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  unsigned int v13; // edi
  unsigned int v14; // esi
  unsigned int v15; // r15d
  int v16; // eax
  __int64 result; // rax
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // dx
  _QWORD *v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // cx
  __int64 v25; // rdx

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = KiAndAffinityEx(a2, a1, 0LL, 0);
  if ( a3 || !v16 )
  {
    v18 = 0;
    if ( a2 )
      v18 = a2[1];
    KiOrAffinityEx((char *)a2, a1, a2, v18);
    v19 = 0;
    if ( *a1 )
    {
      v20 = a1 + 4;
      v21 = *a1;
      do
      {
        v22 = *v20 == 0LL;
        v23 = v19 + 1;
        ++v20;
        if ( v22 )
          v23 = v19;
        v19 = v23;
        --v21;
      }
      while ( v21 );
    }
    v14 = (16 * v19 + 39) & 0xFFFFFFF8;
    if ( v14 + a7 <= a6 )
    {
      v24 = 0;
      *(_WORD *)(a5 + 30) = v19;
      v25 = a5 + 32;
      *(_DWORD *)a5 = a4;
      *(_DWORD *)(a5 + 4) = v14;
      *(_WORD *)(a5 + 8) = 0;
      *(_OWORD *)(a5 + 10) = 0LL;
      for ( *(_DWORD *)(a5 + 26) = 0; v24 < *a1; ++v24 )
      {
        if ( *(_QWORD *)&a1[4 * v24 + 4] )
        {
          *(_OWORD *)v25 = 0LL;
          *(_WORD *)(v25 + 8) = v24;
          *(_QWORD *)v25 = *(_QWORD *)&a1[4 * v24 + 4];
          v25 += 16LL;
        }
      }
      v15 = v14;
    }
    else
    {
      v13 = -1073741820;
    }
  }
  result = v13;
  *a9 = v15;
  *a8 = v14;
  return result;
}
