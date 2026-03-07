char __fastcall DXGSESSIONMGR::CheckPnPTransitionForSession(DXGSESSIONMGR *this, void *a2, unsigned int a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ecx
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // r9
  char v10; // bl
  void *v11; // rdx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  if ( (unsigned int)v4 < *((_DWORD *)this + 20)
    && *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4)
    && (_mm_lfence(), v6 = 0, v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4), (v8 = *(_DWORD *)(v7 + 18760)) != 0) )
  {
    v9 = *(_QWORD *)(v7 + 18768);
    v10 = 1;
    while ( 1 )
    {
      v11 = *(void **)(32LL * v6 + v9 + 8);
      if ( v11 )
      {
        if ( v11 == a2 )
          break;
      }
      if ( ++v6 >= v8 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v10 = 0;
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v10;
}
