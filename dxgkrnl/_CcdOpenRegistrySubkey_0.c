/*
 * XREFs of _CcdOpenRegistrySubkey_0 @ 0x1C01C00A8
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01BEF10 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C01BF8C0 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01C0040 (_CcdOpenRegistrySubkey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CcdOpenRegistrySubkey_0(void **a1, ACCESS_MASK a2, void *a3, struct _UNICODE_STRING *a4, ULONG *a5)
{
  struct _OBJECT_ATTRIBUTES v6; // [rsp+40h] [rbp-38h] BYREF

  v6.RootDirectory = a3;
  *(_QWORD *)&v6.Length = 48LL;
  *(_QWORD *)&v6.Attributes = 576LL;
  v6.ObjectName = a4;
  *(_OWORD *)&v6.SecurityDescriptor = 0LL;
  if ( a5 )
    return ZwCreateKey(a1, a2, &v6, 0, 0LL, 0, a5);
  else
    return ZwOpenKey(a1, a2, &v6);
}
