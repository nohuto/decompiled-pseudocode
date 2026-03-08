/*
 * XREFs of ?s_OnIdleAtFrameBegin@CInteractionTracker@@CAJPEAX@Z @ 0x180232C20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180098D74 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::s_OnIdleAtFrameBegin(_QWORD *a1)
{
  bool v1; // zf
  _QWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[6] == 0LL;
  v4 = a1;
  if ( !v1 )
    CResource::InvalidateAnimationSources((CResource *)a1, 60);
  *((_BYTE *)a1 + 540) &= ~0x80u;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v4);
  return 0LL;
}
