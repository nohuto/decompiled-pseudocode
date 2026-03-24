/*
 * XREFs of ?Initialize@CCursorClip@@SAJXZ @ 0x1C008A970
 * Callers:
 *     InitializeInputComponents @ 0x1C008B6CC (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C008AAEC (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 */

__int64 CCursorClip::Initialize(void)
{
  _OWORD *v0; // rax
  void **v1; // rcx
  unsigned int v2; // ebx

  v0 = Win32AllocPoolZInit(0x60uLL, 1919964227LL);
  v2 = 0;
  if ( v0 )
  {
    v1 = &CPushLock::`vftable';
    *v0 = 0LL;
    v0[1] = 0LL;
    *((_QWORD *)v0 + 4) = &CPushLock::`vftable';
    *((_QWORD *)v0 + 5) = 0LL;
    *((_QWORD *)v0 + 6) = 0LL;
    *(_OWORD *)((char *)v0 + 56) = 0LL;
    *((_DWORD *)v0 + 18) = 0;
    *((_QWORD *)v0 + 10) = 0LL;
    *((_DWORD *)v0 + 22) = 0;
    *((_WORD *)v0 + 46) = 0;
  }
  else
  {
    v0 = 0LL;
  }
  gpCursorClip = (CCursorClip *)v0;
  if ( v0 )
    InputExtensibilityCallout::RegisterCoreMsgProvider(v1, 1LL, 0LL);
  else
    return (unsigned int)-1073741801;
  return v2;
}
