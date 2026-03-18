/*
 * XREFs of ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C0061158
 * Callers:
 *     InternalRegisterClassEx @ 0x1C005FF10 (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C00F8130 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

char __fastcall InitLookAsideRef<tagCLS>(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax

  if ( !gpStackRefLookAside )
    KeBugCheck(4u);
  v3 = (_QWORD *)Win32AllocateFromPagedLookasideList(gpStackRefLookAside, a2);
  *(_QWORD *)(a1 + 128) = v3;
  if ( v3 )
  {
    *v3 = a1;
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 8LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 12LL) = 0;
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
