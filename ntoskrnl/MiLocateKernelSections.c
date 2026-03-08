/*
 * XREFs of MiLocateKernelSections @ 0x140B5DE44
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140B5D84C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 */

__int64 __fastcall MiLocateKernelSections(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v3; // r8d
  unsigned int *v4; // rdx
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  __int64 v7; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  result = RtlImageNtHeader(v1);
  v3 = *(unsigned __int16 *)(result + 6);
  v4 = (unsigned int *)(*(unsigned __int16 *)(result + 20) + result + 24);
  if ( *(_WORD *)(result + 6) )
  {
    do
    {
      result = *v4;
      v5 = v4[4];
      v6 = v4[2];
      if ( (_DWORD)result == 1987011374 || (_DWORD)result == 1953655086 )
      {
        LODWORD(MiFlags) = MiFlags | 0x400;
      }
      else if ( (_DWORD)result == 1280266064 )
      {
        v7 = v1 + v4[3];
        if ( v4[1] == 1162104643 )
        {
          ExPoolCodeStart = v1 + v4[3];
          if ( v5 < v6 )
            v5 = v6;
          result = v5;
          ExPoolCodeEnd = ((v5 + v7 + 4095) & 0xFFFFFFFFFFFFF000uLL) - 1;
        }
      }
      --v3;
      v4 += 10;
    }
    while ( v3 > 0 );
  }
  return result;
}
