/*
 * XREFs of ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SAJPEAPEAVCoreWindowProp@@@Z @ 0x1C0222C48
 * Callers:
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0222DF4 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowProp::CreateWindowProp<CoreWindowProp>(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = Win32AllocPoolZInit(56LL, 1920430933LL);
  if ( v3 )
  {
    *a1 = v3;
    *(_OWORD *)v3 = 0LL;
    *(_OWORD *)(v3 + 16) = 0LL;
    *(_OWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)v3 = &CoreWindowProp::`vftable';
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
