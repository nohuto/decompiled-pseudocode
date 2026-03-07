__int64 __fastcall DxgMonitor::EDIDCACHE::GetEdids(DxgMonitor::EDIDCACHE *this, struct _D3DKMT_DXGK_DIAGNOSTICS *a2)
{
  unsigned int v4; // r8d
  _QWORD *v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  char *v9; // rbx
  unsigned int v10; // r9d
  unsigned int i; // edx
  char *v12; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DxgMonitor::EDIDCACHE *)((char *)this + 616), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v4 = 0;
  v5 = (_QWORD *)((char *)this + 8);
  v6 = 4LL;
  do
  {
    v7 = v4 + 1;
    if ( !*v5 )
      v7 = v4;
    v5 += 19;
    v4 = v7;
    --v6;
  }
  while ( v6 );
  if ( *(unsigned int *)a2 >= 152 * (unsigned __int64)v7 )
  {
    v9 = (char *)a2 + 4;
    v10 = 0;
    for ( i = 0; v10 < v7; ++i )
    {
      if ( i >= 4 )
        break;
      v12 = (char *)this + 152 * i;
      if ( *((_QWORD *)v12 + 1) )
      {
        *(_OWORD *)v9 = *(_OWORD *)(v12 + 8);
        *((_OWORD *)v9 + 1) = *(_OWORD *)(v12 + 24);
        *((_OWORD *)v9 + 2) = *(_OWORD *)(v12 + 40);
        *((_OWORD *)v9 + 3) = *(_OWORD *)(v12 + 56);
        *((_OWORD *)v9 + 4) = *(_OWORD *)(v12 + 72);
        *((_OWORD *)v9 + 5) = *(_OWORD *)(v12 + 88);
        *((_OWORD *)v9 + 6) = *(_OWORD *)(v12 + 104);
        *((_OWORD *)v9 + 7) = *(_OWORD *)(v12 + 120);
        *((_OWORD *)v9 + 8) = *(_OWORD *)(v12 + 136);
        *((_QWORD *)v9 + 18) = *((_QWORD *)v12 + 19);
        v9 += 152;
        ++v10;
      }
    }
    v8 = 0;
  }
  else
  {
    *(_DWORD *)a2 = 152 * v7;
    v8 = 1075707914;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v8;
}
