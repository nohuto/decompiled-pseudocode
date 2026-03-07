__int64 __fastcall NtGdiRectangle(Gre::Base *a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v18; // [rsp+58h] [rbp-80h]

  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, (HDC)a1);
  if ( v16[0] )
  {
    v18 = v16;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v17) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v17) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v17);
        if ( (unsigned int)GreRectangle(a1, a2, a3, a4, a5) )
          v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v17);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v17);
      }
    }
  }
  v12 = GreRectangle(a1, a2, a3, a4, a5);
  if ( v9 )
  {
    v14 = UserReferenceDwmApiPort(v11, v10, v13);
    DwmSyncFlushAndWaitForBatch(v14);
  }
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v12;
}
