/*
 * XREFs of KiInitializeDescriptorIst @ 0x1403726E0
 * Callers:
 *     KiEnableKvaShadowing @ 0x140A864CC (KiEnableKvaShadowing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeDescriptorIst(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r9
  __int64 v3; // r10
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 4132);
  v3 = 7LL;
  v4 = (_QWORD *)(a2 + 17360);
  do
  {
    if ( *v2 )
    {
      v5 = (_QWORD *)(*v2 - 32LL);
      result = a1 - 384;
      *v4 = a1 - 384;
      v4[1] = v5;
      *v5 = v4;
      *v2 = v4;
    }
    v4 += 64;
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
