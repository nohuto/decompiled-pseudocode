/*
 * XREFs of HvlpStartSecurePageListIteration @ 0x14054800C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140544308 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140544434 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140545098 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x140545AC0 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HvlpEndPageListIteration @ 0x140547D2C (HvlpEndPageListIteration.c)
 *     HvlpSetupPageListIteration @ 0x140547F78 (HvlpSetupPageListIteration.c)
 *     VslStartSecurePageIteration @ 0x14054A6A8 (VslStartSecurePageIteration.c)
 */

__int64 __fastcall HvlpStartSecurePageListIteration(int a1, int a2, char *a3, void *a4, unsigned int a5, LONGLONG **a6)
{
  LONGLONG v9; // rax
  int v10; // ecx
  LONGLONG **v12; // r12
  LONGLONG *v13; // r14
  unsigned int v14; // ebx
  __int128 v15; // rtt
  __int64 v16; // rbp
  unsigned int v17; // ebx
  char *v18; // r15
  __int64 v19; // rbp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  PHYSICAL_ADDRESS v21; // rax
  int started; // r8d
  int v23; // [rsp+30h] [rbp-38h]

  v9 = (LONGLONG)HvlpSetupPageListIteration(a1, 1);
  v10 = v9;
  if ( !v9 )
    return 3221225473LL;
  v12 = a6;
  v13 = *(LONGLONG **)(v9 + 8);
  v14 = 0;
  v15 = *(__int64 *)(v9 + 16);
  *a6 = v13;
  v16 = v15 / 4096;
  v23 = v16;
  LODWORD(v9) = 0;
  if ( a3 )
  {
    v17 = 0x200000;
    v18 = a3;
    if ( a5 <= 0x200000 )
      v17 = a5;
    v14 = v17 >> 12;
    if ( v14 )
    {
      v19 = v14;
      do
      {
        PhysicalAddress = MmGetPhysicalAddress(v18);
        v18 += 4096;
        *v13++ = PhysicalAddress.QuadPart / 4096;
        --v19;
      }
      while ( v19 );
      v12 = a6;
      LODWORD(v16) = v23;
    }
    v21 = MmGetPhysicalAddress(a4);
    *v12 = (LONGLONG *)a3;
    v10 = 4096;
    v9 = v21.QuadPart / 4096;
  }
  LOBYTE(v10) = a1 == 0;
  started = VslStartSecurePageIteration(v10, v16, v9, v14, a2);
  if ( started < 0 )
    HvlpEndPageListIteration(a1);
  return (unsigned int)started;
}
