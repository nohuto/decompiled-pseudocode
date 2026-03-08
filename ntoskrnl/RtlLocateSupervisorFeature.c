/*
 * XREFs of RtlLocateSupervisorFeature @ 0x1405AD630
 * Callers:
 *     KiInitializeContextThread @ 0x140237E9C (KiInitializeContextThread.c)
 *     KiGetSavedIptState @ 0x140570400 (KiGetSavedIptState.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlLocateSupervisorFeature(_QWORD *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // edx
  _DWORD *v10; // rax

  v3 = a2;
  if ( a2 - 2 > 0x3D )
    return 0LL;
  if ( (MEMORY[0xFFFFF780000005F0] & (1LL << a2)) == 0 )
    return 0LL;
  v6 = 2;
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return 0LL;
  v7 = a1[1];
  if ( v7 >= 0 )
    return 0LL;
  v8 = v7 & *a1;
  if ( !_bittest64(&v8, a2) )
    return 0LL;
  v9 = 64;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = (_DWORD *)0xFFFFF7800000060CLL;
    do
    {
      if ( ((1LL << v6) & v7) != 0 )
      {
        if ( ((1LL << v6) & MEMORY[0xFFFFF780000005F8]) != 0 )
          v9 = (v9 + 63) & 0xFFFFFFC0;
        v9 += *v10;
      }
      ++v6;
      ++v10;
    }
    while ( v6 < (unsigned int)v3 );
  }
  if ( (MEMORY[0xFFFFF780000005F8] & (1LL << v3)) != 0 )
    v9 = (v9 + 63) & 0xFFFFFFC0;
  if ( a3 )
    *a3 = *(_DWORD *)(4 * v3 - 0x87FFFFFF9FCLL);
  return (char *)a1 + v9;
}
