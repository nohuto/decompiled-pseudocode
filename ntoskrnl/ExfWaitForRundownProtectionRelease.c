/*
 * XREFs of ExfWaitForRundownProtectionRelease @ 0x1402D7C68
 * Callers:
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

int __fastcall ExfWaitForRundownProtectionRelease(volatile signed __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  bool v4; // zf
  signed __int32 *v5; // rax
  int v6; // edx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+38h] [rbp-28h] BYREF
  char *v15; // [rsp+48h] [rbp-18h]
  signed __int32 v16[4]; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)v16 = 1LL;
  v15 = 0LL;
  Object = 0LL;
  do
  {
    v3 = a2 >> 1;
    v13 = a2 >> 1;
    v5 = (signed __int32 *)_InterlockedCompareExchange64(a1, (signed __int64)&v13 + 1, a2);
    v4 = a2 == (_QWORD)v5;
    a2 = (unsigned __int64)v5;
  }
  while ( !v4 );
  if ( v3 )
  {
    v17 = 0;
    if ( KeGetCurrentIrql() >= 2u )
    {
      while ( 1 )
      {
        LODWORD(v5) = v16[0];
        if ( (v16[0] & 1) == 0 )
          break;
        KeYieldProcessorEx(&v17);
      }
    }
    else if ( MEMORY[0xFFFFF7800000036A] <= 1u )
    {
LABEL_11:
      LOWORD(Object) = 1;
      v15 = (char *)&Object + 8;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      v5 = v16;
      BYTE2(Object) = 6;
      DWORD1(Object) = 0;
      if ( _interlockedbittestandreset(v16, 0) )
        LODWORD(v5) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
    else if ( MEMORY[0xFFFFF78000000297] )
    {
      v8 = __rdtsc();
      v9 = v8 + (unsigned int)ExpSpinCycleCount;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        LODWORD(v5) = v16[0];
        if ( (v16[0] & 1) == 0 )
          break;
        v10 = v8;
        v11 = __rdtsc();
        v8 = v11;
        if ( v11 <= v10 || v11 >= v9 )
          goto LABEL_11;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      LODWORD(v5) = ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
      v6 = 0;
      while ( (v16[0] & 1) != 0 )
      {
        if ( v6 == (_DWORD)v5 )
          goto LABEL_11;
        _mm_pause();
        ++v6;
      }
    }
  }
  return (int)v5;
}
