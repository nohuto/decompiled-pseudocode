_BOOL8 __fastcall DxgkDWCloneCheckTargetID(int a1)
{
  DXGGLOBAL::GetGlobal();
  return (a1 & 0xFF000000) == 0;
}
