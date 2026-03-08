/*
 * XREFs of ?SignalOnDirty@SFMLOGICALSURFACE@@QEAAJH@Z @ 0x1C001F3EC
 * Callers:
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C001F308 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::SignalOnDirty(SFMLOGICALSURFACE *this, int a2)
{
  __int64 v2; // rbx
  int v4; // esi
  __int64 v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax

  v2 = 0LL;
  v4 = 0;
  *((_DWORD *)this + 61) = *((_DWORD *)this + 61) & 0xFFFFFFFD | (a2 != 0 ? 2 : 0);
  if ( a2 )
  {
    if ( *((_DWORD *)this + 57) )
    {
      v7 = Gre::Base::Globals(this);
      v4 = SfmTokenArray::TransferTokens(*((SfmTokenArray **)v7 + 809), (SFMLOGICALSURFACE *)((char *)this + 216));
      if ( v4 >= 0 )
        SfmSignalTokenEvent();
    }
  }
  v5 = *((_QWORD *)this + 23);
  if ( v5 )
    v2 = *(_QWORD *)(v5 + 8);
  EtwLogicalSurfEnableDirtyNotificationEvent(*(_QWORD *)this, v2);
  return (unsigned int)v4;
}
