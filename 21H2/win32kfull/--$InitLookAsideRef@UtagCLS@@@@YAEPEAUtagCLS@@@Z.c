/*
 * XREFs of ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C007A6B8
 * Callers:
 *     ReferenceClass @ 0x1C0025580 (ReferenceClass.c)
 *     InternalRegisterClassEx @ 0x1C0079DD0 (InternalRegisterClassEx.c)
 * Callees:
 *     <none>
 */

char __fastcall InitLookAsideRef<tagCLS>(__int64 a1)
{
  _QWORD *v2; // rax

  if ( !gpStackRefLookAside )
    KeBugCheck(4u);
  v2 = (_QWORD *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside);
  *(_QWORD *)(a1 + 128) = v2;
  if ( v2 )
  {
    *v2 = a1;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 12LL) = 0;
    LOBYTE(v2) = 1;
  }
  return (char)v2;
}
