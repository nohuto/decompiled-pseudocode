/*
 * XREFs of C3Idle @ 0x1C000DDA0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00086DC (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00089F8 (WriteGenAddr.c)
 */

void __fastcall C3Idle(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned int GenAddr; // eax
  unsigned int v5; // eax
  __int64 v6; // rdi

  v2 = a2;
  _InterlockedExchange(&ProcBmRldSet, 1);
  GenAddr = ReadGenAddr((__int64)&dword_1C001CE8C);
  WriteGenAddr(&dword_1C001CE8C, GenAddr | 2LL);
  if ( qword_1C001CE9C )
  {
    v5 = ReadGenAddr((__int64)&dword_1C001CE98);
    WriteGenAddr(&dword_1C001CE98, v5 | 2LL);
  }
  v6 = (unsigned int)ReadGenAddr((__int64)&dword_1C001CEA4);
  WriteGenAddr(&dword_1C001CEA4, v6 | 1);
  if ( (_DWORD)v2 )
    __writemsr(0x48u, 0LL);
  ReadGenAddr(a1);
  WriteGenAddr(&dword_1C001CEA4, v6);
  if ( (_DWORD)v2 )
    __writemsr(0x48u, v2);
  else
    _mm_lfence();
}
