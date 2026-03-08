/*
 * XREFs of KeRemoveSystemServiceTable @ 0x140970E20
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  __int64 v3; // rcx

  if ( (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
    return 1;
  if ( (unsigned int)(a1 - 1) <= 1
    && ((_QWORD)xmmword_140E018E0 || (_QWORD)xmmword_140D1F160 || (_QWORD)xmmword_140D1F2E0) )
  {
    if ( a1 == 1 )
    {
      *(_QWORD *)&xmmword_140D1F160 = 0LL;
      LODWORD(xmmword_140D1F170) = 0;
      *((_QWORD *)&xmmword_140D1F170 + 1) = 0LL;
    }
    else
    {
      v3 = 2LL * (unsigned int)(a1 - 1);
      *(_QWORD *)&KeServiceDescriptorTableFilter[v3] = 0LL;
      LODWORD(KeServiceDescriptorTableFilter[v3 + 1]) = 0;
      *((_QWORD *)&KeServiceDescriptorTableFilter[v3 + 1] + 1) = 0LL;
    }
    return 1;
  }
  return 0;
}
