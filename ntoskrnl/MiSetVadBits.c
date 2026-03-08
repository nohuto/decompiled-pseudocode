/*
 * XREFs of MiSetVadBits @ 0x1407D6BE0
 * Callers:
 *     MiUpdateVadBits @ 0x140729534 (MiUpdateVadBits.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 */

void __fastcall MiSetVadBits(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  _KPROCESS *Process; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r10
  int v10; // r14d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8

  v1 = 0;
  v2 = ((unsigned __int64)*(unsigned int *)(a1 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 28);
  v3 = ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 28);
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = Process[1].ActiveProcessors.StaticBitmap[28] + 48;
  if ( *(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 264) )
  {
    v6 = 0LL;
    do
    {
      v7 = (_QWORD *)(v5 + 72 * v6);
      v8 = (unsigned __int64)(-524288 * qword_140C66CE8 + (v7[1] << 19)) >> 16;
      if ( v3 >= v8 )
      {
        v9 = v8 + *v7;
        if ( v2 < v9 )
        {
          v10 = 0;
          v11 = v2;
          if ( v2 < v8 )
          {
            v11 = (unsigned __int64)(-524288 * qword_140C66CE8 + (v7[1] << 19)) >> 16;
            v10 = 1;
          }
          if ( v3 >= v9 )
            v10 = 1;
          v12 = v9 - 1;
          if ( v3 < v9 )
            v12 = v3;
          RtlSetBitsEx((__int64)v7, v11 - v8, v12 - v11 + 1);
          if ( !v10 )
            break;
        }
      }
      v6 = ++v1;
    }
    while ( (unsigned __int64)v1 < *(_QWORD *)(v5 + 216) );
  }
}
