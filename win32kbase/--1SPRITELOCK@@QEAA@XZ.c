/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x1C00A6D90
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // r8d
  struct _ERESOURCE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( *(_QWORD *)this )
  {
    v1 = *(_QWORD *)(SGDGetSessionState(this) + 24);
    v2 = *(_QWORD *)(v1 + 112);
    v4 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
    if ( *(_DWORD *)(v4 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(v4, (unsigned int)&LockRelease, v5, v2, (__int64)L"GreBaseGlobals.hsemSprite");
    v6 = *(struct _ERESOURCE **)(v1 + 112);
    if ( v6 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v6);
      PsLeavePriorityRegion(v8, v7);
    }
  }
}
