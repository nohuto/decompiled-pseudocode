/*
 * XREFs of MiInitializeHotPatches @ 0x140B481F8
 * Callers:
 *     MiInitSystem @ 0x140B47C18 (MiInitSystem.c)
 * Callees:
 *     ObReferenceObjectByHandle @ 0x1406E6370 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int MinimalProcess; // eax
  NTSTATUS v6; // eax
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  if ( a2 )
  {
    if ( (qword_140C69980 & 1) == 0 )
      return 1;
    MinimalProcess = PsCreateMinimalProcess(
                       (__int64)PsInitialSystemProcess,
                       (__int64)&unk_140C09490,
                       0LL,
                       BYTE2(PsInitialSystemProcess[2].Header.WaitListHead.Flink),
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       0LL,
                       &xmmword_140C69958);
    if ( MinimalProcess >= 0 )
    {
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(xmmword_140C69958, 0, 0LL, 0, &Object, 0LL);
      *(&xmmword_140C69948 + 1) = (ULONG_PTR)Object;
      if ( v6 >= 0 )
        return 1;
    }
  }
  else
  {
    qword_140C69928 = 0LL;
    *(_OWORD *)&xmmword_140C69930 = 0LL;
    *(_OWORD *)&xmmword_140C69948 = 0LL;
    qword_140C69940 = 0LL;
    *(_OWORD *)&xmmword_140C69958 = 0LL;
    dword_140C6997C = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3496LL) + 4095) & 0xFFFFF000;
    if ( (dword_140C6997C & 0x1FFF) == 0 )
    {
      v3 = qword_140C69980 | 2;
      LODWORD(qword_140C69980) = qword_140C69980 | 2;
      if ( dword_140C6997C && ((MiFlags & 0x4000) != 0 || dword_140D1D230 == 1) )
        LODWORD(qword_140C69980) = v3 | 1;
      return 1;
    }
  }
  return v2;
}
