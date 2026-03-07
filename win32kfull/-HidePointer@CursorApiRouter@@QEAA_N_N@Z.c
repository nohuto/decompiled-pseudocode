char __fastcall CursorApiRouter::HidePointer(CursorApiRouter *this, unsigned __int8 a2)
{
  char v2; // bl
  unsigned int v3; // esi
  char v4; // bp
  int v5; // edi
  CursorApiRouter *v6; // rcx
  int v7; // edi

  v2 = 0;
  v3 = a2;
  v4 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&qword_1C0362190, 0LL);
  v5 = dword_1C0362188;
  if ( dword_1C0362188 != 1 )
  {
    if ( dword_1C0362188 != 2 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( (unsigned int)GreUpdatePointerState(v3) )
  {
    byte_1C0362176 = v3;
LABEL_3:
    v4 = 1;
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(&qword_1C0362190, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        return (unsigned int)GreHidePointer(v3) != 0;
    }
    else
    {
      if ( (_BYTE)v3 )
        CursorApiRouter::DwmSetPointer(0LL, 0);
      else
        CursorApiRouter::ForceSetCurrentCursorShape(v6);
      return 1;
    }
  }
  return v2;
}
