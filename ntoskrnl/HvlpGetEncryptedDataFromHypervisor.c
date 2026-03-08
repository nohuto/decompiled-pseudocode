/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x1405458B8
 * Callers:
 *     HvlGetEncryptedData @ 0x140545650 (HvlGetEncryptedData.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvlpEndPageListIteration @ 0x140547D2C (HvlpEndPageListIteration.c)
 *     HvlpGetPageList @ 0x140547DF4 (HvlpGetPageList.c)
 *     HvlpInvokeGetPageListHypercall @ 0x140547EC8 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x140547F78 (HvlpSetupPageListIteration.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(__int64 a1, char *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+74h] [rbp+Ch]

  v22 = HIDWORD(a1);
  v18 = 0LL;
  v21 = 0;
  *a5 = 0;
  if ( (HvlpRootFlags & 4) == 0 )
    return 3221226021LL;
  if ( !(_BYTE)HvlpCrashdumpIterationState )
  {
    v9 = HvlpSetupPageListIteration(1LL, HvlpAllPages == 0 ? 2 : 0);
    if ( v9 )
      HvlpInvokeGetPageListHypercall(v9, 0LL);
    *((_QWORD *)&HvlpCrashdumpIterationState + 1) = -1LL;
    LODWORD(xmmword_140C5F050) = 0;
    LOBYTE(HvlpCrashdumpIterationState) = 1;
  }
  v10 = xmmword_140C5F050;
  if ( (_DWORD)xmmword_140C5F050 )
  {
    v11 = *((_QWORD *)&HvlpCrashdumpIterationState + 1);
    v18 = *((_QWORD *)&HvlpCrashdumpIterationState + 1);
    v21 = xmmword_140C5F050;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &v18, &v21) )
    {
      HvlpEndPageListIteration(1LL);
      LOBYTE(HvlpCrashdumpIterationState) = 0;
      *((_QWORD *)&HvlpCrashdumpIterationState + 1) = -1LL;
      LODWORD(xmmword_140C5F050) = 0;
      return 3221226021LL;
    }
    v11 = v18;
    v10 = v21;
  }
  v12 = a3 >> 12;
  v13 = v10;
  if ( v12 < v10 )
    v13 = v12;
  if ( (_DWORD)v13 )
  {
    v19 = (unsigned int)v13;
    v14 = v11 << 12;
    v15 = v11;
    do
    {
      v20 = v14 & 0xFFFFFFFFFF000LL | 0x8000000000000001uLL;
      *(_QWORD *)(8 * (((unsigned __int64)qword_140C5F028 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v20;
      v16 = __readcr4();
      if ( (v16 & 0x20080) != 0 )
      {
        __writecr4(v16 ^ 0x80);
        __writecr4(v16);
      }
      else
      {
        v17 = __readcr3();
        __writecr3(v17);
      }
      memmove(a2, qword_140C5F028, 0x1000uLL);
      *a4 = v15;
      a2 += 4096;
      v14 += 4096LL;
      ++a4;
      ++v15;
      --v19;
    }
    while ( v19 );
  }
  *a5 = (_DWORD)v13 << 12;
  *((_QWORD *)&HvlpCrashdumpIterationState + 1) = v13 + v11;
  result = 0LL;
  LODWORD(xmmword_140C5F050) = v10 - v13;
  return result;
}
