/*
 * XREFs of NtQueryInformationAtom @ 0x1407DC6C0
 * Callers:
 *     <none>
 * Callees:
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     RtlQueryAtomInAtomTable @ 0x1407DB4E0 (RtlQueryAtomInAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1409B8FA8 (RtlQueryAtomsInAtomTable.c)
 */

__int64 __fastcall NtQueryInformationAtom(unsigned __int16 a1, int a2, _WORD *a3, unsigned int a4, int *a5)
{
  __int64 v9; // rcx
  int v10; // ebx
  int AtomsInAtomTable; // edx
  unsigned int v12; // eax
  int v14; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-30h] BYREF
  int v16; // [rsp+3Ch] [rbp-2Ch]
  int v17; // [rsp+40h] [rbp-28h] BYREF
  int v18[2]; // [rsp+48h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  v17 = 0;
  *(_QWORD *)v18 = 0LL;
  v15 = 0;
  v14 = 0;
  PsInvokeWin32Callout(2, (__int64)v18, 0, 0LL);
  if ( !*(_QWORD *)v18 )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    ProbeForWrite(a3, a4, 4u);
    if ( a5 )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a5;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  v10 = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v10 = 4;
      if ( a4 < 4 )
        return 3221225476LL;
      AtomsInAtomTable = RtlQueryAtomsInAtomTable(*(_QWORD *)v18, (a4 - 4) >> 1, a3, a3 + 2);
      v16 = AtomsInAtomTable;
      if ( AtomsInAtomTable >= 0 )
        v10 = 2 * *(_DWORD *)a3 + 4;
    }
    else
    {
      AtomsInAtomTable = -1073741821;
      v16 = -1073741821;
    }
  }
  else
  {
    v10 = 6;
    if ( a4 < 6 )
      return 3221225476LL;
    v14 = 0;
    v15 = a4 - 6;
    AtomsInAtomTable = RtlQueryAtomInAtomTable(*(__int64 *)v18, a1, &v14, &v17, a3 + 3, &v15);
    v16 = AtomsInAtomTable;
    if ( AtomsInAtomTable >= 0 )
    {
      *a3 = v14;
      a3[1] = v17;
      v12 = v15;
      a3[2] = v15;
      v10 = v12 + 8;
    }
  }
  if ( a5 )
    *a5 = v10;
  return (unsigned int)AtomsInAtomTable;
}
